/*
#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
            Mat chess(400, 400, CV_8UC1, Scalar(0));
             int a, b, i, j;
             for (a = 0; a < chess.rows; a += chess.rows / 10)
              for (b = 0; b < chess.cols; b += chess.cols / 10)
               for (i = 0; i < 20; i++)
                for (j = 0; j < 20; j++)
                  chess.at<uchar>(a + i, b + j) = 255;

             for (a = 20; a < chess.rows; a += chess.rows / 10)
              for (b = 20; b < chess.cols; b += chess.cols / 10)
               for (i = 0; i < 20; i++)
                for (j = 0; j < 20; j++)
                 chess.at<uchar>(a + i, b + j) = 255;

namedWindow("chess", WINDOW_AUTOSIZE);
imshow("chess", chess);
waitKey(0);
return 0;
}

*/