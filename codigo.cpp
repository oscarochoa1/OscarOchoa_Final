#include <iostream>
#include <fstream>
using namespace std;

void funcion( int m);
float funcion1(float q, float e);

int main(){
    
   funcion( 7294.29);


     
    return 0;
    
}

float funcion1(float q, float e){

    return q*e;
}

void funcion( int m){
    
    float deltat= 0.1;
    int i;
    int j;
    float e;
    int t;
    
    int q=2;
    int told=0;
    int xold=1;
    int yold=1;
   
    int y;
    int x;
    float k1;
    float k2;
    float k3;
    ofstream outfile;
    
  for (i=0; i<10; i++){
      e=0;
      if( t < 3 ){
          e = 0;
      }
      if (3>t>7){
          e = 3;
      }
     if (t>7){
          e=0;
      }
  }
    
  outfile.open("calculo.txt");
  while(t<10){  
      
      outfile << t << x << y << endl;
       t = told + deltat;
    x = xold + deltat ;
    y = yold + deltat;
       k1 = funcion1(q ,e );
      
       t = told + deltat/2 ;
    x = xold + deltat/2 ;
    y = yold + deltat/2 ;
   k2 = funcion1(q ,e );
      
       t = told + deltat*0.5;
    x = xold + deltat/2 ;
    y = yold + deltat/2;
      k3 = funcion1(q ,e );
      
     
  cout<<t <<" " << x << " " << y<< endl;
}
    outfile.close();
}