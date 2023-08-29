
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

bool f_x(std::pair<std::string, int> &a, std::pair<std::string, int> &b)
{
    if (a.second == b.second)
        return (a.first < b.first);
    return (a.second < b.second);
}

int main()
{
    int n;
    std::string word;
    std::map<std::string, int, std::greater<std::string> > words;

    int maxf = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> word;
        words[word]++;

        maxf = std::max(maxf, words[word]);
    }
    for (auto it = words.rbegin(); it != words.rend(); it++)
    {
        if (it->second == maxf){ 
        }
    }
}