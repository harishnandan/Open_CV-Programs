/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;

int main(){
Mat img; int d, x; int cnt = 0;
img = imread("pentagon.png", 0);
int a = 2 * (sqrt(img.rows*img.rows + img.cols*img.cols));
Mat hough(a+1, 180, CV_8UC1, Scalar(0));
for (int i = 0; i < img.rows; i++)
{
for (int j = 0; j < img.cols; j++)
{
if (img.at<uchar>(i, j) == 255)
{
for (x = 0; x < 180; x++)
{
double v = CV_PI*x / 180;
d = a / 2 + (j*cos(v) + i*sin(v));
hough.at<uchar>(d/2, x)+=3;

}
}
}
}

namedWindow("hough", 1);
imshow("hough", hough);
waitKey(0);
return 0;
}

*/