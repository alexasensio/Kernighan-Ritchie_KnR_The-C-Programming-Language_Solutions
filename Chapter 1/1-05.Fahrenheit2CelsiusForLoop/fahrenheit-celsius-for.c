/*
 * Filename:    fahrenheit-celsius.c
 * Author:      Alex Asensio
 * Date:        2016/12/03
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-5, Chapter 1. page 14
 *
 * Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>
/* print Fahrenheit-Celsius table
    for Fahrenheit = 300, 280, ..., 0*/

main()
{
    //DECLARATION OF VARIABLES
    int fahr;

    printf("Fahrenheit-Celsius table\n  F\t C\n");

    for (fahr = 300; fahr >= 0; fahr = fahr -20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32) );
}
