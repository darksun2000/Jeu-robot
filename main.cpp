#include <iostream>
#include <graphics.h>
#include<unistd.h>
using namespace std;
#include "mouvmentdisplay.cpp "
#include <cmath>
#include<math.h>
#include <fstream>
#include<string>
#include <sstream>
#include <bits/stdc++.h> 



int main (){
int orientationauto=0;
	int detecter =30;
int rotationauto=0; 
	int mode ;
	int cpl=0; 
	int stageA=1 ; 
	cout<<"choiser le mode : "<<endl;
	cout<<"mode manual 0 :"<<endl;
	cout<<"pour le mode auto 1 :"<<endl;
	cin >> mode ;
	
	
		 initwindow(1000,720,"zwina");
		 int abs ,R,od,collisionZ,collisionD,collisionQ;
		 collisionZ=0; 
		 collisionQ=0;
		 collisionD=0; 
		 cercle b (500,360,50);
		 b.dessinerB();
	ofstream inFile;
	inFile.open("Obstacle.obs");
		 float x= 90 ;
		 float y = 90 ; 
		 Drawmet c1(x,y);
		 
		  
		 int stage = 1 ; 
		 int A =0;
		 
		 //initialisation obs : 
		 for(int i =0 ; i<38 ; i++){
		 if(stage==stageA){A=1;
		 }
		 else{
		 	A=0;
		 }
		 Obstacle o (stage,A);
	

		
		  inFile << o.x <<" " << o.y <<" " <<o.Rr <<" "<<o.stage <<"\n";
		  	if (i==9){
		  		stage = 2 ;
		  		
			  }
			  	if (i==21){
		  		stage = 3 ;
		  		
			  }
		 }
		 	inFile.close();
		 	
		 	//choix de mode : 
	if(mode==0){	 	
	
		 
	while(true){
		
		
		
		b.dessinerB();
			int r = getch();
 	c1.affrotation(r);
 	 
    	ifstream Fichier2("Obstacle.obs") ;
		  while (Fichier2 >> abs >> od >> R >> stage  ) {
		  
		if(stage==stageA){
			A=1;
        Obstacle o (stage,A,abs,od,R);
    
       collisionZ= c1.collisionZ(o);
       collisionD=c1.collisionD(o);
       collisionQ=c1.collisionQ(o);
       	b.dessinerB();
       if( collisionZ==1||collisionD==1||collisionQ==1)break; 
	}
	else{A=0;
	}
    } 	
    cout<<endl;
Fichier2.close();
  
 
		switch(r){
	
			case'z':
		 if(collisionZ==0){ 
			 delay(20); 
	    c1.avancer(stageA);
		}
	    break;
	    
	
      
       case'd':
       	
       	 if(collisionD==0){ 
      delay(20);
       	c1.rotationR(stageA);
       }
		break;
		
		 case'q': if(collisionQ==0){ 
		 	delay(20);
       	c1.rotationL(stageA);
       }
		break;
	
         	 case'u':
		 	delay(20);
		 	c1.rotationSr(stageA);
      
		break;    


			 case't':
		 	delay(20);
       	c1.rotationSl(stageA);
       
		break;
	
  }
 
 
  
  c1.avancerfin(stageA);
  
	b.dessinerB();
	
	
	
	
	   setactivepage(1);    
          cleardevice();
          	c1.dessinc();
	c1.Dessinerobstacle(stageA);
	b.dessinerB(); 
          setvisualpage(1);
         
          setactivepage(0);
          cleardevice();
         	c1.dessinc();
         	c1.affrotation(r);
	c1.Dessinerobstacle(stageA);
	b.dessinerB();
	c1.affrotation(r); 
          setvisualpage(0);          
          

	

	 
	if(c1.gagner(b)==1){
		stageA++;
		b.x=950;
		b.y=600;
		if(stageA==3){
			b.x=1000;
			b.y=160;
		}	
	}
	if(stageA==4)break;
	    
	}
   
}



























else
{
	while(true){
	
	
	
    	ifstream Fichier3("Obstacle.obs") ;
		  while (Fichier3 >> abs >> od >> R >>stage) {
		 
		
		 if(stage==stageA) 	{
		 A=1;
		  
        Obstacle o (stage,A,abs,od,R);
     
       collisionZ= c1.collisionZ(o);
       collisionD=c1.collisionD(o);
       collisionQ=c1.collisionQ(o);
        b.dessinerB();
    
       if( collisionZ==1||collisionD==1||collisionQ==1)break;
    }
     else{
		 	A=0;
		 }
    }
	cout<<endl; 	

Fichier3.close();
  b.dessinerB();

  	if (collisionD==1||collisionQ==1){
  		b.dessinerB();
  			detecter=0 ;
  		rotationauto=1;
					if(b.y>=355){
					
     c1.rotationSr(stageA);
      c1.affrotation('u');
 }
     else
     if(b.y<355){
     	c1.rotationSl(stageA);
     	 c1.affrotation('t');
	 }
      b.dessinerB();
		
		}

		else{
			cout<< "rotationauto : "<<rotationauto << endl;
			if(rotationauto==1){
				b.dessinerB();
			if(b.y>=355){
			
     c1.rotationL(stageA);
      c1.affrotation('q');
 }
     else
     if(b.y<355){
     	c1.rotationR(stageA);
     	 c1.affrotation('d');
	 }
      b.dessinerB();

detecter++;
cout<<detecter<<endl;	
orientationauto=1;
}


if(collisionZ==0&& detecter==30){
		b.dessinerB();
		if(orientationauto==1 ) {
			c1.orientation(b,stageA);
			orientationauto=0;
		}
  
  	b.dessinerB();
	c1.avancer(stageA) ;
	 c1.affrotation('z'); 
		b.dessinerB();
	rotationauto=0;

}

}
		


delay(1);
b.dessinerB();	
	if(c1.gagner(b)==1){
		stageA++;
		string st ; 
		st = c1.Convert(stageA);
		 char cst  [2];
		 strcpy(cst, st.c_str());
		outtextxy(320,300,"Stage");
       outtextxy(400,300,cst);
       delay(10000);
		b.x=950;
		b.y=600;
		orientationauto=1;
		if(stageA==3){
			b.x=700;
			b.y=160;
		}	
	}
	if(stageA==4)break;
	
	
	
	   setactivepage(1);    
        
          	c1.dessinc();
	c1.Dessinerobstacle(stageA);
	b.dessinerB(); 
          setvisualpage(1);
         
          setactivepage(0);
         
         	c1.dessinc();
         
	c1.Dessinerobstacle(stageA);
	b.dessinerB();
	
          setvisualpage(0);
	}
	
	
	


}






}
