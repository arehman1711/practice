#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == 5) && i != 1 || (i == 1 || i == 3) && j > 1 && j < 5)
                printf("*");

            else
                printf(" ");
        }
        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1) || (j == 5 && i != 1 && i != 3 && i != 5) || ((i == 1 || i == 3 || i == 5) && j > 1 && j < 5))
                printf("*");

            else
                printf(" ");
        }

        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1) || (j == 5 && i != 1 && i != 5) || (i == 1 || i == 5) && j < 5)
                printf("*");

            else
                printf(" ");
        }
        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if (((j == 1 || j == 5) && i != 5) || (i == 5 && j > 1 && j < 5))
                printf("*");

            else
                printf(" ");
        }
        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1) || (j == 5 && i != 1 && i != 3) || (i == 1 || i == 3) && j > 1 && j < 5)
                printf("*");

            else
                printf(" ");
        }
        printf("\t");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1) || (j == 5 && i != 1 && i != 3) || (i == 1 || i == 3) && j > 1 && j < 5)
                printf("*");

            else
                printf(" ");
        }
        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1) || (i == 1 || i == 3 || i == 5) && j > 1)
                printf("*");

            else
                printf(" ");
        }
        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == 5) || (i == 3) && j > 1 && j < 5)
                printf("*");

            else
                printf(" ");
        }
        printf("");

        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == 5) || ((i == 2) && (j == 2 || j == 4) || (i == 3) && j == 3))
                printf("*");

            else
                printf(" ");
        }
        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == 5) && i != 1 || (i == 1 || i == 3) && j > 1 && j < 5)
                printf("*");

            else
                printf(" ");
        }
        printf(" ");
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == 5) || (i == j))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}