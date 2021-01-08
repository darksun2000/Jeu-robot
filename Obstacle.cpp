#include <iostream>
#include <graphics.h>
#include <cmath>
#include<math.h>
using namespace std;
#include "circle.cpp"
#include <fstream>


class Obstacle : public cercle  {

 public : 
int stage  ; 
int stageA	;
	public : 
Obstacle(int stage0=1,int A=1,float x=rand()%1000+70 ,float y=rand()%700+70,float R =rand()%40+30  ):cercle(x,y,R){
stage=stage0;
	  
	if(A==1){
	dessinobs();
	}
	

}
void dessinobs(){
setcolor(4);	
circle(x,y,Rr);



}

	
};
