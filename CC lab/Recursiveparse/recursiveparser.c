#include<stdio.h>
#include<string.h>
int S();
int A();
int B();
int C();
int D();
char input[100];
int i;
void main()
{
printf(" enter the string\n");
scanf("%s",input);
    if(S()==1)
    {
        printf(" \n string is accepted");
    }
    else
    {
        printf("\n string is not accepted\n");
    }
}
int S()
{
    if(A()==1)
        if(B()==1)
           if(input[i]=='a')
           {
               i++;
           if(input[i]=='b')
           {
               i++;
if(C()==1)
if(D()==1)
if(input[i]=='e')
{
i++;
if(input[i]=='f')
{
i++;
return 1;
}
else return 0;
}
else return 0;
else return 0;
else return 0;
}
else return 0;
}
else return 0;
else return 0;
else return 0;
}
int A()
{
if(B()==1)
if(input[i]=='b')
{
i++;
if(input[i]=='c')
{
i++;
return 1;
}
else return 0;
}
else return 0;
else return 0;
}
int B()
{
if(C()==1)
if(input[i]=='b')
{
i++;
if(input[i]=='c')
{
i++;
if(input[i]=='d')
{
i++;
return 1;
}
else return 0;
}
else return 0;
}
else return 0;
else return 0;
}
int C()
{
if(input[i]=='c')
{
i++;
if(input[i]=='d')
{
i++;
if(input[i]=='e')
{
i++;
if(input[i]=='f')
{
i++;
return 1;
}
else return 0;
}
else return 0;
}
else return 0;
}
else return 0;
}
int D()
{
if(input[i]=='d')
{
i++;
return 1;
}
else return 0;
}
