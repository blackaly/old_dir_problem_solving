#include <iostream>



int main()
{


    long long x = 0, y = 0;

    std::cin >> x >> y;
    if(x > y)
        std::cout << ">" <<'\n';
    else if(x < y)
        std::cout << "<" << '\n';
    else
        std::cout << "=" << '\n';

    return 0;
}

