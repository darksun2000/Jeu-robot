#include <iostream>
#include <graphics.h>
#include <cmath>
#include<math.h>
#include<string>
#include <sstream>
#include <bits/stdc++.h> 
using namespace std;
#include "Obstacle.cpp"
	

class Drawmet : public cercle{
	public :
float wd,wg,Rr,alpha,D0,d;
float erreur ; 

 float acc ,dcc , V , dcd,dcg,gcd,gcg ,SL,SR,sks; 
	
	public : 
Drawmet(float x ,float y , float R=50,float alpha0=0 ,float wd0=0,float wg0=0,float ereur=0,float acc0=0.1,float V0=0):cercle(x,y,R){
		Rr=R;
	D0=30;
		alpha=alpha0;
		wd=wd0;
		wg=wg0;
		erreur=ereur;
	dessinc();
	Dessinerobstacle(1);
	acc=acc0;
	V=V0;
	dcd=0;
	dcg=0;
	gcd=0;
	gcg=0;
	SL=0;
	SR=0;
	}
	
void Dessinerobstacle(int stageA){
	int abs , od , R,stage;
	
		    	ifstream Fichier4("Obstacle.obs") ;
		  while (Fichier4 >> abs >> od >> R >> stage ) {
		  	  	if (stage==stageA)
        Obstacle o (stage,1,abs,od,R);
    }
	Fichier4.close(); 
}

void avancerfin(int stageA){
	while(dcc>0){
	
		float a,b;
  	a=tan(alpha);
  	b=y-a*x;
     x=x+dcc*cos(alpha);
     y=(a*x)+b;
   
	 V-=0.1;
dcc-=0.4;
	 cout<<"dcc : "<<dcc<<endl;
	 
}
}

  void dessinc(){
  
  	cleardevice();
  	setcolor(1);
	  circle(x,y,Rr);
	   setcolor(1);
	  line(x,y,x+(Rr)*cos(alpha),y+(Rr)*sin(alpha));
	 	  line(x+(Rr)*cos(alpha-(M_PI/2)),y+(Rr)*sin(alpha-(M_PI/2)),x+(Rr)*cos(alpha+(M_PI/2)),y+(Rr)*sin(alpha+(M_PI/2)));
  line(x+(Rr)*cos(alpha+(M_PI/2)),y+(Rr)*sin(alpha+(M_PI/2)),x+(Rr)*cos(alpha),y+(Rr)*sin(alpha));
    line(x+(Rr)*cos(alpha-(M_PI/2)),y+(Rr)*sin(alpha-(M_PI/2)),x+(Rr)*cos(alpha),y+(Rr)*sin(alpha));
    
    	  line(x+(25)*cos(alpha+(M_PI/3)),y+(25)*sin(alpha+(M_PI/3)),x+(25)*cos(alpha+(8*M_PI/12)),y+(25)*sin(alpha+(8*M_PI/12)));
	line(x+(25)*sin(alpha+(M_PI/3)-M_PI/2),y-(25)*cos(alpha+(M_PI/3)-M_PI/2),x+(25)*sin(alpha+(8*M_PI/12)-M_PI/2),y-(25)*cos(alpha+(8*M_PI/12)-M_PI/2));
	  
    }
    
    std::string Convert (float number){
    	
    std::ostringstream buff;
    buff<<number;
    return buff.str();   
}
        



void affrotation(char c ){
		 float Dx =1.5;
       
       float Dy = 0.0;
       
	 float  Vmax = sqrt(pow(Dx,2)+pow(Dy,2))/0.1 ; 
	 
	 
	 
	 	
	if(c=='u'){
		
		             	float a,b,VG,VD;
		             	VG=SR*10;
		             	VD=-SR*10;
       	
       string sx = Convert(x);
      int nsx =sx.length();
       char cx[nsx + 1];
         strcpy(cx, sx.c_str()); 
       string sy = Convert(y);
       int nsy =sy.length();
       char cy[nsx + 1];
         strcpy(cy, sy.c_str()); 
       float Dx =1.5;
       
       float Dy = 0.0;
       
       
        float Vmax = sqrt(pow(Dx,2)+pow(Dy,2))/0.1 ; 
       
       string svmax=Convert(Vmax);
        int nsvmax =svmax.length();
       char cvmax[nsvmax + 1];
         strcpy(cvmax, svmax.c_str()); 
         
         
              string svd=Convert(VD);
         int nsvd =svd.length();
       char cvd[nsvd + 1];
         strcpy(cvd, svd.c_str()); 
         
         string svg=Convert(VG);
         int nsvg =svg.length();
       char cvg[nsvd + 1];
         strcpy(cvg, svg.c_str());
         
    
       
      
        settextstyle(1, 0, 1);
       outtextxy(1,700,"posX:");
      
       outtextxy(100,700,cx);
       

       outtextxy(170,700,",posY:");
       outtextxy(270,700,cy);
       
       outtextxy(320,700,",Vitesse desire D:");
       outtextxy(560,700,cvmax);
       outtextxy(630,700,",Vitesse desire G:");
       outtextxy(860,700,cvmax);
       outtextxy(930,700,",Vitesse D:");
       outtextxy(1080,700,cvd);
       outtextxy(1190,700,",Vitesse G:");
       outtextxy(1340,700,cvg);
      	
		
		
		
	}

	 
	else
	if (c=='z'){
		
             	float a,b;
       	
       string sx = Convert(x);
      int nsx =sx.length();
       char cx[nsx + 1];
         strcpy(cx, sx.c_str()); 
       string sy = Convert(y);
       int nsy =sy.length();
       char cy[nsx + 1];
         strcpy(cy, sy.c_str()); 
       float Dx =1.5;
       
       float Dy = 0.0;
       
       
    Vmax = sqrt(pow(Dx,2)+pow(Dy,2))/0.1 ; 
       
       string svmax=Convert(Vmax);
        int nsvmax =svmax.length();
       char cvmax[nsvmax + 1];
         strcpy(cvmax, svmax.c_str()); 
         
         
    
       
        string sv=Convert(V);
         int nsv =sv.length();
       char cv[nsv + 1];
         strcpy(cv, sv.c_str()); 
        settextstyle(1, 0, 1);
       outtextxy(1,700,"posX:");
      
       outtextxy(100,700,cx);
       

       outtextxy(170,700,",posY:");
       outtextxy(270,700,cy);
       
       outtextxy(320,700,",Vitesse desire D:");
       outtextxy(560,700,cvmax);
       outtextxy(630,700,",Vitesse desire G:");
       outtextxy(860,700,cvmax);
       outtextxy(930,700,",Vitesse D:");
       outtextxy(1080,700,cv);
       outtextxy(1190,700,",Vitesse G:");
       outtextxy(1340,700,cv);
       V = acc/0.1 ;
		
	}
	else
	if (c=='d'){
		
			
             	float a,b,VD,VG;
       	
       string sx = Convert(x);
      int nsx =sx.length();
       char cx[nsx + 1];
         strcpy(cx, sx.c_str()); 
       string sy = Convert(y);
       int nsy =sy.length();
       char cy[nsx + 1];
         strcpy(cy, sy.c_str()); 
       float Dx =1.5;
       
       float Dy = 0.0;
       
       
        float Vmax = sqrt(pow(Dx,2)+pow(Dy,2))/0.1 ; 
       
       string svmax=Convert(Vmax);
        int nsvmax =svmax.length();
       char cvmax[nsvmax + 1];
         strcpy(cvmax, svmax.c_str()); 
         VD=dcd*10;
         VG=dcg*10;
         
    
       
        string svd=Convert(VD);
         int nsvd =svd.length();
       char cvd[nsvd + 1];
         strcpy(cvd, svd.c_str()); 
         
         string svg=Convert(VG);
         int nsvg =svg.length();
       char cvg[nsvd + 1];
         strcpy(cvg, svg.c_str());
         
        settextstyle(1, 0, 1);
       outtextxy(1,700,"posX:");
      
       outtextxy(100,700,cx);
       

       outtextxy(170,700,",posY:");
       outtextxy(270,700,cy);
       
       outtextxy(320,700,",Vitesse desire D:");
       outtextxy(560,700,cvmax);
       outtextxy(630,700,",Vitesse desire G:");
       outtextxy(860,700,cvmax);
       outtextxy(930,700,",Vitesse D:");
       outtextxy(1080,700,cvd);
       outtextxy(1190,700,",Vitesse G:");
       outtextxy(1340,700,cvg);
      	
		
		
		
		
	}
	else
	if(c=='q'){
		
		             	float a,b,VG,VD;
		    
       	VG=gcg*10;
       	VD=gcd*10;
       string sx = Convert(x);
      int nsx =sx.length();
       char cx[nsx + 1];
         strcpy(cx, sx.c_str()); 
       string sy = Convert(y);
       int nsy =sy.length();
       char cy[nsx + 1];
         strcpy(cy, sy.c_str()); 
       float Dx =1.5;
       
       float Dy = 0.0;
       
       
        float Vmax = sqrt(pow(Dx,2)+pow(Dy,2))/0.1 ; 
       
       string svmax=Convert(Vmax);
        int nsvmax =svmax.length();
       char cvmax[nsvmax + 1];
         strcpy(cvmax, svmax.c_str()); 
         
         
    
         string svd=Convert(VD);
         int nsvd =svd.length();
       char cvd[nsvd + 1];
         strcpy(cvd, svd.c_str()); 
         
         string svg=Convert(VG);
         int nsvg =svg.length();
       char cvg[nsvd + 1];
         strcpy(cvg, svg.c_str());
       
       
       
        settextstyle(1, 0, 1);
       outtextxy(1,700,"posX:");
      
       outtextxy(100,700,cx);
       

       outtextxy(170,700,",posY:");
       outtextxy(270,700,cy);
       
       outtextxy(320,700,",Vitesse desire D:");
       outtextxy(560,700,cvmax);
       outtextxy(630,700,",Vitesse desire G:");
       outtextxy(860,700,cvmax);
       outtextxy(930,700,",Vitesse D:");
       outtextxy(1080,700,cvd);
       outtextxy(1190,700,",Vitesse G:");
       outtextxy(1340,700,cvg);
       	
		
		
		
		
		
	}
	else
	if (c='t'){
		             	float a,b,VG,VD;
       	VD=SL*10;
       	VG=-SL*10;
       string sx = Convert(x);
      int nsx =sx.length();
       char cx[nsx + 1];
         strcpy(cx, sx.c_str()); 
       string sy = Convert(y);
       int nsy =sy.length();
       char cy[nsx + 1];
         strcpy(cy, sy.c_str()); 
       float Dx =1.5;
       
       float Dy = 0.0;
       
       
        float Vmax = sqrt(pow(Dx,2)+pow(Dy,2))/0.1 ; 
       
       string svmax=Convert(Vmax);
        int nsvmax =svmax.length();
       char cvmax[nsvmax + 1];
         strcpy(cvmax, svmax.c_str()); 
         
         
    
          string svd=Convert(VD);
         int nsvd =svd.length();
       char cvd[nsvd + 1];
         strcpy(cvd, svd.c_str()); 
         
         string svg=Convert(VG);
         int nsvg =svg.length();
       char cvg[nsvd + 1];
         strcpy(cvg, svg.c_str());
       
	    
        settextstyle(1, 0, 1);
       outtextxy(1,700,"posX:");
      
       outtextxy(100,700,cx);
       

       outtextxy(170,700,",posY:");
       outtextxy(270,700,cy);
       
       outtextxy(320,700,",Vitesse desire D:");
       outtextxy(560,700,cvmax);
       outtextxy(630,700,",Vitesse desire G:");
       outtextxy(860,700,cvmax);
       outtextxy(930,700,",Vitesse D:");
       outtextxy(1080,700,cvd);
       outtextxy(1190,700,",Vitesse G:");
       outtextxy(1340,700,cvg);
       	
		
		
		
		
	}

       

	
}
		  
	   

  void avancer(int stageA){
  	dcd=0;
  	dcg=0;
  	gcd=0;
  	gcg=0;
  	SL=0;
  	float a,b;
  	a=tan(alpha);
  	b=y-a*x;
     x=x+acc*cos(alpha);
     y=(a*x)+b;
   
	 if(acc<1.5) 	{
	 	 acc=acc+0.1 ; 
	 }
	cout<<"acc:"<<acc<<endl;
	 dcc=acc;
	 


}
    

  void rotationR(int stageA){
  	gcd=0;
  	gcg=0;
  	SL=0;
  	SR=0;
  acc=0.1 ; 
	wg=wg+0.01;
	wd=wd+0.003; 

    	float Dwg=(wg)*M_PI;
    	float Dwd=(wd)*M_PI;
  	float Dd=Dwd*Rr;
  	float Dg=Dwg*Rr;
	float DR=(Dd+Dg)/2;
	
	alpha=-(Dd-Dg)/Rr -(erreur)*M_PI;
	erreur+=0.0005;
	float wr=DR/Rr;
	x=x+2*cos(alpha);
	y=y+2*sin(alpha);
	 if(dcg<1.5) 	{
	 	 dcg=dcg+0.3 ; 
	 }
	 	 if(dcd<0.5) 	{
	 	 dcd=dcd+0.1 ; 
	 }

	
  }

  void rotationL(int stageA){
  	SL=0;
  	SR=0;
    acc=0.1 ; 
    dcd=0;
  	dcg=0;
    wg=wg+0.003;
	wd=wd+0.01; 
 
    float Dwg=(wg)*M_PI;
     float Dwd=(wd)*M_PI;
  	float Dd=Dwd*Rr;
  	float Dg=Dwg*Rr;
	float DR=(Dd+Dg)/2;
	
	alpha=-(Dd-Dg)/Rr-(erreur)*M_PI ;
	erreur-=0.0005;
	
	
	x=x+2*cos(alpha);
	y=y+2*sin(alpha);
	
		 if(gcd<1.5) 	{
	 	 gcd=gcd+0.3 ; 
	 }
	 	 if(gcg<0.5) 	{
	 	 gcg=gcg+0.1 ; 
	 }


  }
  
  
  void rotationSl(int stageA){
  	SR=0;
  	dcd=0;
  	dcg=0;
  	gcd=0;
  	gcg=0;
  	  acc=0.1 ; 
  	wg=wg-0.004;
	wd=wd+0.004; 
    float Dwg=(wg)*M_PI;
     float Dwd=(wd)*M_PI;
  	float Dd=Dwd*Rr;
  	float Dg=Dwg*Rr;
	float DR=(Dd+Dg)/2;
	
	alpha=-(Dd-Dg)/Rr-(erreur)*M_PI ;
	erreur-=0.0005;
  		 if(SL<1.5) 	{
	 	 SL=SL+0.1 ; 
	 }
  	
  	
 
  }
    void rotationSr(int stageA){
    SL=0;
    	dcd=0;
    
  	dcg=0;
  	gcd=0;
  	gcg=0;
    	  acc=0.1 ; 
  		wg=wg+0.004;
	wd=wd-0.004; 
  	    float Dwg=(wg)*M_PI;
     float Dwd=(wd)*M_PI;
  	float Dd=Dwd*Rr;
  	float Dg=Dwg*Rr;
	float DR=(Dd+Dg)/2;
	
	alpha=-(Dd-Dg)/Rr-(erreur)*M_PI ;
	erreur-=0.0005;
  			 if(SR < 1.5) 	{
	 	 SR+=0.1 ; 
	 }
  
  
  	
  }

int collisionZ(Obstacle o){
	  
float distanceR = o.Rr+Rr;
float Xn;
float Yn;
  	float a,b;
  	a=tan(alpha);
  	b=y-a*x;
     Xn=x+cos(alpha);
     Yn=(a*x)+b;

float Xs =  Xn- o.x ; 
float Ys = Yn-o.y;

float distanceP = sqrt(pow(Xs,2)+pow(Ys,2)); 
if(distanceR<=distanceP){
	
	return 0;
}	
else {

	dcd=0;
  	dcg=0;
  	gcd=0;
  	gcg=0;
	 acc=0 ;
	V=0;
	return 1 ;
}
 
	
	
}

  int collisionD(Obstacle o){
  	 
float distanceR = o.Rr+Rr;
float Xn;
float Yn;
float wgc;
float wdc;
 wgc=wg+0.01;
	wdc=wd+0.003; 
    
    	float Dwg=(wgc)*M_PI;
    	float Dwd=(wdc)*M_PI;
  	float Dd=Dwd*Rr;
  	float Dg=Dwg*Rr;
	float DR=(Dd+Dg)/2;
	
float	alphac=-(Dd-Dg)/Rr -(erreur)*M_PI;

	float wr=DR/Rr;
	Xn=x+2*cos(alphac);
	Yn=y+2*sin(alphac);

float Xs =  Xn- o.x ; 
float Ys = Yn-o.y;

float distanceP = sqrt(pow(Xs,2)+pow(Ys,2)); 
if(distanceR<=distanceP){
	
	return 0;
}	
else {
	V=0;
	acc=0 ;
	return 1 ;
}
 
}












int collisionQ(Obstacle o){
	 
float distanceR = o.Rr+Rr;
float Xn;
float Yn;
  
  float  wgQ=wg+0.003;
float	wdQ=wd+0.01; 
 
    float Dwg=(wg)*M_PI;
     float Dwd=(wd)*M_PI;
  	float Dd=Dwd*Rr;
  	float Dg=Dwg*Rr;
	float DR=(Dd+Dg)/2;
	
float	alphaQ=-(Dd-Dg)/Rr-(erreur)*M_PI ;

	
	
	Xn=x+2*cos(alphaQ);
	Yn=y+2*sin(alphaQ);

float Xs =  Xn- o.x ; 
float Ys = Yn-o.y;

float distanceP = sqrt(pow(Xs,2)+pow(Ys,2)); 
if(distanceR<=distanceP){
	
	return 0;
}	
else {
	acc=0 ;
	V=0;
	return 1 ;
}
 
	
}


int gagner(cercle b ){
float distanceR = b.Rr+Rr;
float Xs =  x- b.x ; 
float Ys = y-b.y;

float distanceP = sqrt(pow(Xs,2)+pow(Ys,2)); 

if(distanceR<=distanceP){
	
	return 0;
}	
else 
return 1 ; 	
	
	
}


void orientation(cercle Goal,int stageA){
	Goal.dessinerB();
		float Xg =  Goal.x ; 
	float Yg=Goal.y;
	//equation de OR ,DR 
	float m1,q1;
	 	m1=tan(alpha);
  	q1=y-m1*x;
	//2eme equation
	float q2,m2;
	m2=(y-Yg)/(x-Xg);
	q2=Yg-m2*Xg;
	
	// alpha calcule : 
	
	float beta =atan(m2-m1/(1+m2*m1));

// //////////////  ///////////  ////////////////////  /////////////////
	float Xo=x+(Rr)*cos(alpha);
	float Yo=y+(Rr)*sin(alpha);
	
	float UrX = Xo-x;
	float UrY= Yo - y ;
	
   float VgX=  Xg-x;
   float VgY= Yg-y;
   float angle=acos(((UrX*VgX)+(UrY*VgY))/ (sqrt(pow(UrX,2)+pow(UrY,2)) *sqrt(pow(VgX,2)+pow(VgY,2))))   ;
 
if(beta > 0){

    
    while (angle>0.1 ){
   
    	
    		
    		rotationSr(stageA);	
		
		 affrotation('u');

		Xo=x+(Rr)*cos(alpha);
		Yo=y+(Rr)*sin(alpha);
		
		UrX = Xo-x;
		UrY= Yo - y ;
		
		VgX=  Xg-x;
		VgY= Yg-y;
    	angle=acos(((UrX*VgX)+(UrY*VgY))/ (sqrt(pow(UrX,2)+pow(UrY,2)) *sqrt(pow(VgX,2)+pow(VgY,2))))   ;  
    
    
    delay(2);
    
	
	
	
	  
	   setactivepage(1);    
        
      	dessinc();
	Dessinerobstacle(stageA);
	Goal.dessinerB();
          setvisualpage(1);
         
          setactivepage(0);
         
    	dessinc();
	Dessinerobstacle(stageA);
	Goal.dessinerB();
	
          setvisualpage(0);	
	}
	  
	
	  
	  
	  
	
	
	}
			else
		if(beta  < 0){
			 while (angle>0.1 ){
		
			    		rotationSl(stageA);	
		 affrotation('t');
		

		Xo=x+(Rr)*cos(alpha);
		Yo=y+(Rr)*sin(alpha);
		
		UrX = Xo-x;
		UrY= Yo - y ;
		
		VgX=  Xg-x;
		VgY= Yg-y;
    	angle=acos(((UrX*VgX)+(UrY*VgY))/ (sqrt(pow(UrX,2)+pow(UrY,2)) *sqrt(pow(VgX,2)+pow(VgY,2))))   ;  
    delay(2);
       
	   setactivepage(1);    
        
      	dessinc();
	Dessinerobstacle(stageA);
	Goal.dessinerB();
          setvisualpage(1);
         
          setactivepage(0);
         
    	dessinc();
	Dessinerobstacle(stageA);
	Goal.dessinerB();
	
          setvisualpage(0);
    
		}
		
      
   
	

	
	
}

}


	
};

