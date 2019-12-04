#include <iostream>
#include <fstream>
#include <cmath>
#include "stdio.h"


double funcion (double x, double t);
double rk(double x, double t, double dt,double dx, double rk1, double rk2, double rk3, double rk4, double sol);
int main (){

double x;
    double t=0.5;
double dt=0.01;
double dx=0.02;
double rk1;
    double rk2;
    double rk3;
    double rk4;
    double sol;
    
    funcion(x,t);
    rk( x, t, dt, dx, rk1, rk2, rk3, rk4, sol);

return 0;
}

double funcion (double x, double t){
    
    double u = exp((-1/2)*((x-1)*(x-1))/0.25*0.25); 
        
    
}
double rk(double x, double t, double dt, double dx, double rk1, double rk2, double rk3, double rk4, double sol){
  
    
  for(int i=0;i<2;i++){
      
      
     rk1 = (((funcion(x+(1/2)*dx, t)))-funcion(x -(1/2)*dx,t))/dx + (((funcion(x, t+(1/2)*dt)))-funcion(x ,t-(1/2)*dt))/dt  ;
      
      rk2 =  (((funcion(x+(1/2)*dx, t)))-funcion(x -(1/2)*dx,t))/dx + (((funcion(x, t+(1/2)*dt)))-funcion(x ,t-(1/2)*dt))/dt + rk1 ;
      
      rk3 = (((funcion(x+(1/2)*dx, t)))-funcion(x -(1/2)*dx,t))/dx  + (((funcion(x, t+(1/2)*dt)))-funcion(x ,t-(1/2)*dt))/dt + rk2 ;
      
       rk4 = (((funcion(x+(1/2)*dx, t)))-funcion(x -(1/2)*dx,t))/dx + (((funcion(x, t+(1/2)*dt)))-funcion(x ,t-(1/2)*dt))/dt  + rk3;
      x = x+dx; 
      t = t+dt; 
      
      sol = (1/6) + (rk1+2*rk2+2*rk3+rk4);
      
      std::cout<<sol;
  

                     }}