// pre-processor directives

// include Functions.h header file 
#include "./headers/Functions.h"

// write code for functions declaredin Function.h 

// this function uses parameters, all having the char * type 
// strings dont't exist as a type in C like they do in Java and Python.
// in C strings are treated like and array of character and are 
// referred to as the char * type.
// (or variable) is a pointer.
// pointers refer to memory locations instead of holding values. 
// char * means the parameters refer to a memory location that stores 
// a array  of characters.
// this is how C deals with strings.
// you could also have int *, or float *, or double * types.
void congratulate1(char *student, char *language, char *programmer){
    // display 
    printf("%s has done as much %s programming as %s.\n", student, language, programmer);
    congratulate2(student,language,programmer);
}

void congratulate2(char *student, char *language, char *programmer){
    // declare and initialize local variable by
    // callin strlen
    int days = strlen(programmer);

    // display 
    printf("%s has done as much %s programming as %s could fit into %d days.\n", student, language, programmer, days);
}

// this function converts a celsius temperature to  a
// fahrenheit temperature and returns it 
float fahrenheitFromCelsius(float celsius){
    // use macro expression for conversion 
    return FAHRENHEIT(celsius);
}

