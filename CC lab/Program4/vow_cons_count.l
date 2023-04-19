%{
#include<stdio.h>
%}
%{
	int vow_c=0;
	int cons_c=0;
%}
%%
[aeiouAEIOU] {vow_c++;}
[a-zA-Z] {cons_c++;}
%%
int wrap(){return 1;}
int main(){
	printf("Enter string ");
	yylex();
	printf("No.of Vowels: %d\n",vow_c);
	printf("No.of Consonants: %d\n",cons_c);
	return 0;
}
