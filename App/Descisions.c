// pre-proccesor 

// include the Decisions.h file 
#include "./headers/Decisions.h"

// write code for functions declared in decisions.h

// this function uses the comparision operators 
// and the if, if-else, and if-else-if statements 
void descisions1(void){
    // declare variable of the type float that will be used in conditions 
    // initiate it using macro value defined in header file 
    float num = NUM;

    if (num<4000.0){
        printf("%1.f is less than 4000.0\n", num);
    }


    // change value in variable 
    num += num;
    // uses an if-else statement 
    if (num < 40000.0){
        printf("%.1f is less than 4000.0\n", num);
    }else {
        printf("%.1f is not less than 4000.0\n, num");
    }

    // change value in variable 
    num = 0;

    // use an if-else-if statement 
    if (num == 0.0){
        printf("%.f is equal to 0.0\n", num);
    }else if (num < 0.0){
        printf("%.f is less than 0.0\n", num);
    }else{
        printf("%.f is greater than 0.0\n", num);
    }
}


