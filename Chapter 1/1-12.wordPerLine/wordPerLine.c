/*
 * Filename:    getchar.c
 * Author:      Alex Asensio
 * Date:        2016/12/06
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-12, Chapter 1. page 21
 *
 * Write a program that prints its input one word per line
 */

#include <stdio.h>

#define TRUE 1    // previously found a blank/tab/nl char
#define FALSE 0   // previously found a non-blank/non-tab/non-nl char

main()
{
    //DECLARATION OF VARIABLES
    int c, prev_new_word;

    //INITIALIZATION OF VARIABLES
    prev_new_word = FALSE;

    while((c = getchar()) != EOF)   {
        if (c == ' ' || c == '\n' || c == '\t'){
            prev_new_word = TRUE;
        }
        else{
            if (prev_new_word == TRUE) {
                printf("\n");
                prev_new_word = FALSE;
            }
            putchar(c);
        }
    }
}
