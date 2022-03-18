
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, min, resp, x;
    bool duplicata;
    cin >> n >> x;
    min = x;
    resp = 1;
    duplicata = true;
    for (int i = 2; i <= n; i++)
    {
        cin >> x;
        if (x < min)
        {
            min = x;
            resp = i;
            if (!duplicata)
                duplicata = true;
        }
        else if (x == min)
            duplicata = false;
    }
    if (duplicata)
        cout << resp << endl;
    else
        cout << "Still Rozdil" << endl;

    return 0;
}