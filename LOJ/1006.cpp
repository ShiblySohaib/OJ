#include <iostream>
#include <cstring>
using std::cin, std::cout, std::endl, std::string;
int main()
{
    int i, n, t,tt;
    long long a[10001];
    cin >> t;
    for (tt = 0; tt < t; tt++)
    {
        for (i = 0; i < 6; i++)
            cin >> a[i];
        cin >> n;
        for (i = 6; i <=n; i++)
        {
            a[i] = a[i - 1] + a[i - 2] + a[i - 3] + a[i - 4] + a[i - 5] + a[i - 6];
            a[i]%=10000007;
        }
        cout<<"Case "<<tt+1<<": "<<a[n]<<"\n"; //%10000007
    }

    return 0;
}
