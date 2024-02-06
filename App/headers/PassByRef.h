// pre-processor directives 

// include C header file 
#include <stdio.h>
#include <math.h>

// declare global variables 
//we will be storing their address in pointers
static double radius;
static double theta;

//function declarations 
void cartesianToPolar(double,double,double *, double *);
