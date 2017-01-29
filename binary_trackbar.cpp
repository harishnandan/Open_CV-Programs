/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){
Mat original;
int i, j, v;
v = 127;
original = imread("a.png", 0);
namedWindow("binary", WINDOW_AUTOSIZE);

Mat binary(original.rows, original.cols, CV_8UC1, Scalar(0));
createTrackbar("afro_circus","binary", &(v), 255);
while (1){
for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++){
if (original.at<uchar>(i, j)>v) binary.at<uchar>(i, j) = 255;
else binary.at<uchar>(i, j) = 0;
}
imshow("binary", binary);
i = waitKey(50);
if (i == 'e') break;
}
return 0;
}
*/
