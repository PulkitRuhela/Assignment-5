#include<stdio.h>

int main()
{
    int i, N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nFirst %d odd natural numbers are: ",N);
    
    for(i=1 ; i<=N ; i++)
    {
        
        printf("\n%d",2*i-1);
    }

    return 0;
}