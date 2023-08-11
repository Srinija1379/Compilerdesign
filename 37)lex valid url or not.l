%{
%}
%%
((http)|(ftp))s?:\/\/[a-zA-Z0-9]{2,}(\.[a-z]{2,})+(\/[a-zA-Z0-9+=?]) {printf("\nURL valid\n");}
.+ {printf("\n Invalid");}
%%
int yywrap(){}
void main()
{
    
    yylex();
    printf("\n");
}
