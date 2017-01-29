/*
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>

using namespace cv;
using namespace std;

int hl = 7, hh = 20, sl = 125, sh = 230, vl = 225, vh = 253;
int a;
int flag = 0, countt1 = 0, countt2 = 0, cent = 0, c1 = 0;
void main()
{
int iter = 0;
VideoCapture vc("new.mp4");
namedWindow("Change", WINDOW_NORMAL);
a = vc.get(CV_CAP_PROP_FRAME_COUNT);
Mat image;
Mat HSV(720, 1120, CV_8UC3);
Mat combine(720, 1120, CV_8UC3);

createTrackbar("H_l", "Change", &hl, 180);
createTrackbar("H_h", "Change", &hh, 180);
createTrackbar("S_l", "Change", &sl, 255);
createTrackbar("S_h", "Change", &sh, 255);
createTrackbar("V_l", "Change", &vl, 255);
createTrackbar("V_h", "Change", &vh, 255);
//image = imread("G:\\c1\\p1.png");

while (++iter)
{
if (iter > a) goto dh;

vc >> image;
cent = 0; c1 = 0;

if (iter % 5 != 0)
continue;
for (int i = 0; i < HSV.rows; i++)
for (int j = 0; j < HSV.cols; j++)
{
HSV.at<Vec3b>(i, j)[0] = image.at<Vec3b>(i, j)[0];
HSV.at<Vec3b>(i, j)[1] = image.at<Vec3b>(i, j)[1];
HSV.at<Vec3b>(i, j)[2] = image.at<Vec3b>(i, j)[2];
}

cvtColor(HSV, HSV, CV_BGR2HSV);


inRange(HSV, Scalar(hl, sl, vl), Scalar(hh, sh, vh), combine);

erode(combine, combine, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));
dilate(combine, combine, getStructuringElement(MORPH_ELLIPSE, Size(6, 6)), Point2i(-1, -1), 5);


imshow("Main", image);
imshow("Result", combine);

for (int i = 0; i < combine.rows; i++)
for (int j = 0; j < combine.cols; j++)
if (combine.at<uchar>(i, j) == 255)
{
cent += j; c1++;
}
if (c1 != 0)
cent /= c1;

if (cent < 63 && flag == 0 && c1>10 && cent>2)
{
flag = 1; countt1++; cout << "Goal by Team1: " << countt1 << endl;
}

if (abs(cent - 386)<50)
flag = 0;

if (cent > 1070 && flag == 0 && c1>10)
{
flag = 1; countt2++;    cout << "Goal by Team2: " << countt2 << endl;
}

//cout << "countt1=" << countt1 << "  countt2=" << countt2 << "cent=" << cent<<endl;
//cout << "HSV(386,568)" <<(int) HSV.at<Vec3b>(386, 568)[0]<<endl;

if (waitKey(1) == 'e')
break;

}
dh:
cout << "Score Team1=" << countt1 << "  Score Team2=" << countt2 << endl;
getchar();
exit(0);
}

*/