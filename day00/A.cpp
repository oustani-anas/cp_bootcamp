
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    int n_seq, num;

    std::cin >> n_seq;
    for (size_t i = 0; i < n_seq; i++)
    {
        std::cin >> num;
        if(num >= 0)
            num = num + 2;
        std::cout << num << " ";
    }
}