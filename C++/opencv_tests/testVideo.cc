#include "opencv2/opencv.hpp"
#include <string>


void fct();

int main(int argc, char* argv[])
{
  fct();
  return 0;
}


void fct()
{
  cv::VideoCapture cap(0);
  if (!cap.isOpened())
    exit(-1);

  cv::Mat edges;
  cv::namedWindow("toto", 1);

  for (;;)
  {
    cv::Mat frame;
    cap >> frame;
    cv::cvtColor(frame, edges, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(edges, edges, cv::Size(7,7), 1.5, 1.5);
    cv::Canny(edges, edges, 0, 30, 3);
    cv::imshow("edges", edges);
    if (cv::waitKey(30) >= 0)
      break;
  }



}
