#include <iostream>
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

Mat loadImage(){
	Mat img = imread("cat.jpg");
	if (!img.data) { 
		cout << "No data";
		return img;
	}
	cout << img.size().width << "," << img.size().height << endl;
	namedWindow("Original"); 
	imshow("Original", img);
	waitKey(0);
	return img;
}
int main( int argc, const char** argv )
	{	
		loadImage();
		//loaded image();
		return 0;
	}