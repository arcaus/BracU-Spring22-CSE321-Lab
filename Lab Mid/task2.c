// Program writte by: Iftekhar Turja

#include <stdio.h>

// function to check if a number is prime or not
int prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}

// main function
int main()
{
    int n, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        p = prime(n);
        if (p == 1)
            printf("%d is a prime number", n);
        else
            printf("%d is not a prime number", n);
    }
    return 0;
}
