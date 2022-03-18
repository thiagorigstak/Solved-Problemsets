#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; // N = numero de palavras;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string x;
        int lng;
        cin >> x;
        lng = x.length();
        if (lng == 3)
        {
            if (x[0] == 'O' && x[1] == 'B' && x[2] != 'I')
            {
                x.pop_back();
                x.push_back('I');
            }
            else if (x[0] == 'U' && x[1] == 'R' && x[2] != 'I')
            {
                x.pop_back();
                x.push_back('I');
            }
        }
        if (i != N-1)
        {
            cout << x << " ";
        }
        else
        {
            cout << x << endl;
        }

    }

    return 0;
}