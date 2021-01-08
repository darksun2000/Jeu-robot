#include <iostream>
using namespace std;



class robot{
	public:
double Xpos=0.0;
double Ypos =0.0; 
char dir='n'; 
	double x();
	double y();
	void avance(int n );
	void tourn();
};

 double robot::x(){
 	return Xpos ; 
 } 
 double robot::y(){
 	return Ypos;
 }
 void robot::avance(int n){
 	if(dir=='n'){
 		Ypos=Ypos+n;
	 }
	 else
	 if(dir=='e'){
	 	Xpos=Xpos+n;
	 }
	 else
	 if(dir=='s'){
	 	Ypos=Ypos-n;
	 }
	 else
	 if(dir=='o'){
	 	Xpos=Xpos-n;
	 }
 }
 
void robot::tourn(){
if(dir=='n'){
	dir='e';
}
else
if(dir=='e'){
	dir='s';
}
else
if(dir=='s'){
	dir='o';
}
else
if(dir=='o'){
	dir='n';
}
}

class rhp2 : public robot {
	int p =0;
public : 	void av(char c ) {
		if (c=='n'){
			Ypos++;
		}
		else 
		if(c='s'){
			Ypos--;
		}
		else
		if(c=='e'){
			Xpos++;
		}
		else 
		if(c=='o'){
			Xpos--;
		}
	}
	void crayon(){
		if(p==0){
			p=1;
		}
		else 
		if(p==1){
			p=0;
		}
	}
	int crayonstate (){
		return p ;
	}
	double Xrph(){
		return Xpos+200;
	}
	double Yrhp(){
	return Ypos-200; 
	}
	rhp2(){
		Xpos=0;
		Ypos=0;
		p=1;
	}
};

