/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>


using namespace std;
using namespace cv;
int main(){
Mat img, img1, img2; vector<vector<Point>>contour; vector<Vec4i> hier;
img = imread("try.png", 1);
int th_min = 0, th_max = 120;
//namedWindow("img", WINDOW_NORMAL);
createTrackbar("threshhold_min", "img", &th_min, 100);
createTrackbar("threshhold_max", "img", &th_max, 300);
RNG rng(12345);
while (1){
Canny(img, img1, th_min, th_max);
findContours(img1,contour, hier, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);
Mat drawing = Mat::zeros(img1.size(), CV_8UC3);
for (int i = 0; i< contour.size(); i++)
{
Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
drawContours(drawing, contour, i, color, 2, 8, hier, 0, Point());
}

/// Show in a window
//namedWindow("Contours", CV_WINDOW_AUTOSIZE);
imshow("Contours", drawing);

imshow("img", img1);
if (waitKey(50) == 'e') break;
}
return 0;
}

*/