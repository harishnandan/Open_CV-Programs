/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>

using namespace std;
using namespace cv;
typedef struct{
int x; int y;
}point;

Mat img = imread("binary.png", 0);
Mat img1(img.rows, img.cols, CV_8UC1, Scalar(0));

Mat binary(Mat img){
Mat img1(img.rows, img.cols, CV_8UC1, Scalar(0));
int i, j;
for (i = 0; i <img.rows; i++)
for (j = 0; j <img.cols; j++){
if (img.at<uchar>(i, j)>127) img1.at<uchar>(i, j) = 255;
else img.at<uchar>(i, j) = 0;
}
return img1;
}
int isValid(Mat img, int i, int j){
if ((i<0) || (j<0) || (i>img.rows) || (j>img.cols)) return 0;
else return 1;
}

void bfs(int i, int j){
point start, current;
start.x = i;
start.y = j;
queue<point>q;
q.push(start);
img1.at<uchar>(i, j) = 1;
while (!q.empty()){
current = q.front();
q.pop();
for (int k = current.x - 1; k <= current.x + 1; k++){
for (int l = current.y - 1; l <= current.y + 1; l++)
{
if (isValid(img,k,l))
if (img1.at<uchar>(k, l) == 0 && (img.at<uchar>(k, l) == 255)){
point rec;
rec.x = k;
rec.y = l;
q.push(rec);
img1.at<uchar>(k, l) = 255;
}

}
}
}
}
int main(){
img = binary(img);
int i, j, x, y, cnt = 1;
for (i = 1; i < img.rows - 1; i++)
{
for (j = 1; j < img.cols - 1; j++)
{
if (!img1.at<uchar>(i, j) && (img.at<uchar>(i, j) == 255))
{
bfs(i, j);
cnt++;
}
}
}
cout << "no of blobs is:" << cnt - 1;
namedWindow("hit", WINDOW_NORMAL);
imshow("hit", img1);
waitKey(0);
return 0;
}

*/