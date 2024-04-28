/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
int main()
{
    int i=0, count=0;
    char a[100];
    printf("enter the bits");
    scanf("%s",a);
    printf("\n after the bit stuff\n");
    printf("01111110");
    for(i=0;a[i];i++)
    {
        if (a[i]=='1')
        count++;
        else
        count=0;
        printf("%c",a[i]);
        if(count==5)
        {
            printf("0");
        count=0;
        }
    }
        printf("01111110");
        getch();
        return 1;
}
   