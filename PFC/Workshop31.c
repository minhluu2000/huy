#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (i == 0) // Part 1
        {
            int rem = 0, bin = 0, place = 1;
            int temp = num;
            while (temp > 0)
            {
                rem = temp % 2;
                temp = temp / 2;
                bin = bin + rem * place;
                place = place * 10;
            }
            printf("%d in binary number ofrmat is: %d\n", num, bin);
        }
        else if (i == 1) // Part 2
        {
            int temp = num, sum = 0;
            while (temp > 0)
            {
                sum += temp % 10;
                temp = temp / 10;
            }
            printf("The sum of all digits in %d is %d\n", num, sum);
        }
        else if (i == 2) // Part 3
        {
            int rem = 0, reversed = 0, place = 1;
            int temp = num;
            while (temp > 0)
            {
                
                reversed = reversed + temp % 10;
                temp = temp / 10;
            }
            printf("The sum of all digits in %d is %d\n", num, reversed);
        }
    }
    return 0;
}