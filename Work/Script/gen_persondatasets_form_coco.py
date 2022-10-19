# coding:utf-8

import os
import argparse
import shutil

"""
This script can be used to extract txt and img from a certain class in the coco dataset.
"""

# parser = argparse.ArgumentParser()
# parser.add_argument('--txt_path', default=r'D:\qiuzx\mydataset\coco\coco2017labels\coco\labels\train2017', type=str, help='output txt label path')
# parser.add_argument('--img_path',default=r'D:\qiuzx\mydataset\coco\train2017\train2017',type=str, help='input img path')
# opt = parser.parse_args()


# imgfilepath = opt.img_path
# txtfilepath = opt.txt_path
#原始路径
imgfilepath = r'D:\qiuzx\mydataset\coco\coco2017labels\coco\labels\train2017'
txtfilepath = r'D:\qiuzx\mydataset\coco\train2017\train2017'
#生成的路径
new_imgpath = r'D:\qiuzx\mydataset\coco\val2017\cocoperson\train2017\newimg/'
new_txtpath = r'D:\qiuzx\mydataset\coco\val2017\cocoperson\train2017\newlabels/'


txtsavepath = opt.txt_path
total_img = os.listdir(imgfilepath)
total_txt = os.listdir(txtfilepath)

if not os.path.exists(txtsavepath):
    os.makedirs(txtsavepath)

num = len(total_txt)
list_index = range(num)

for i in list_index:
    # name = total_xml[i][:-4] + '\n'
    name = total_txt[i]
    f = open(txtfilepath+"/"+name)
    print(name)
    line = f.readline()
    flag = False
    while line:
        # print(type(line))
        cla = line.split(" ")[0]
        cla = int(cla)
        #提取person类
        if(cla==0):
            #保存该图片
            old_img_path = imgfilepath + '/' + name.split(".")[0]+'.jpg'
            new_img_path = new_imgpath + name.split(".")[0]+'.jpg'
            #保存txt
            new_txt_path = new_txtpath + name

            if os.path.exists(old_img_path):
                #复制图片
                shutil.copy(old_img_path, new_img_path)
                #修改txt
                f1 = open(new_txt_path, 'a', encoding="utf-8")
                f1.writelines(line)
            else:
                break
            print(line, end='')  # end = ''表示不换行
            print(cla)

        line = f.readline()

print("end")
