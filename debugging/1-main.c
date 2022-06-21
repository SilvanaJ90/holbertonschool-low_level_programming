#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n"); /*printf statements shows that break will cause “while loop exited” to print, indicating that the even number is never printed*/

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n"); /*A printf statement shows when the for loop is finished*/

        return (0);
}
