#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char ** argv) {
	Mat img = imread("robo.png", CV_LOAD_IMAGE_COLOR);
	if(!img.data) {
		cout << "invalid image" << endl;
		return -1;
	}
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("image", img);
	waitKey(0);
	return 0;
}
