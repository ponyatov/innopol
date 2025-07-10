#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/// @defgroup main main
/// @{
extern int main(int argc, char *argv[]);  //< program entry point
extern void arg(int argc, char *argv);    //< print command line arg
/// @}

/// @defgroup parser parser
/// @brief syntax parser (.ini)
/// @{
extern int yylex();              //< lexer
extern char *yytext;             //< current token value
extern int yylineno;             //< current line
extern char *yyfile;             //< current file name
extern FILE *yyin;               //< current file handler
extern int yyparse();            //< syntax parser
extern void yyerror(char *msg);  //< error callback
/// @}
