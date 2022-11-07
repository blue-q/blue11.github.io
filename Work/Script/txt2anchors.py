# -*- coding: utf-8 -*-
# 根据标签文件求先验框

import os
import numpy as np
import cv2
import xml.etree.cElementTree as et
from kmeans import kmeans, avg_iou

txt_ROOT = r"/home/dell/qiuzx/crowdhuman数据集/labels/"


ANCHORS_TXT_PATH = r"/home/dell/qiuzx/crowdhuman数据集/anchors.txt"

CLUSTERS = 9
CLASS_NAMES = ["head"]


def load_data(txt_dir):
    txt_names = os.listdir(txt_dir)
    boxes = []
    for txt_name in txt_names:
        #获取每个txt的路径
        txt_pth = os.path.join(txt_dir, txt_name)
        name = txt_name.split('.')[0]

        f = open(txt_pth)
        # print(f)
        line = f.readline()
        while line:
            # print(float(line.split(" ")[1]))
            xmin = float(line.split(" ")[1]) - (float(line.split(" ")[3])/2)
            xmax = float(line.split(" ")[1]) + (float(line.split(" ")[3]) / 2)
            ymin = float(line.split(" ")[2]) - (float(line.split(" ")[4])/2)
            ymax = float(line.split(" ")[2]) + (float(line.split(" ")[4]) / 2)
            box = [xmax - xmin, ymax - ymin]
            boxes.append(box)
            line = f.readline()



    return np.array(boxes)

if __name__ == '__main__':

    anchors_txt = open(ANCHORS_TXT_PATH, "w")

    train_boxes = load_data(txt_ROOT)
    count = 1
    best_accuracy = 0
    best_anchors = []
    best_ratios = []
    
    for i in range(200):      ##### 可以修改，不要太大，否则时间很长
        anchors_tmp = []
        print(11111111111111111111111111)
        clusters = kmeans(train_boxes, k=CLUSTERS)
        idx = clusters[:, 0].argsort()
        clusters = clusters[idx]
        # print(clusters)

        for j in range(CLUSTERS):
            anchor = [round(clusters[j][0] * 640, 2), round(clusters[j][1] * 640, 2)]
            anchors_tmp.append(anchor)
            print(f"Anchors:{anchor}")

        temp_accuracy = avg_iou(train_boxes, clusters) * 100
        print("Train_Accuracy:{:.2f}%".format(temp_accuracy))

        ratios = np.around(clusters[:, 0] / clusters[:, 1], decimals=2).tolist()
        ratios.sort()
        print("Ratios:{}".format(ratios))
        print(20 * "*" + " {} ".format(count) + 20 * "*")

        count += 1

        if temp_accuracy > best_accuracy:
            best_accuracy = temp_accuracy
            best_anchors = anchors_tmp
            best_ratios = ratios

    anchors_txt.write("Best Accuracy = " + str(round(best_accuracy, 2)) + '%' + "\r\n")
    anchors_txt.write("Best Anchors = " + str(best_anchors) + "\r\n")
    anchors_txt.write("Best Ratios = " + str(best_ratios))
    anchors_txt.close()
