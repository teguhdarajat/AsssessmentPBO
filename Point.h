//kelas point

#include <iostream>
using namespace std;

class Point {
	//data member
		int X;
		int Y;
	public: //access modifier
		Point(); //constructor tanpa parameter
		Point(int, int); //constructor dengan parameter
		~Point();//destructor
		//getter
		int getX();
		int getY();
		//setter
		void setX(int);
		void setY(int);
		//Method
		void cetak ();	
};
