/*
 * Filename:    getchar.c
 * Author:      Alex Asensio
 * Date:        2016/12/04
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-9, Chapter 1. page 20
 *
 * Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

main()
{
    //DECLARATION OF VARIABLES
    int c, prev_blank;

    //ASSIGNMENT STATEMENTS
    prev_blank = FALSE;

    while((c = getchar()) != EOF)   {
        if (c == ' '){
            prev_blank = TRUE;
        }
        else {
            if(prev_blank == TRUE){
                prev_blank = FALSE;
                putchar(' ');
            }
            putchar(c);
        }
    }
}
