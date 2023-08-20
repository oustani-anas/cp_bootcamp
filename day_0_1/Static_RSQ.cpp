
#include <iostream>
#include <vector>
#include <string>
#define endl "\n"

int main()
{
    int n, q;
    int a, b, sum; 

    std::cin >> n >> q;
    std::vector<int> arr(n);
    for (int i = 1; i <= n; i++)
    {
        std::cin >>  arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        sum = 0;
        std::cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            sum += arr[j];
        }
        std::cout << sum << endl;
    }
}