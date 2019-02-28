#include "Point.h"

Point::Point(int x, int y){
	X = x;
	Y = y;
}

Point::Point(){
	X = 0;
	Y = 0;
}

Point::~Point(){
	cout <<"object point "<<X<<","<<Y<<" di destruct"<<endl;
}

	int Point::getX(){
		return X;
	}
	int Point::getY(){
		return Y;
	}
	void Point::setX(int x){
		X = x;	
	}
	void Point::setY(int y){
		Y = y;
	}

void Point::cetak() {
cout << "X : " << X << ", Y : " << Y << endl;
}
