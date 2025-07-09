%{
    #include "INNOPOL.hpp"
    #include "INNOPOL.yacc.hpp"
    char *yyfile = nullptr;
%}

%option noyywrap yylineno

%%
.       {yyerror("");}  // fail on any undetected char
