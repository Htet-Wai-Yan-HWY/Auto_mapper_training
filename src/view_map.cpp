#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv)
{
	if (argc != 2) {
		std::cout << "usage: DisplayImage.out <Image_Path>\n" << std::endl;
		return -1;
	}
	cv::Mat image;
	image = cv::imread(argv[1], 1);
	if (!image.data) {
		std::cout<< "No image data \n" << std::endl;
		return -1;
	}
	cv::namedWindow("MAP", cv::WINDOW_NORMAL);
	cv::imshow("MAP", image);
	std::cout << "Width : " << image.cols << std::endl;
	std::cout << "Height: " << image.rows << std::endl;
	cv::waitKey(0);
	return 0;
}
