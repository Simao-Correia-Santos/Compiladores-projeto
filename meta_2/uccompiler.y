%{
  #include <stdio.h>
  extern int yylex(void);
  void yyerror(char *);
  extern char *yytext;
%}

%token BITWISEAND BITWISEOR BITWISEXOR AND ASSIGN MUL COMMA DIV EQ GE GT LBRACE LE LPAR LT MINUS MOD NE NOT OR PLUS RBRACE RPAR SEMI
%token IDENTIFIER DECIMAL NATURAL CHRLIT CHAR ELSE WHILE IF INT SHORT DOUBLE RETURN VOID RESERVED

%left COMMA
%right ASSIGN
%left OR
%left AND
%left BITWISEOR
%left BITWISEXOR
%left BITWISEAND
%left EQ NE
%left LT GT GE LE
%left PLUS MINUS
%left MUL DIV MOD
%right NOT
%left LPAR RPAR


%%
FuctionsAndDeclarations: FuctionsAndDeclarations FuctionDefinition {;}
                        |FuctionsAndDeclarations FuctionDeclaration {;}
                        |FuctionsAndDeclarations Declaration {;}
                        |FuctionDefinition {;}
                        |FuctionDeclaration {;}
                        |Declaration {;}
                        ;

FuctionDefinition: TypeSpec FuctionDeclarator FuctionBody {;}

FuctionBody: LBRACE DeclarationAndStatements RBRACE {;}

DeclarationAndStatements: Statement DeclarationAndStatements {;}
                         |Declaration DeclarationAndStatements {;}
                         |Statement {;}
                         |Declaration {;}
                         ;

FuctionDeclaration: TypeSpec FuctionDeclarator SEMI {;}

FuctionDeclarator: IDENTIFIER LPAR ParameterList RPAR {;}

ParameterList: ParameterDeclaration {;}
              |COMMA ParameterDeclaration {;}
              ;

ParameterDeclaration: TypeSpec IDENTIFIER {;}

Declaration: TypeSpec Declarator COMMA Declarator SEMI {;}

TypeSpec: CHAR {;}
         |INT {;}
         |VOID {;}
         |SHORT {;}
         |DOUBLE {;}
         ;

Declarator: IDENTIFIER ASSIGN Expr {;}

Statement: Expr SEMI {;}

Statement: LBRACE Statement RBRACE {;}

Statement: IF LPAR Expr RPAR Statement ELSE Statement {;}

Statement: WHILE LPAR Expr RPAR Statement {;}

Statement: RETURN Expr SEMI {;}

Expr: Expr ASSIGN  Expr {;}
     |Expr COMMA Expr {;}
     ;

Expr: Expr PLUS Expr {;}
     |Expr MINUS Expr {;}
     |Expr MUL Expr {;}
     |Expr DIV Expr {;}
     |Expr MOD Expr {;}
     ;

Expr: Expr OR Expr {;}
     |Expr AND Expr {;}
     |Expr BITWISEAND Expr {;}
     |Expr BITWISEOR Expr {;}
     |Expr BITWISEXOR Expr {;}
     ;

Expr: Expr EQ Expr {;}
     |Expr NE Expr {;}
     |Expr LE Expr {;}
     |Expr GE Expr {;}
     |Expr LT Expr {;}
     |Expr GT Expr {;}
     ;

Expr: PLUS Expr {;}
     |MINUS Expr {;}
     |NOT Expr {;}
     ;

Expr: IDENTIFIER LPAR Expr COMMA Expr RPAR {;}

Expr: IDENTIFIER {;}
     |NATURAL {;}
     |CHRLIT {;}
     |DECIMAL {;}
     |LPAR Expr RPAR {;}


%%
void yyerror(char *error) {
    printf("%s '%s'\n", error, yytext);
}