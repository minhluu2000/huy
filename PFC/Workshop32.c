#include <stdio.h>

int main()
{
    int lower, upper; // Get the lower and upper bounds
    printf("Enter the lower bound: ");
    scanf("%d", &lower);

    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    // Iterate through the numbers from lower to upper and check for palindromes
    for (int i = lower; i <= upper; ++i)
    {
        int rem = 0, reversed = 0, place = 1; // Use similar concept as part 3 in Workshop31.c
        int temp = i;
        while (temp > 0) // 
        {
            reversed = reversed * 10;
            reversed = reversed + temp % 10;
            temp = temp / 10;
        }
        if (i == reversed) // If the original number is equal to the reversed number, it's a palindrome
        {
            printf("%d is a palindrome\n", i);
        }
    }
}