#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
    cv::Mat image = cv::imread("data/text1.png");

    for (int j = 0; j < image.rows; j++){
      for (int i = 0; i < image.cols; i++){
        cv::Vec3b pixel = image.at<cv::Vec3b>(j, i);
      }
    }

    return 0;
}
