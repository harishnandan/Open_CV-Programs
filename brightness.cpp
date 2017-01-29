/*
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2\core\core.hpp>

using namespace std;
using namespace cv;

int main(){
            Mat a = imread("2.jpg", 1);
            for (int i = 0; i < a.rows; i++)
              for (int j = 0; j < a.cols; j++)
			   {
                  if (a.at<Vec3b>(i, j)[0] <= 235)	a.at<Vec3b>(i, j)[0] += 20;
                  if (a.at<Vec3b>(i, j)[1] <= 235)	a.at<Vec3b>(i, j)[1] += 20;
                  if (a.at<Vec3b>(i, j)[2] <= 235)	a.at<Vec3b>(i, j)[2] += 20;
               }
    namedWindow("codered", WINDOW_AUTOSIZE);
    imshow("codered", a);
    waitKey(0);
    return 0;
}
*/