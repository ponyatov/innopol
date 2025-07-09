%{
    #include "innopol.hpp"
    #include "innopol.yacc.hpp"
    char *yyfile = nullptr;
%}

%option noyywrap yylineno

%%
.       {yyerror("");}  // fail on any undetected char
