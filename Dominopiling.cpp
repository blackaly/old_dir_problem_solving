#include <iostream>

//https://codeforces.com/problemset/problem/50/A

int main()
{
    int n = 0, m = 0, d = 0;
    std::cin >> m >> n;
    if(n <= 16)
        d = (m * n) / 2;
    std::cout << d <<'\n';
    return 0;
}

// another solution.

#include <iostream>
int main()
{
    int n = 0, m = 0, d = 0;
    std::cin >> m >> n;
    for(int i = 1; i < m*n; i = i + 2)
        d++;
    std::cout << d;
    return 0;
}





