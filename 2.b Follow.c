#include <stdio.h>
#include <string.h>
int n,m=0,p,i=0,j=0;
char a[10][10],followResult[10];
void follow(char c);
void first(char c);
void addToResult(char);
int main()
{
 int i;
 int choice;
 char c,ch;
 printf("Enter the no. of productions: "):
     scanf("%d",&n);
 printf("Enter %d productions\nProduction with multiple terms should be give as separate production\n",n);
 for(i=0;i<n;i++)
    scanf("%s%c",a[i],&ch);
 do
 {
     m=0;
     printf("Find FOLLOW of -->");
     scanf("%c",&c);
     follow(c);
     printf("FOLLOW(%c) = {",c);
     for(i=0)
 }
}
