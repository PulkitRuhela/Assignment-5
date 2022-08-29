#include<stdio.h>

int main()
{
    int i, N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nFirst %d even natural numbers in reverse order are: ",N);
    
    for(i=N ; i>=1 ; i--)
    {
        
        printf("\n%d",2*i);
    }

    return 0;
}