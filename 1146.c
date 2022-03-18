#include <stdio.h>

int main()
{

    int X;
    int i;
    do
    {
        scanf("%d", &X);
        for (i = 0; i < X; i++)
        {
            printf("%d", i + 1);
            if (i != X - 1)
            {
                printf(" ");
            }
        }
        if (X != 0)
        {
            printf("\n");
        }

    } while (X != 0);

    return 0;
}