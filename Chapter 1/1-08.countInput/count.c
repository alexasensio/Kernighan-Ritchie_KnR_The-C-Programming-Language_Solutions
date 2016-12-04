/*
 * Filename:    getchar.c
 * Author:      Alex Asensio
 * Date:        2016/12/04
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-8, Chapter 1. page 20
 *
 * Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

main()
{
    //DECLARATION OF VARIABLES
    int c, blanks, tabs, nl;

    //ASSIGNMENT STATEMENTS
    blanks = tabs = nl = 0;

    while((c = getchar()) != EOF)   {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++nl;
    }

    printf("Number of blanks in your text: %d\n", blanks);
    printf("Number of tabs in your text: %d\n", tabs);
    printf("Number of new lines in your text: %d\n", nl);
}
