/*
 * Filename:    getchar.c
 * Author:      Alex Asensio
 * Date:        2016/12/04
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-6, Chapter 1. page 17
 *
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

main()
{
    printf("Enter a character:\n");
    printf("getchar() != EOF: %d\n", getchar() != EOF);
}
