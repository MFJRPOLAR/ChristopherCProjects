// pre-processor directives 

// include Loops.h header file 
#include "./headers/Loops.h"

// write code for functions declared in Decisions.h

// this funtion uses a while loop to display a 
// countdown to stdout 
void loops1(){
    // declare and initialize a counter variable 
    // for our looop 
    int i = START; 

    // set up while loop using a macro expression 
    // as its condition
    while(CONDITION(i)){
        printf("%d ", i);
        i--;
    }
    printf("blast off!\n");
}   

// this function uses a do-while loop to display a 
// count down to stdout
void loops2(){
    // declare and initialize a counter variable 
    // for our looop 
    int i = START; 

    // set up do-while loop using a macro expression 
    // as its condition
    do {
        printf("%d ", i);
        i--;
    }while(CONDITION(i));
    printf("blast off!\n");
}

// this function uses a for loop to display a 
// count down to stdout
void loops3(){

    // set up for looop using macro expression as 
    // its condition
    for (int i = START; CONDITION(i); i--){
        printf("%d ", i);
    }
    printf("blast off!\n");
}

// this function uses a break statement to terminate
// a loop
void loops4(){
    // set up for looop using macro expression as 
    // its condition
    for (int i = START; CONDITION(i); i--){
        printf("%d ", i);
        // use macro expression in if condition to 
        // terminate for loop
        if(BREAK(i)){
            break;
        }
    }
    printf("early blast off!\n");   
}

// this function uses a continue statement to skip 
// the current iteration of a loop 
void loops5(){
    // set up for looop using macro expression as 
    // its condition
    for (int i = START; CONDITION(i); i--){
        // use macro expression in if conditition
        // 0 - False
        // 1 - True
        if (CONTINUE(i)){
            continue;
        }
        printf("%d ", i);
    }
    printf("even blast off!\n");
}

// this function uses recursion to display a countdown 
// to stdout 
void recursion(int i){
    // this is our stopping condidtion 
    if (i == 0){
        printf("blast off!\n");
    } else{
        printf("%d ", i);
        recursion(i-1);
    }
}