/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>

using namespace std;
using namespace cv;

int main(){
Mat img = imread("lenna.jpg", 1);
Mat img1(img.rows, img.cols, CV_8UC1, Scalar(0));
int r = 0, b = 0, g = 0, e = 0; int i, j;
namedWindow("display", WINDOW_NORMAL);
createTrackbar("red", "display", &r, 255);
createTrackbar("blue", "display", &b, 255);
createTrackbar("green", "display", &g, 255);
createTrackbar("error", "display", &e, 255);
while (1){
for (i = 0; i<img.rows;i++)
for (j = 0; j<img.cols;j++)
if (img.at<Vec3b>(i, j)[2] >(r - e) && img.at<Vec3b>(i, j)[2]<(r + e) && img.at<Vec3b>(i, j)[0]>(b - e) && img.at<Vec3b>(i, j)[0]<(b + e) && img.at<Vec3b>(i, j)[1]>(g - e) && img.at<Vec3b>(i, j)[1] < (g + e))
img1.at<uchar>(i, j) = 255; else img1.at<uchar>(i, j) = 0;
imshow("dislpay", img1);
if (waitKey(50) == 'e') break;
}
return 0;

}
*/