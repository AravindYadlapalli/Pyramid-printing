/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,k,c=120;
    printf("Enter No of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c/2-i;j++)
        {
            printf(" ");
        }
        for (k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
