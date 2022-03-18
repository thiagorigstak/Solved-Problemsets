#include <bits/stdc++.h>

using namespace std;

int main()
{
    float I = 0, J = 1, cont = 0, contj;
    contj = J;
    while (I <= 2.1)
    {
        while (cont < 3)
        {
            if (I == 2.0 || I == 1 || I == 0)
            {
                printf("I=%d ", (int)I);
                if ((J < 5.1 && J > 4.9) || (J > 0.9 && J < 1.1) || (J < 2.1 && J > 1.9) || (J < 3.1 && J > 2.9) || (J < 4.1 && J > 3.9))
                {
                    printf("J=%d\n", (int)J);
                }
                else
                {
                    printf("J=%.1f\n", J);
                }
            }
            else
            {
                if (I < 2.1 && I > 1.9)
                {
                    printf("I=%d ", (int)I);
                }
                else
                {
                    printf("I=%.1f ", I);
                }

                if ((J < 5.1 && J > 4.9) || (J > 0.9 && J < 1.1) || (J < 2.1 && J > 1.9) || (J < 3.1 && J > 2.9) || (J < 4.1 && J > 3.9))
                {
                    printf("J=%d\n", (int)J);
                }
                else
                {
                    printf("J=%.1f\n", J);
                }
            }
            cont++;
            J++;
        }
        contj += 0.2;
        I += 0.2;
        cont = 0;
        J = contj;
    }

    return 0;
}