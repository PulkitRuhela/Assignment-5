#include<stdio.h>

int main()
{
    int i, N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nFirst %d natural numbers are: ",N);
    
    for(i=1 ; i<=N ; i++)
    {
        printf("\n%d",i);
    }

    return 0;
}