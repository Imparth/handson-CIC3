#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string[15],name[15];
int a,i,match;
printf("please enter your string\n");
gets(string);
a=strlen(string);
for(i=0;i<a;i++)
{
    name[i]=string[(a-i-1)];
}
for(i=0;i<a;i++)
{
    printf("%c",name[i]);
}
match=0;
for(i=0;i<a;i++)
{
    if(name[i]==string[i])
        match++;
}
if(match==a)
{
    printf("\nit is palindrome");
}
else
{
    printf("\nit is not palindrome");
}
getch();
}
