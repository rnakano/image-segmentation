#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
    cv::Mat image = cv::imread("data/text1.png");
    printf("hello\n");
    return 0;
}
