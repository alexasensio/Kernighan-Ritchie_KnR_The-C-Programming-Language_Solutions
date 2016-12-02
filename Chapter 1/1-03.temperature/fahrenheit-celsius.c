/*
 * Filename:    fahrenheit-celsius.c
 * Author:      Alex Asensio
 * Date:        2016/12/02
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-3, Chapter 1. page 13
 *
 * Modify the temperature conversion program to print a heading
 * above the table
 */

#include <stdio.h>
/* print Fahrenheit-Celsius table 1st calculated with integers and then with floats
    for fahr = 0, 20, ..., 300*/

int main()
{
    //DECLARATION OF VARIABLES
    int fahr, celsius;
    int lower, upper, step;

    //ASSIGNMENT STATEMENTS
    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit
    step = 20;      //step size

    printf("Fahrenheit-Celsius table with INTEGERS\n  F\t C\n-----------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;  //since we are using integers we are doing *5 1st and then /9 last so it does not truncate to zero if doing *5/9
        printf("%d\t%d\n", fahr, celsius);  //%d specifies an integer argument
        fahr = fahr + step;
    }

    /*Now we are going to repeat the program but this time using float numbers instead*/

    //DECLARATION OF VARIABLES
    float fahr2, celsius2;
    int lower2, upper2, step2;

    //ASSIGNMENT STATEMENTS
    lower2 = 0;      //lower limit of temperature table
    upper2 = 300;    //upper limit
    step2 = 20;      //step size

    printf("\n\n\nFahrenheit-Celsius table with FLOATS\n  F\t C\n-----------\n");

    fahr2 = lower2;
    while (fahr2 <= upper2) {
        celsius2 = (5.0/9.0) * (fahr2 - 32.0);
        printf("%3.0f %6.1f\n", fahr2, celsius2);  //%f specifies a float argument. %.0 o %.1 specifies the number of decimals to print %3 or %6 specifies the number to be printed at least 3/6 characters wide
        fahr2 = fahr2 + step2;
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
