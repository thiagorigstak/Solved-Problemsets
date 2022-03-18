#include <iostream>

using namespace std;

int main()
{
    int N;
    int icc[40];
    icc[0] = 1;
    icc[1] = 1;

    cin >> N;

    for (int i = 2; i < N; i++)
    {
        icc[i] = icc[i - 2] + icc[i - 1];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (i > 0)
        {
            cout << icc[i] << " ";
        }
        else
        {
            cout << icc[i] << endl;
        }
    }

    return 0;
}