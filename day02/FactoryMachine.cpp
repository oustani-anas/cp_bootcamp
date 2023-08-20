
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long

/*
3 7           3 : num of machins  7 : products                         
3 2 5          time each machine would take to make product 
*/

int main()
{
    ll n, t, npr = 0, time = 0;
    std::cin >> n >> t;
    std::vector<ll> vect(n);
    for (ll i = 0; i < n; i++)
        std::cin >> vect[i];
    for (ll i = 0; i < t; i++)
    {
        for (ll j = 0; j < vect.size(); j++){
            // std::cout << "ook" << endl;
            vect[j] -= 1;
            if(vect[j] == 0){
                npr++;
                if(npr == t){
                    std::cout << time << endl;
                    break;
                }
                // vect[i]    
            }
        }
        time++;
    }
    //std::cout << time << endl;
}