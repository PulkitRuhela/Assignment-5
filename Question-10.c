#include<stdio.h>

int main()
{
    int i=0, N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nTable of %d is: ",N);
    
    for(i=1 ; i<=10 ; i++)
    {
        printf("\n%d",i*N);
    }

    return 0;
}