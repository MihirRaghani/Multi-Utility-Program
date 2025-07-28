#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Handle zero separately
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        // Loop to count digits
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}
