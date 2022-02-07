#include <bits/stdc++.h>

using namespace std;

int funct(int number);

int main()
{
    bool n = true;
    int num;
    vector<int> lista;
    cin >> num;
    while (n)
    {
        for (int i = 0; i < lista.size(); i++)
        {
            if (num == lista[i])
            {
                n = false;
                break;
            }
        }
        lista.push_back(num);
        num = funct(num);
    }
    cout << lista.size() - 1 << endl;
    return 0;
}

int funct(int number)
{
    number += 1;
    while (number % 10 == 0)
    {
        number /= 10;
    }
    return number;
}