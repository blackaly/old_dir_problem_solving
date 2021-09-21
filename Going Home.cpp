#include <iostream>
#include <string>
//https://codeforces.com/problemset/problem/1500/A
int main()
{

    unsigned x = 0;
    unsigned m = 0;
    std::cin >> x;
    unsigned a[x] = {0};
    for(unsigned i = 0; i < x; i++)
        std::cin >> a[i];

    while(m < x){
        for(unsigned j = m + 1; j < x; ++j){
            if(a[m] + a[m + j] == a[m + (j + 1)] + a[m + (j + 2)])
                std::cout<< "YES" << std::endl;
        }
        m++;
    }


    return 0;
}
