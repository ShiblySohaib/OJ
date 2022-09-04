#include <iostream>
#include <vector>
int main()
{
    int n, i = 9;
    std::vector<int> v;
    std::cin >> n;
    if(n==0)
    {
        std::cout<<10;
        return 0;
    }
    if (n < 10)
    {
        std::cout << n;
        return 0;
    }
    for (;;)
    {
        if (i == 1)
        {
            std::cout << -1;
            return 0;
        }
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i == 1)
                break;
            n /= i;
        }
        else
            i--;
    }
    for (i = size(v) - 1; i >= 0; i--)
        std::cout << v[i];
    return 0;
}