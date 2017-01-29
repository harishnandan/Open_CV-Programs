/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){
Mat original;
int i, j;
original = imread("a.png", 1);
Mat gray(original.rows, original.cols, CV_8UC1, Scalar(0));
for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++){
gray.at<uchar>(i, j) = (original.at<Vec3b>(i, j)[0] + original.at<Vec3b>(i, j)[1] + original.at<Vec3b>(i, j)[2]) / 3;
}
Mat binary(original.rows, original.cols, CV_8UC1, Scalar(0));
for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++){
if (gray.at<uchar>(i, j)>127) binary.at<uchar>(i, j) = 255;
else binary.at<uchar>(i, j) = 0;
}
Mat apple(original.rows, original.cols, CV_8UC1, Scalar(0));
for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++){
if (original.at<Vec3b>(i, j)[2]>original.at<Vec3b>(i, j)[1] + 100 && original.at<Vec3b>(i, j)[2]>original.at<Vec3b>(i, j)[0] + 100)
apple.at<uchar>(i, j) = 255;
else apple.at<uchar>(i, j) = 0;
}

namedWindow("gray", WINDOW_AUTOSIZE);
namedWindow("binary", WINDOW_AUTOSIZE);
namedWindow("apple", WINDOW_AUTOSIZE);
imshow("gray", gray);
imshow("binary", binary);
imshow("apple", apple);
waitKey(0);
return 0;
}

*/