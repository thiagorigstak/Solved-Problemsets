#include <iostream>
#include <unordered_map>

class Solution
{
public:
    int romanToInt(std::string s)
    {
        int solucao = 0;
        std::unordered_map<char, int> romano({{'I', 1},
                                              {'V', 5},
                                              {'X', 10},
                                              {'L', 50},
                                              {'C', 100},
                                              {'D', 500},
                                              {'M', 1000}});
        for (int i = 0; i < s.length() - 1; i++)
        {
            int presente = romano[s[i]], proximo = romano[s[i + 1]];
            solucao = presente >= proximo ? solucao += presente : solucao -= presente;
        }
        return solucao + romano[s[s.length() - 1]]; // + ultimo numero
    }
};

int main()
{
    Solution c;
    std::cout << c.romanToInt("XLMDC") << std::endl;
    std::cout << c.romanToInt("III") << std::endl;
    std::cout << c.romanToInt("LVIII") << std::endl;
    std::cout << c.romanToInt("MCMXCIV") << std::endl;

    return 0;
}