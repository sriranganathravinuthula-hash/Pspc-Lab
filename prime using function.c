#include <stdio.h>

int prime(int n)
{
    int i, c = 0;

    if (n <= 1)
        return 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (prime(n))
    {
        printf("Given number is a prime number\n");
    }
    else
    {
        printf("Given number is not a prime number\n");
    }

    return 0;
}
