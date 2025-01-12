%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	int data[60];
	void yyerror(char *s);
	int yylex(void);
	int num_declared_variables = 0;
	char* declared_variables[1000];

int check_duplicate_declaration(const char* variable) {
    for (int i = 0; i < num_declared_variables; ++i) {
        if (strcmp(variable, declared_variables[i]) == 0) {
            return 1; // Duplicate declaration
        }
    }
    return 0; // Not a duplicate
}

	
%}

/* bison declarations */

%token MAIN
%token START END
%token NUM VAR IF SWITCH HEADER CASE DEFAULT BREAK FOR WHILE VALUE FACTORIAL READ PRINT ODD_EVEN BIGMOD ASSIGN DEFINE  EOL ARRAY CLASS
%token INT FLOAT CHAR


%nonassoc IFX
%nonassoc ELSE
%nonassoc SWITCH
%nonassoc CASE
%nonassoc DEFAULT

%left SIN COS TAN COSEC COT SEC LOG LOG10
%left LT GT LTE GTE EQ
%left PLUS MINUS
%left BitXOR BitOR BitAND
%right MUL DIV
%left MOD
%left POW
%left DEC INC BitNOT


/* Grammar rules and actions follow.  */

%%

program: headers MAIN ':' START cstatement END {printf("\nEnd of Main function\n");};

headers: headers HEADER {  printf("Header Library Declared Here\n");  }
	| HEADER {  printf("Header Library Declared Here\n");  }
	;

cstatement: /* NULL */

	| cstatement statement
	;

statement: EOL			
	| declaration EOL		/*	{ printf("\nDeclaration\n"); }	*/

	| expression EOL 			/*{   printf("\nValue of expression: %d\n", $1); $$=$1;}*/
	
	| VAR ASSIGN expression EOL	{ 
								data[$1] = $3; 
								printf("\nValue of the variable: %d\n",$3);
								$$=$3;
								} 
   
	|FOR '(' NUM ',' NUM ',' NUM ')' START  cstatement END {
	                                int i;
	                                printf("\nFOR loop execution\n");
	                                for(i=$3 ; i<$5 ; i=i+$7 )
					{printf("Value of the  i: %d expression value : %d\n", i,$10);}
					}

	
	| WHILE '(' NUM ',' NUM ')' START cstatement END  {
	                                int i;
	                                printf("\nWHILE loop execution\n");
	                                for(i=$3 ; i<$5 ; i++) {printf("Value of the loop: %d expression value: %d\n", i,$8);}
									}
	| FACTORIAL '(' NUM ')' EOL {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=$3;i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d  : %d\n",$3,f);
		}
	
	| ODD_EVEN '(' NUM ')' EOL {
		printf("\nDetermining odd or even number\n");

		if($3 %2 ==0){
			printf("Number : %d  -> Even\n",$3);
		}
		else{
			printf("Number : %d  -> Odd\n",$3);
		}
		}
	| SWITCH '(' NUM ')' START B  END {
			printf("\nSWITCH CASE declaration\n");
			printf("Finally choose case number :-> %d\n",$3);
	}

	| CLASS VAR START cstatement END {

		printf("\nClass declaration\n");
		//printf("Expression : %d\n",$4);
		}

	| CLASS VAR ':' VAR START cstatement END {

		printf("\nInheritance occur \n");
		//printf("Expression value : %d",$6);
		}

	| DEFINE VAR '(' declaration ')' START cstatement END {
		printf("\nFunction declaration\n");
		//printf("Function Parameter : %d\n",$4);
		//printf("Function internal block statement : %d\n",$7);
		}

	| ARRAY TYPE VAR '(' NUM ')' EOL {
		printf("\nArray declaration\n");

		printf("Size of the array is : %d\n",$5);
		}

	| IF '(' expression ')' START cstatement END %prec IFX {
    	if($3){
        	printf("\nValue of expression in IF: %d\n", $6);
    	}
    	else{
        	printf("\nCondition value zero in IF block\n");
    	}
	}
	| IF '(' expression ')' START cstatement END ELSE START cstatement END {
    	if($3){
        	printf("\nValue of expression in IF: %d\n", $6);
    	}
    	else{
        	printf("\nValue of expression in ELSE: %d\n", $11);
    	}
	}
	| VALUE '(' expression ')' EOL {printf("\nPrint expression %d\n",$3);}
	
	| READ '(' VAR ')' EOL {
    	printf("Enter value for %c: ", $3 + 'a');
    	scanf("%d", &data[$3]);
	}
	| PRINT '(' VAR ')' EOL {
        printf("Displayed value of %c: %d\n", $3 + 'a', data[$3]);
    }
	;
	
B   : C
	| C D
    ;
C   : C PLUS C
	| CASE NUM ':' expression EOL BREAK EOL {}
	;
D   : DEFAULT ':' expression EOL BREAK EOL {}
	
declaration : TYPE ID1  /*	{printf("\nVariable declaration\n");}	*/  
             ;


TYPE : INT 	  {printf("\nInterger declaration\n");} 
     | FLOAT  {printf("\nFloat declaration\n");}
     | CHAR   {printf("\nCharacter declaration\n");}
     ;



ID1 : ID1 ',' VAR
    |VAR  {if (num_declared_variables + 1 < 1000) {
            if (check_duplicate_declaration($1)) {
                printf("-->Duplicate declaration");
            } else {
                // Add the variable to the symbol table
                //declared_variables[++num_declared_variables] = strdup($1);
            }
        } else {
            printf("Error: Too many declared variables, array bounds exceeded");
        }}
    ;

expression: NUM						{ printf("\nNumber :  %d\n",$1 ); $$ = $1;  }

	| VAR							{  }

	| expression BitXOR expression 	{printf("\nBitwise XOR of %d and %d is %d\n ",$1,$3,$1^$3); $$ = $1 ^ $3; } 

	| expression BitOR expression 		{printf("\nBitwise OR of %d and %d is %d\n ",$1,$3,$1|$3); $$ = $1 | $3; } 

	| expression BitAND expression 	{printf("\nBitwise AND of %d and %d is %d\n ",$1,$3,$1&$3); $$ = $1 & $3; } 

	| BitNOT expression 				{printf("\nBitwise NOT of %d is %d\n ",$2,~$2); $$ = ~$2; }
	
	| expression PLUS expression	{printf("\nAddition of %d and %d is %d \n",$1,$3,$1+$3 );  $$ = $1 + $3;}

	| expression MINUS expression	{printf("\nSubtraction of %d and %d is %d \n ",$1,$3,$1-$3); $$ = $1 - $3; } 

	| expression MUL expression 	{printf("\nMultiplication of %d and %d is %d\n ",$1,$3,$1*$3); $$ = $1 * $3; } 

	| expression DIV expression	{ if($3){
										printf("\nDivision of %d and %d is %d\n",$1,$3,$1/$3);
										$$ = $1 / $3;
				  					}
				  					else{
										$$ = 0;
										printf("\nDivision by zero\n");
				  					} 	
				    			}		
	| expression INC 		{
								printf("\nIncrement of %d is %d\n",$1,$1+1);
								$$ = $1 + 1;
							} 
	| expression DEC 		{
								printf("\nDecrement of %d is %d\n",$1,$1-1);
								$$ = $1 - 1;
							} 
	| expression MOD expression	{ if($3){
				     					printf("\nMod of %d and %d is %d\n",$1,$3,$1 % $3);
				     					$$ = $1 % $3;
										}
				  					else{
										$$ = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
	| expression POW expression	{printf("\nPower of %d and %d is %d\n",$1,$3,pow($1 , $3));  $$ = pow($1 , $3);}
	| expression LT expression	{ if($1<$3){
										printf("\n%d is less than %d\n",$1,$3);
										}
								  else{
										printf("\n%d is not less than %d\n",$1,$3);
								  }
								$$ = $1 < $3; 
								}
	
	| expression GT expression	{ if($1>$3){
										printf("\n%d is greater than %d\n",$1,$3);
										}
								  else{
										printf("\n%d is not greater than %d\n",$1,$3);
								  }
								$$ = $1 > $3; 
								}	

	| expression LTE expression	{ if($1<=$3){
										printf("\n%d is less than or equal to %d\n",$1,$3);
										}
								  else{
										printf("\n%d is not less than or equal to %d\n",$1,$3);
								  }
								$$ = $1 <= $3; 
								}	
	
	| expression GTE expression	{ if($1>=$3){
										printf("\n%d is greater than or equal to %d\n",$1,$3);
										}
								  else{
										printf("\n%d is not greater than or equal to %d\n",$1,$3);
								  }
								$$ = $1 >= $3; 
								}	

	| expression EQ expression	{ if($1==$3){
										printf("\n%d is equal to %d\n",$1,$3);
										}
								  else{
										printf("\n%d is not equal to %d\n",$1,$3);
								  }
								$$ = $1 == $3; 
								}	 
	


	| '(' expression ')'		{ $$ = $2;	}
	| SIN expression 			{printf("\nValue of Sin(%d) is %lf\n",$2,sin($2*3.1416/180)); $$=sin($2*3.1416/180);}

    | COS expression 			{printf("\nValue of Cos(%d) is %lf\n",$2,cos($2*3.1416/180)); $$=cos($2*3.1416/180);}

    | TAN expression 			{printf("\nValue of Tan(%d) is %lf\n",$2,tan($2*3.1416/180)); $$=tan($2*3.1416/180);} 
	
	| COSEC expression 			{printf("\nValue of Cosec(%d) is %lf\n",$2,1/sin($2*3.1416/180)); $$=1/sin($2*3.1416/180);}

    | SEC expression 			{printf("\nValue of Sec(%d) is %lf\n",$2,1/cos($2*3.1416/180)); $$=1/cos($2*3.1416/180);}

    | COT expression 			{printf("\nValue of Cot(%d) is %lf\n",$2,1/tan($2*3.1416/180)); $$=1/tan($2*3.1416/180);}

    | LOG10 expression 			{printf("\nValue of Log10(%d) is %lf\n",$2,(log($2*1.0)/log(10.0))); $$=(log($2*1.0)/log(10.0));}
	| LOG expression 			{printf("\nValue of Log(%d) is %lf\n",$2,(log($2))); $$=(log($2));}
	| BIGMOD '(' expression ',' expression ',' expression ')' {
			long long res = 1;
			long long x = $3;
			long long p= $5;
			long long m=$7;
			while ( p )
			{
				if (p%2== 1) //p is odd
				{
					res = ( res * x ) % m;
				}
				x = ( x * x ) % m;
				p = p / 2;
			}
			printf("\nBigmod of %d ^ %d MOD %d is = %lld\n",$3,$5,$7,res);
			$$=res;
		}
	;
%%


void yyerror(char *s){
	printf( "%s\n", s);
}
