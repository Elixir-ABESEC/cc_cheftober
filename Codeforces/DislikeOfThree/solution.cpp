#include <bits/stdc++.h>

int main()
{
    int t, n;
    std::cin >> t;
    int count = 0;
    std::vector<int> v;
    while (t--)
    {
        std::cin >> n;
        for (int i = 1; i < 1667; ++i)
        {
            if (i % 10 == 3 || i % 3 == 0)
            {
                continue;
            }
            if (--n == 0)
                v.push_back(i);
        }
    }
    for (auto a : v)
        std::cout << a << std::endl;
}
