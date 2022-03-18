#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    while (x != 0 && y != 0)
    {
        if (x >= 1 && y >= 1)
        {
            printf("primeiro\n");
        }
        else if (x >= 1 && y <= -1)
        {
            printf("quarto\n");
        }
        else if (x <= -1 && y >= 1)
        {
            printf("segundo\n");
        }
        else
        {
            printf("terceiro\n");
        }
        scanf("%d %d", &x, &y);
    }
    return 0;
}