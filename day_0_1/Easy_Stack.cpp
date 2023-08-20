
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>



int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int T, q, num;
    std::stack<int> st;

    std::cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        std::cin >> q;
        if(q == 1){
            std::cin >> num;
            st.push(num);
        }
        else if(q == 2 && !st.empty())
            st.pop();
        else if(q == 3){
            if(!st.empty())
                std::cout << st.top() << "\n";
            else 
                std::cout << "Empty!\n";
        }
    }   
}