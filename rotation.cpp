/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

Mat rotate(Mat image, int angle){
double diagonal = sqrt(image.rows*image.rows + image.cols*image.cols);
int x, y, x1, y1;
Mat image2(diagonal, diagonal, CV_8UC1);
int cx1 = diagonal / 2, cy1 = diagonal / 2;
for (int r = 0; r < image.rows; r++)
for (int c = 0; c < image.cols; c++)
{
x = c - image.cols / 2; y = r - image.rows / 2;
x1 = x*cos((float)angle*3.14 / 180) - y*sin((float)angle*3.14 / 180);
y1 = x*sin((float)angle*3.14 / 180) + y*cos((float)angle*3.14 / 180);
image2.at<uchar>(cx1 + x1, cy1 + y1) = image.at<uchar>(r, c);
}
return image2;
}
int main(){
Mat image = imread("2.jpg", 0);
Mat image2 = rotate(image, 45);
namedWindow("rotate", WINDOW_AUTOSIZE);
imshow("rotate", image2);
waitKey(0);
return 0;
}
*/
