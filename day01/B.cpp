

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

int main()
{
    int n, nc;
    std::cin >> n;
    std::vector<int> vect(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> vect[i];
    }
    sort(vect.begin(), vect.end());
    for (size_t i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << " ";
    }
    
}