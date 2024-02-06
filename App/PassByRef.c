// pre-processor directives 

// include C header file 
#include "./headers./PassByRef.h"


// function converts an (x,y) point on a cartesian coordinate system
// to polar coordinates (radius,theta)
// te first two parameters store the (x,y) point
// the last two parameters store the address that (radius, theta) will
// be stored in

void cartesianToPolar(double x,double y,double *ptrRadius, double *ptrTheta){
    
    // calculate radius and store it in *ptrRadius supplied address 
    // the star is needed when storinf a value in an address
    *ptrRadius = sqrt((pow(x,2.0)) + pow(y,2.0));

    // calculate theta and store it in a local variable 
    float theta;
    if (x == 0.0){
        if (y==0.0){
            theta = 0.0;
        }else if (y > 0.0){
            theta = 3.14159;
        }else{
            theta = -3.14159;
        }
    }else{
        theta = atan(y/x);
    }

    // store theta in *ptrTheta supplied address
    // the star is needed when storing a value in an address
    *ptrTheta = theta;
}