/*
 * Filename:    printf.c
 * Author:      Alex Asensio
 * Date:        2016/12/02
 *
 * The C Programming Language, 2nd Ed.,
 * by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Solution for Exercise 1-2, Chapter 1. page 8
 *
 * Experiment to find out what happens when printf's argument
 * string contains \c, where is some character not listed above.
 */

#include <stdio.h>

main()
{
    printf("1.hello world");
    printf("2.hello world\n");		//new line
    printf("3.he\tllo world\n");    //tab
    printf("4.hello w\borld\n");    //backspace carrier
    printf("5.hello w\borld\b\n");  //backspace carrier seems not to work at the end of a string
    printf("6.hello world\"\n");    //double quote
    printf("7.hello world\\\n");    //backlash
    printf("8.hello w\aorld\n");    //NOTHING
    printf("9.hello w\corld\n");    //prints c
    printf("10.hello w\dorld\n");   //prints d
    printf("11.hello w\eorld\n");   //left arrow
    printf("12.hello w\forld\n");   //Egypcian symbol?
    printf("13.hello w\gorld\n");   //g
    printf("14.hello w\horld\n");   //h
    printf("15.hello w\iorld\n");   //i
    printf("16.hello w\jorld\n");   //j
    printf("17.hello w\korld\n");   //k
    printf("18.hello w\lorld\n");   //l
    printf("19.hello w\morld\n");   //m
    printf("20.hello w\norld\n");   //next line
    printf("21.hello w\oorld\n");   //o
    printf("22.hello w\porld\n");   //p
    printf("23.hello w\qorld\n");   //q
    printf("24.hello w\rorld\n");   //puts string after at the beginning, and previous string at the end!
    printf("25.hello w\sorld\n");   //s
    printf("26.hello w\torld\n");   //tab
    printf("27.hello world\n");   // error: incomplete universal character name \u
    printf("28.hello w\vorld\n");   //weird symbol with arrow
    printf("29.hello w\world\n");   //w
    printf("30.hello world\n");   // error: \x used with no following hex digits
    printf("31.hello w\yorld\n");   //y
    printf("32.hello w\zorld\n");   //z
    printf("33.hello w\1orld\n");   //happy face empty
    printf("34.hello w\2orld\n");   //happy face full
    printf("35.hello w\3orld\n");   //hearts
    printf("36.hello w\4orld\n");   //rombo
    printf("37.hello w\5orld\n");   //trebol
    printf("38.hello w\6orld\n");   //pica
    printf("39.hello w\7orld\n");   //NOTHING?
    printf("40.hello w\8orld\n");   //8
    printf("41.hello w\9orld\n");   //9
    printf("42.hello w\ºorld\n");   //double vertical lines
    printf("43.hello w\ªorld\n");   //¬
    printf("44.hello w\!orld\n");   //!
    printf("45.hello w\|orld\n");   //\|
    printf("46.hello w\"orld\n");   //"
    printf("47.hello w\@orld\n");   //@
    printf("48.hello w\·orld\n");   //A with accent grave
    printf("49.hello w\#orld\n");   //#
    printf("50.hello w\$orld\n");   //$
    printf("51.hello w\~orld\n");   //~
    printf("52.hello w\%orld\n");   //102
    printf("53.hello w\€orld\n");   //C cerilla en mayúscula
    printf("54.hello w\&orld\n");   //&
    printf("55.hello w\¬orld\n");   // 1/4
    printf("56.hello w\/orld\n");   // /
    printf("57.hello w\(orld\n");   // (
    printf("58.hello w\)orld\n");   // )
    printf("59.hello w\=orld\n");   //=
    printf("60.hello w\'orld\n");   //'
    printf("61.hello w\?orld\n");   //?
    printf("62.hello w\¡orld\n");   //í
    printf("63.hello w\¿orld\n");   //weird symbol
    printf("64.hello w\?orld\n");   //?
    printf("65.hello w\<orld\n");   //<
    printf("66.hello w\>orld\n");   //>
    printf("67.hello w\,orld\n");
    printf("68.hello w\;orld\n");
    printf("69.hello w\.orld\n");
    printf("70.hello w\:orld\n");
    printf("71.hello w\-orld\n");
    printf("72.hello w\_orld\n");
    printf("73.hello w\/orld\n");
    printf("74.hello w\*orld\n");
    printf("75.hello w\-orld\n");
    printf("70.hello w\+orld\n");


    /* legal escape sequences */
    printf("audible alert (bell) BEL   \\a     %d\n" , '\a');
    printf("backspace            BS    \\b     %d\n" , '\b');
    printf("horizontal tab       HT    \\t     %d\n" , '\t');
    printf("newline              LF    \\n    %d\n"  , '\n');
    printf("vertical tab         VT    \\v    %d\n"  , '\v');
    printf("formfeed             FF    \\f    %d\n"  , '\f');
    printf("carriage return      CR    \\r    %d\n"  , '\r');
    printf("double quote         \"     \\\"    %d\n", '\"');
    printf("single quote         \'     \\\'    %d\n", '\'');
    printf("question mark        ?     \\?    %d\n"  , '\?');
    printf("backslash            \\     \\\\    %d\n", '\\');
    printf("\n");
    printf("forty-two in octal   0%o   \\52   %d\n"  , '\52' , '\52');
    printf("forty-two in hex     0x%X  \\x2A  %d\n"  , '\x2A', '\x2A');
    printf("\n");
    /* illegal escape sequence */
    printf("invalid escape sequence    \\c    %d (%c)\n" , '\c', '\c');
}
