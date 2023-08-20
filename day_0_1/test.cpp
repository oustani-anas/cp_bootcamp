#include <iostream>
#include <string>
#include <stack>

bool is_correct(std::string str)
{
    std::stack<char> parthes;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '[')
            parthes.push(str[i]);
        else if (!parthes.empty() && ((str[i] == ')' && parthes.top() == '(') || (str[i] == ']' && parthes.top() == '[')))
        {
            parthes.pop();
        }
        else
        {
            return false;
        }
    }
    return parthes.empty();
}

int main()
{
    std::string n;
    std::string line;
    std::getline(std::cin, n);
    int num = std::stoi(n);
    for (int i = 0; i < num; i++)
    {
        std::getline(std::cin, line);
        if (is_correct(line))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}