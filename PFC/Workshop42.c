#include <stdio.h>

int main()
{
    int lower, upper, n_column, column_counter = 0; // Get the lower and upper bounds
    printf("Enter the lower bound: ");
    scanf("%d", &lower);

    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Enter the number of columns: ");
    scanf("%d", &n_column);

    if (lower < 2) // If lower is less than 2, lower = 2 since that's definition of prime
    {
        lower = 2;
    }

    // Print information
    printf("Table of Primes:\n===============");
    printf("Lower limit: %d\n", lower);
    printf("Upper limit: %d\n", upper);
    printf("# of columns: %d\n", n_column);

    // Print the table
    for (int i = lower; i <= upper; ++i)
    {
        int temp = i;                  // Store the value of i in temp for processing without changing i
        int is_prime = 1;              // Assume that the number is prime
        for (int k = 2; k < temp; ++k) // Check if the number is prime
        {
            if (temp % k == 0) // If the number is divisible by any number other than 1 and itself, it's not prime
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) // If the number is prime, print it
        {
            printf("%10d", temp); // Print the number with 10 spaces
            ++column_counter;
        }

        if (column_counter == n_column) // If the number of columns is reached, print a new line
        {
            printf("\n");
            column_counter = 0;
        }
    }
}