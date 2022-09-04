#include <iostream>
#include <cmath>
using std::cin, std::cout;
int main()
{
    int i, *a, h, n;
    a = (int *)malloc(100000 * sizeof(int));
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < 100000; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i / 2];
            continue;
        }
        else
        {
            a[i] = a[(i - 1) / 2] + a[(i - 1) / 2 + 1];
        }
    }
    while (cin >> n)
    {
        if(n==0)break;
        h = 0;
        for (i = 0; i <= n; i++)
        {
            if (a[i] > h)
                h = a[i];
        }
        cout << h << "\n";
    }
}
