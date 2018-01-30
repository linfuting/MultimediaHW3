// MultimediaHW3.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <stdio.h>
using namespace cv;

int main()
{
	Mat i1 = imread("i1.pgm");
	Mat i2 = imread("i2.pgm");
	namedWindow("reference");
	namedWindow("target");
	imshow("reference", i1);
	imshow("target", i2);
	waitKey(0);
    return 0;
}


