#include <opencv/cv.h>
#include <opencv/highgui.h>

#include <stdio.h>

int main(int arc, char ** argv) {
	IplImage * img = cvLoadImage("robo.png", CV_LOAD_IMAGE_COLOR);
	if(!img) {
		printf("invalid image\n");
		return 0;
	}
	cvNamedWindow("image", CV_WINDOW_AUTOSIZE);
	cvShowImage("image", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	return 1;
}
