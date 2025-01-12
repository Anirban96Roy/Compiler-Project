%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "2007096.tab.h"
#define MAX_SYMBOLS 1024

int yyparse(void);
int main_found = 0;

typedef struct {
    char *symbols[MAX_SYMBOLS];
    int count;
} SymbolTable;

SymbolTable symbol_table = {.count = 0};

int add_symbol(const char *symbol) {
    if (symbol_table.count >= MAX_SYMBOLS) {
        fprintf(stderr, "Symbol table overflow\n");
        exit(1);
    }
    symbol_table.symbols[symbol_table.count] = strdup(symbol);
    return symbol_table.count++;
}
%}

alpha       [a-zA-Z]
digit       [0-9]
alphanum    [a-zA-Z0-9]
header      "import"[ ]*[^ \n]+[.]h[ ]*

%%


"SWITCH"      { return SWITCH; }
"VALUE"       { return VALUE; }
"CASE"        { return CASE; }
"IF"          { return IF; }
"ELSE"        { return ELSE; }
"BREAK"       { return BREAK; }
"DEFAULT"     { return DEFAULT; }
"START"       { return START; }
"END"         { return END; }
"FACTORIAL"   { return FACTORIAL; }
"ODD_EVEN"    { return ODD_EVEN; }
"FOR"         { return FOR; }
"WHILE"       { return WHILE; }
"SIN"         { return SIN; }
"COS"         { return COS; }
"TAN"         { return TAN; }
"COSEC"       { return COSEC; }
"SEC"         { return SEC; }
"COT"         { return COT; }
"LOG"         { return LOG; }
"LOG10"       { return LOG10; }
"BIGMOD"      { return BIGMOD; }
"PLUS"        { return PLUS; }
"MINUS"       { return MINUS; }
"MUL"         { return MUL; }
"INC"         { return INC; }
"DEC"         { return DEC; }
"GT"          { return GT; }
"LT"          { return LT; }
"GTE"         { return GTE; }
"LTE"         { return LTE; }
"EQ"          { return EQ; }
"DIV"         { return DIV; }
"MOD"         { return MOD; }
"POW"         { return POW; }
"BitNOT"      { return BitNOT; }
"BitXOR"      { return BitXOR; }
"BitOR"       { return BitOR; }
"BitAND"      { return BitAND; }
"ASSIGN"      { return ASSIGN; }
"EOL"         { return EOL; }
"DEFINE"      { return DEFINE; }
"ARRAY"       { return ARRAY; }
"CLASS"       { return CLASS; }
"READ"        { return READ; }
"PRINT"       { return PRINT; }


{header}      { return HEADER; }

[,():]        { return *yytext; }

{digit}+      { yylval = atoi(yytext); return NUM; }

[a-zA-Z][a-zA-Z0-9_]* {
    struct {
        const char *keyword;
        int token;
    } keyword_table[] = {
        {"INTEGER", INT},
        {"FLOAT", FLOAT},
        {"CHAR", CHAR},
        {"for", FOR},
        {"while", WHILE},
        {"switch", SWITCH},
        {"case", CASE},
        {"default", DEFAULT},
        {"MAIN", MAIN},
        {"START", START},
        {"END", END},
        {"FACTORIAL", FACTORIAL},
        {"ODD_EVEN", ODD_EVEN},
        {"LOG", LOG},
        {"LOG10", LOG10},
        {"BIGMOD", BIGMOD},
        {"SIN", SIN},
        {"COS", COS},
        {"TAN", TAN},
        {"COSEC", COSEC},
        {"SEC", SEC},
        {"COT", COT},
        {"CLASS", CLASS},
        {"DEFINE", DEFINE},
        {"READ", READ},
        {"PRINT", PRINT},
        {"ARRAY", ARRAY},
        {"EOL", EOL},
        {"MOD", MOD},
        {"INC", INC},
        {"DEC", DEC},
        {NULL, 0} 
    };

    for (int i = 0; keyword_table[i].keyword != NULL; i++) {
        if (strcmp(yytext, keyword_table[i].keyword) == 0) {
            return keyword_table[i].token;
        }
    }

    add_symbol(yytext); 
    return VAR;
}


[ \t\n]+      { /* Skip whitespace */ }


.             {  }

%%

int yywrap() {
    return 1;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    yyparse();

    if (!main_found) {
        printf("Error: MAIN is missing in the program.\n");
        return 1; 
    }

    return 0;
}
