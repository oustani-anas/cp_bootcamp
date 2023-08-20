
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#define endl '\n'
#define ll long long
#define dd double

// 1e-6 = 10^-6 = 0.000006
dd a, b, c;

dd binarySearch(dd t, dd left, dd right) {
    if (left > right) {
        return -1;
    }

    dd mid = left + (right - left) / 2;

    std::cout << mid << endl;
    if (mid == t && (((a * t) + (b * sin(t)) - c) == 0)) {
        return mid;
    } else if (mid < (((a * t) + (b * sin(t)) - c))) {
        return binarySearch(t, mid + 1e-6, right);
    } else {
        return binarySearch(t, left, mid - 1e-6);
    }
}

int main()
{
    ll n;
    dd x;
    std::cin >> n;
    for (dd i = 0; i < n; i++)
    {
        std::cin >> a >> b >> c; 
    }
    std::cout << binarySearch( x, __DBL_MIN__, __DBL_MAX__)<< endl;
}