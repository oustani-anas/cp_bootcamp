

#include <iostream>
#include <vector>
#include <string>
#define endl "\n"

/*
    3 2 4 5 1 1 5 3
    3 1
*/


void pr_sum(std::vector<long long> &arr, long long n, long long q)
{
    long long a, b, sum;
    std::vector<long long> prefixS(n + 1, 0);
    for (long long i = 1; i <= n; i++)
    {
        prefixS[i] = arr[i - 1] + prefixS[i - 1];
    }
    for (long long i = 0; i < q; i++)
    {
        std::cin >> a >> b;
        std::cout << prefixS[b] - prefixS[a - 1] << endl;
    }
}

int main()
{
    long long n, q;

    std::cin >> n >> q;
    std::vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        std::cin >>  arr[i];
    }
    pr_sum(arr, n, q);
}