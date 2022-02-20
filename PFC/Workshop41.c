#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    int s = 0, s1 = 1, s3 = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while (n < 6)
    {
        printf("Please enter a number greater than 5: \n");
        scanf("%d", &n);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 1; i <= n - 2; ++i)
    {
        s += i * (i + 1) * (i + 2);
    }
    printf("The sum of the series in part 2 is %d\n", s);

    // Part 2 and 3 not done yet
    
    // for (int i = 1; i <= n - 2; ++i)
    // {
    //     s1 += pow(-1, i + 1) * (i + 1) ;
    // }
}