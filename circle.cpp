 #include <iostream>
using namespace std;
 #include "Point.cpp"

#include <graphics.h>
#include <cmath>
#include<math.h>
using namespace std;
 class cercle :public Point{
 	
 	public :
 	float Rr ; 
 	
 	
 	cercle(float x , float y , float r):Point(x,y){
	 Rr=r;
	
	 }
	 
	 
 		void dessinerB(){
		setcolor(2);
	circle(x,y,Rr);

	
	}

 	
 };
