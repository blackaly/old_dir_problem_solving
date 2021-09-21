#include <iostream>

int main()
{


    int x = 0, y = 0;
    char s = ' ';

    std::cin >> x >> s >> y;
    if(s == '<')
        (x < y? std::cout << "True" << '\n': std::cout << "False" << '\n');
    else if(s == '>')
        (x > y? std::cout << "True" << '\n': std::cout <<"False" << '\n');
    else
        (x == y? std::cout << "True" << '\n': std::cout <<"False" << '\n');
    return 0;
}

