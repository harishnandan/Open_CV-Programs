/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>
#include <string>
#include <queue>
#include<vector>
#include<windows.networking.networkoperators.h>

using namespace std;
using namespace cv;

typedef struct{
	int x;
	int y;
}coord;
coord atf[15];
coord rect[15];



int main(){
	VideoCapture capture("conquest_sample_arena.webm");
	Mat image1;
	Mat img1 = imread("round1.png");
	

		capture.read(image1);
		IplImage *img = new IplImage(image1);
		int i = 0; int recta = 0;
		cvNamedWindow("Raw");
		cvShowImage("Raw", img);

		//converting the original image into grayscale
		IplImage* imgGrayScale = cvCreateImage(cvGetSize(img), 8, 1);
		IplImage* imgCanny = cvCreateImage(cvGetSize(img), 8, 1);
		cvCvtColor(img, imgGrayScale, CV_BGR2GRAY);

		//thresholding the grayscale image to get better results
		cvThreshold(imgGrayScale, imgGrayScale, 128, 255, CV_THRESH_BINARY);

		CvSeq* contours;  //hold the pointer to a contour in the memory block
		CvSeq* result;   //hold sequence of points of a contour
		CvMemStorage *storage = cvCreateMemStorage(0); //storage area for all contours

		//finding all contours in the image
		cvFindContours(imgGrayScale, storage, &contours, sizeof(CvContour), CV_RETR_LIST, CV_CHAIN_APPROX_SIMPLE, cvPoint(0, 0));

		//iterating through each contour
		while (contours)
		{
			//obtain a sequence of points of contour, pointed by the variable 'contour'
			result = cvApproxPoly(contours, sizeof(CvContour), storage, CV_POLY_APPROX_DP, cvContourPerimeter(contours)*0.02, 0);

			//if there are 3  vertices  in the contour(It should be a triangle)
			if (result->total == 3)
			{
				//iterating through each point
				CvPoint *pt[3];
				for (int i = 0; i < 3; i++){
					pt[i] = (CvPoint*)cvGetSeqElem(result, i);
				}
				if (pt[0]->x < image1.rows && pt[0]->y < image1.cols && pt[1]->x < image1.rows && pt[1]->y < image1.cols && pt[2]->x < image1.rows && pt[2]->y < image1.cols){
					//drawing lines around the triangle
					cvLine(img, *pt[0], *pt[1], cvScalar(255, 0, 0), 2);
					cvLine(img, *pt[1], *pt[2], cvScalar(255, 0, 0), 2);
					cvLine(img, *pt[2], *pt[0], cvScalar(255, 0, 0), 2);
					int a, b, c, d, e, f;
					a = pt[0]->x;
					b = pt[0]->y;
					c = pt[1]->x;
					d = pt[1]->y;
					e = pt[2]->x;
					f = pt[2]->y;
					atf[i].x = (a + c + e) / 3; atf[i].y = (b + d + f) / 3;

					cout << "a=" << atf[i].x << " ";
					cout << "b=" << atf[i].y << " ";
					cout << "i=" << i << "\n";
					i++;
				}
			}

			//if there are 4 vertices in the contour(It should be a quadrilateral)
			else if (result->total == 4)
			{
				//iterating through each point
				CvPoint *pt[4];
				for (int i = 0; i < 4; i++){
					pt[i] = (CvPoint*)cvGetSeqElem(result, i);
				}
				if (pt[0]->x < image1.rows && pt[0]->y < image1.cols && pt[1]->x < image1.rows && pt[1]->y < image1.cols && pt[2]->x < image1.rows && pt[2]->y < image1.cols && pt[3]->x < image1.rows && pt[3]->y < image1.cols)
				{

					//drawing lines around the quadrilateral
					cvLine(img, *pt[0], *pt[1], cvScalar(0, 255, 0), 2);
					cvLine(img, *pt[1], *pt[2], cvScalar(0, 255, 0), 2);
					cvLine(img, *pt[2], *pt[3], cvScalar(0, 255, 0), 2);
					cvLine(img, *pt[3], *pt[0], cvScalar(0, 255, 0), 2);
					int a1, b1, c1, d1, e1, f1, g1, h1;
					a1 = pt[0]->x;
					b1 = pt[0]->y;
					c1 = pt[1]->x;
					d1 = pt[1]->y;
					e1 = pt[2]->x;
					f1 = pt[2]->y;
					g1 = pt[3]->x;
					h1 = pt[3]->y;
					rect[recta].x = (a1 + c1 + e1 + g1) / 4;
					rect[recta].y = (b1 + d1 + f1 + h1) / 4;

					cout << "rect (a,b)=" << rect[recta].x << "," << rect[recta].y << "\n";
					recta++;

				}

				//obtain the next contour
				contours = contours->h_next;
			}

			//show the image in which identified shapes are marked   
			cvNamedWindow("Tracked");
			cvShowImage("Tracked", img);
			imshow("imgy", img1);
			cvWaitKey(0); //wait for a key press

			//cleaning up
			cvDestroyAllWindows();
			cvReleaseMemStorage(&storage);
			cvReleaseImage(&img);
			cvReleaseImage(&imgGrayScale);

			if (waitKey(50) == 'e') break;

		}
		return 0;
	}
	*/
#include "opencv2/highgui/highgui.hpp"
#include <opencv2/core/core.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>
#include <string>
#include <queue>
#include<vector>
#include<windows.networking.networkoperators.h>

using namespace std;
using namespace cv;

typedef struct{
	int x;
	int y;
}coord;
coord tri[15];
coord rect[15];
coord th[1];

Mat src; Mat src_gray;
int thresh = 97; int areathresh = 0; int max_areathresh = 255;
int max_thresh = 255; int area;
RNG rng(12345);

/// Function headerena
void thresh_callback(int, void*);

/** @function main */
int main(int argc, char** argv)
{
	VideoCapture cap("conquest_sample_arena.webm");
	//cap.open("conquest_sample_arena.webm"); 
	int k = 0;
	if (!cap.isOpened())  // if not success, exit program
	{
		cout << "Cannot open the video cam" << endl;
		return -1;
	}
	while (1){



		cout << k++ << "\n";






		/// Load source image and convert it to gray
		cap.read(src);

		/// Convert image to gray and blur it
		cvtColor(src, src_gray, CV_BGR2GRAY);
		blur(src_gray, src_gray, Size(3, 3));

		/// Create Window
		char* source_window = "Source";
		namedWindow(source_window, CV_WINDOW_AUTOSIZE);
		imshow(source_window, src);

		createTrackbar(" Canny thresh:", "Source", &thresh, max_thresh, thresh_callback);
		createTrackbar(" Canny thresh1:", "Source", &areathresh, max_areathresh, thresh_callback);
		thresh_callback(0, 0);

		waitKey(30);
	}
	return(0);
}

/** @function thresh_callback */
void thresh_callback(int, void*)
{
	Mat canny_output;
	vector<vector<Point> > contours;

	vector<Vec4i> hierarchy;
	int it = 0, recta = 0;
	/// Detect edges using canny
	Canny(src_gray, canny_output, thresh, thresh * 2, 3);

	/// Find contours
	findContours(canny_output, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));

	// Get the moments of image

	vector<Moments> mu(contours.size());

	for (int i = 0; i < contours.size(); i++)

	{
		mu[i] = moments(contours[i], false);

	}

	//Get the mass centers (image has multiple contours):

	vector<Point2f> mc(contours.size());

	for (int i = 0; i < contours.size(); i++)

	{
		//if (contourArea(contours[i])>10){
		mc[i] = Point2f(mu[i].m10 / mu[i].m00, mu[i].m01 / mu[i].m00);
		cout << i << "    " << mu[i].m10 / mu[i].m00 << "   ," << mu[i].m01 / mu[i].m00 << "\n";
		//}
	} // compute the centers of mass of each contour in the image

	/// Draw contours
	Mat drawing = Mat::zeros(canny_output.size(), CV_8UC3);
	for (int i = 0; i < contours.size(); i++)
	{
		if (contourArea(contours[i])>30){
			Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
			drawContours(drawing, contours, i, color, 2, 8, hierarchy, 0, Point());
		}
	}

	/// Show in a window
	namedWindow("Contours", CV_WINDOW_AUTOSIZE);
	imshow("Contours", drawing);
}