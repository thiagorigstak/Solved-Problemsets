#include <iostream>

using namespace std;

int main()
{
    int n, j = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (t1 + t2 + t3 > 1)
        {
            j++;
        }
    }
    cout << j << endl return 0;
}