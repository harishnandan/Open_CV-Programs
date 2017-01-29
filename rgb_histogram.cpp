/*

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
using namespace std;
using namespace cv;
int main()
{
Mat img1 = imread("2.jpg", 1);
int i, j, arr1[256];
for (i = 0; i<256; i++)
arr1[i] = 0;
int max = 0;
for (i = 0; i<img1.rows; i++)
{
for (j = 0; j<img1.cols; j++)
{
int val1 = img1.at<Vec3b>(i, j)[2];
arr1[val1]++;
}
}
for (i = 0; i<256; i++)
{
if (arr1[i]>max)
max = arr1[i];
}
double fact = 600.0 / max;
printf("%f\n", fact);
Mat his1(600, 256, CV_8UC3, Scalar(0,0,255));
for (i = 0; i<600; i++)
{
for (j = 0; j<256; j++)
{
if (i<(600 - (int)(arr1[j] * fact)))
{
his1.at<Vec3b>(i, j)[2] = 0;
}
}
}
namedWindow("Red", WINDOW_NORMAL);
imshow("Red", his1);
int arr2[256];
for (i = 0; i<256; i++)
arr2[i] = 0;
max = 0;
for (i = 0; i<img1.rows; i++)
{
for (j = 0; j<img1.cols; j++)
{
int val1 = img1.at<Vec3b>(i, j)[1];
arr2[val1]++;
}
}
for (i = 0; i<256; i++)
{
if (arr2[i]>max)
max = arr2[i];
}
fact = 600.0 / max;
printf("%f\n", fact);
Mat his2(600, 256, CV_8UC3, Scalar(0, 255,0));
for (i = 0; i<600; i++)
{
for (j = 0; j<256; j++)
{
if (i<(600 - (int)(arr2[j] * fact)))
{
his2.at<Vec3b>(i, j)[1] = 0;
}
}
}
namedWindow("Green", WINDOW_NORMAL);
imshow("Green", his2);
int arr3[256];
for (i = 0; i<256; i++)
arr3[i] = 0;
max = 0;
for (i = 0; i<img1.rows; i++)
{
for (j = 0; j<img1.cols; j++)
{
int val1 = img1.at<Vec3b>(i, j)[0];
arr3[val1]++;
}
}
for (i = 0; i<256; i++)
{
if (arr3[i]>max)
max = arr3[i];
}
fact = 600.0 / max;
printf("%f\n", fact);
Mat his3(600, 256, CV_8UC3, Scalar(255,0, 0));
for (i = 0; i<600; i++)
{
for (j = 0; j<256; j++)
{
if (i<(600 - (int)(arr3[j] * fact)))
{
his3.at<Vec3b>(i, j)[0] = 0;
}
}
}
namedWindow("Blue", WINDOW_NORMAL);
imshow("Blue", his3);
waitKey(0);
return 0;
}

*/