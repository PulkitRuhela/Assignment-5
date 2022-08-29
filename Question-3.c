#include<stdio.h>

int main()
{
    int i, N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nFirst %d natural numbers in reverse order are: ",N);
    
    for(i=N ; i>=1 ; i--)
    {
        printf("\n%d",i);
    }

    return 0;
}