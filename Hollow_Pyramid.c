#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // stars & hollow logic
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}