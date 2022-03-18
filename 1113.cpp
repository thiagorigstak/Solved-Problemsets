#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X,Y;
    do{
        scanf("%d %d", &X, &Y);
        if(X == Y)
        {
            break;
        }
        else
        {
            if(X > Y)
            {
                printf("Decrescente\n");
            }
            else
            {
                printf("Crescente\n");
            }
        }

    }while(X != Y);

    return 0;
}