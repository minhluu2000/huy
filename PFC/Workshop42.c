#include <stdio.h>

int main()
{
    int lower, upper, n_column, counter = 0;
    printf("Enter the lower bound: ");
    scanf("%d", &lower);

    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Enter the number of columns: ");
    scanf("%d", &n_column);

    if (lower < 2)
    {
        lower = 2;
    }

    printf("Table of Primes:\n===============");
    printf("Lower limit: %d\n", lower);
    printf("Upper limit: %d\n", upper);
    printf("# of columns: %d\n", n_column);

    for (int i = lower; i <= upper; ++i)
    {
        int temp = i;
        int is_prime = 1;
        for (int k = 2; k < temp; ++k)
        {
            if (temp % k == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            printf("%10d", temp);
            counter++;
        }

        if (counter == n_column)
        {
            printf("\n");
            counter = 0;
        }
    }
}