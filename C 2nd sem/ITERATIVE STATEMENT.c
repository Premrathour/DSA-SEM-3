#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Please enter a positive number.");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        sum += i;   // sum = sum + i
    }

    printf("Sum of first %d natural numbers is %d", n, sum);

    return 0;
}

