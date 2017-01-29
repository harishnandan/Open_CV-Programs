/*
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
using namespace std;
using namespace cv;
int main()
{
Mat img1 = imread("2.jpg", 0);
int i, j, arr[256];
for (i = 0; i<256; i++)
arr[i] = 0;
int max = 0;
for (i = 0; i<img1.rows; i++)
{
for (j = 0; j<img1.cols; j++)
{
int val1 = img1.at<uchar>(i, j);
arr[val1]++;
}
}
for (i = 0; i<256; i++)
{
if (arr[i]>max)
max = arr[i];
}
double fact = 600.0 / max;
printf("%f\n", fact);
Mat his(600, 256, CV_8UC1, Scalar(0));
for (i = 0; i<600; i++)
{
for (j = 0; j<256; j++)
{
if (i<(600 - (int)(arr[j] * fact)))
{
his.at<uchar>(i, j) = 255;
}
}
}
namedWindow("Terminal", WINDOW_NORMAL);
imshow("Terminal", his);
waitKey(0);
return 0;
}
*/