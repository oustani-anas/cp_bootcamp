
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#define endl '\n'
#define ll long long

int main()
{
    int test = 0;
    std::cin >> test;
    while (test--){
        ll n;
        int t=0;
        char x;
        std::string str;
        std::cin >> n;
        std::cin >> x;
        std::cin >> str;
        for (ll i = 0; i < n; i++)
        {
            if(x > str[i] && t == 0){// && x > str[i + 1]){
                std::cout << x;
                t = 1;
            }
            std::cout << str[i];
        }
        if (t == 0)
            std::cout << x;
        std::cout << endl;
    }
}