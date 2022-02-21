#include <stdio.h>
#include <math.h>

int main()
{
    int n, x; // Part 1
    int s = 0, s1 = 1, s3 = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    while (n < 6)
    {
        printf("Please enter a number greater than 5: ");
        scanf("%d", &n);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 1; i <= n - 2; ++i) // Part 2
    {
        s += i * (i + 1) * (i + 2);
    }
    printf("The sum of the series in part 2 is %d\n", s);

    // Part 2 and 3 not done yet

    for (int i = 1; i <= n; ++i) // Part 3
    {
        int one = -1, factorial = 1;
        double temp = x;
        for (int j = 1; j <= i; ++j)
        {
            factorial *= j;
        }
        for (int j = 1; j <= i; ++j)
        {
            one *= -1;
        }
        for (int j = 1; j <= i; ++j)
        {
            temp *= x;
        }
        s1 += one * (temp / factorial);
    }
    printf("The sum of the series in part 3 is %d\n", s1);

    for (int i = 1; i <= n; ++i) // Part 4
    {
        int factorial = 1; 
        double temp = x;
        for (int j = 1; j <= 2 * i + 1; ++j)
        {
            factorial *= j;
        }
        for (int j = 1; j <= 2 * i + 1; ++j)
        {
            temp *= x;
        }
        s3 += (temp / factorial);
    }
    printf("The sum of the series in part 4 is %d\n", s3);
}