#include <iostream>
#include <opencv2/core/core.hpp>

int
main(int argc, char *argv[])
{
  cv::Mat m1 = cv::Mat::eye(3,3,CV_32FC1);
  cv::Mat m2 = (cv::Mat_<cv::Vec2i>(2, 2) << cv::Vec2i(1,1), cv::Vec2i(2, 4), cv::Vec2i(3, 9), cv::Vec2i(4, 16));
  cv::Point_<int> p1(1,2);
  cv::Point3_<double> p2(1.5, 2.2, 3.9);

   // cv::Mat
   std::cout << "m1=" << m1 << std::endl << std::endl;
   // cv::Mat (multi-channel)
   std::cout << "m2=" << m2 << std::endl << std::endl;
   // cv::Point_, cv::Point3_
   std::cout << "p1=" << p1 << std::endl << std::endl;
   std::cout << "p2=" << p2 << std::endl << std::endl;
   // cv::MatExpr
   std::cout << "m1+m1+1=" << m1+m1+1 << std::endl;
}
