/*


#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
using namespace cv;
using namespace std;
int main()
{
Mat a = imread("a.png", 0);
Mat b(a.rows, a.cols, CV_8UC1, Scalar(0));
int arr[9], i, j, k, l, c = 0;
int sumgx = 0, sumgy = 0, sum;
int max, min; int tr = 0;
namedWindow("Terminal", WINDOW_NORMAL);
createTrackbar("TrackEdge", "Terminal", &tr, 255);
while (1)
{
for (i = 1; i<a.rows - 1; i++)
{
for (j = 1; j<a.cols - 1; j++)
{
c = 0; max = 0, min = 255;
for (k = i - 1; k <= i + 1; k++)
{
for (l = j - 1; l <= j + 1; l++)
{
if (a.at<uchar>(k, l)>max) max = a.at<uchar>(k, l);
if (a.at<uchar>(k, l) < min) min = a.at<uchar>(k, l);

}
}
sum = max - min;
if (sum >= tr)
b.at<uchar>(i, j) = 255;
else
b.at<uchar>(i, j) = 0;
}
}
imshow("Terminal", b);
imshow("Original", a);
char c = waitKey(50);
if (c == 'e')
break;
}
return 0;
}

*/