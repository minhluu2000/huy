#include <stdio.h>

int main()
{
    int lower, upper;
    printf("Enter the lower bound: ");
    scanf("%d", &lower);

    printf("Enter the upper bound: ");
    scanf("%d", &upper);
    for (int i = lower; i <= upper; ++i)
    {
        int rem = 0, reversed = 0, place = 1;
        int temp = i;
        while (temp > 0)
        {
            reversed = reversed * 10;
            reversed = reversed + temp % 10;
            temp = temp / 10;
        }
        if (i == reversed)
        {
            printf("%d is a palindrome\n", i);
        }
    }
}