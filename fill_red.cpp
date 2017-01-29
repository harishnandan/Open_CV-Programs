/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;


Mat img = imread("binary.png", 0);
Mat img1(img.rows, img.cols, CV_8UC3, Scalar(0,0,0));


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

void dfs_visit(int i, int j, int cnt)
{
int k, l;
img1.at<Vec3b>(i, j)[2] = cnt*60;
for (k = i - 1; k <= i + 1; k++)
{
for (l = j - 1; l <= j + 1; l++){
if (!img1.at<Vec3b>(k, l)[2] && (img.at<uchar>(i, j) == 255))

{
dfs_visit(k, l, cnt);
}
}
}

}

void Callbackfunc(int Event, int y, int x, int flags, void *userdata){
if (Event == EVENT_LBUTTONDOWN){
int p = img1.at<Vec3b>(x, y)[2];
for(int i=0;i<img1.rows;i++)
for (int j = 0; j < img1.cols;j++)
if (img1.at<Vec3b>(i, j)[2] ==p ) img1.at<Vec3b>(i, j)[2] = 255;
}
imshow("hit", img1);
}

int main(){
img = binary(img);
int i, j, x, y, cnt = 1;
for (i = 1; i < img.rows - 1; i++)
{
for (j = 1; j < img.cols - 1; j++)
{
if (!img1.at<Vec3b>(i, j)[2] && (img.at<uchar>(i, j) == 255))
{
dfs_visit(i, j, cnt);
cnt++;
}
}
}

cout << "no of blobs is:" << cnt - 1;
namedWindow("hit", WINDOW_NORMAL);
imshow("hit", img1);
setMouseCallback("hit", Callbackfunc, NULL);

waitKey(0);
return 0;
}

*/