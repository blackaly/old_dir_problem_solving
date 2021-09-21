#include <iostream>
#include <string>

int main()
{

    int x = 0;
    int y = 0;

    std::cin >> x >> y;
    std::string a = x % y == 0? "YES":"NO";
    std::cout << a << "\n";

    return 0;
}
