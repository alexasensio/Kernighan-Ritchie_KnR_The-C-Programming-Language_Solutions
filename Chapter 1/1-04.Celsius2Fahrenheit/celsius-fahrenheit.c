/*
 * Filename:    fahrenheit-celsius.c
 * Author:      Alex Asensio
 * Date:        2016/12/02
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-4, Chapter 1. page 13
 *
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table
 */

#include <stdio.h>
/* print Celsius-Fahrenheit table in floats
    for celsius = 0, 20, ..., 300*/

int main()
{
    //DECLARATION OF VARIABLES
    float fahr, celsius;
    int lower, upper, step;

    //ASSIGNMENT STATEMENTS
    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit
    step = 20;      //step size

    printf("Celsius-Fahrenheit table with floats\nºC\tºF\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);  //%f specifies a float argument. %.0 o %.1 specifies the number of decimals to print %3 or %6 specifies the number to be printed at least 3/6 characters wide
        celsius = celsius + step;
    }


    /* Summary for printf
        %d      print as decimal integer
        %6d     print as decimal integer, at least 6 characters wide
        %f      print as floating point
        %6f     print as floating point, at least 6 characters wide
        %.2f    print as floating point, 2 characters after decimal point
        %6.2f   print as floating point, at least 6 wide and 2 after decimal point
        %o      print octal
        %x      print hexadecimal
        %c      print character
        %s      print string
        %%      print % itself
    */

    return 0;
}
