#include <iostream>

using namespace std;

long long int inverter(long long int Num);

int main()
{
    ios::sync_with_stdio(false);
    int N;
    long long int icc[61];
    icc[0] = 0;
    icc[1] = 1;
    icc[2] = 2;

    for (int i = 3; i < 60; i++)
    {
        if (i < 6)
        {
            icc[i] = icc[i - 1] + icc[i - 2];
        }
        else
        {
            long long int A, B;
            A = inverter(icc[i - 1]);
            B = inverter(icc[i - 2]);
            icc[i] = A + B;
        }
    }

    while (cin >> N)
    {
        cout << icc[N] << endl;
    }

    return 0;
}

long long int inverter(long long int Num)
{
    long long int inv = 0;
    while (Num > 0)
    {
        inv = 10 * inv + Num % 10;
        Num /= 10;
    }

    return inv;
}