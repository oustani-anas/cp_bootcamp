
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

bool is_correct(std::string str)
{
    std::stack<char> parthes;
    for (size_t i = 0; i < str.size(); i++)
    {
        if(str[i] == '(' || str[i] == '[')
            parthes.push(str[i]);
        else if((!parthes.empty()) && ((str[i] == ')' && parthes.top() == '(') || (str[i] == ']' && parthes.top() == '[')))
            parthes.pop();
        else if(parthes.empty() && (str[i] == ')' || str[i] == ']'))
            return(false);
        else
            return false;
    }
    if(parthes.empty())
        return(true);
    else
        return(false); 
}

int main()
{
    int n;
    std::string line;
    
    std::cin >> n;std::cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(std::cin, line);
        if(is_correct(line) == false)
            std::cout << "No\n";
        else if(is_correct(line) == true)
            std::cout << "Yes\n";
    }
}