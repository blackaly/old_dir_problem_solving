#include <iostream>
#include <string>

int main()
{
    int x = 0;
    int y = 0;

    std::cin >> x >> y;
    std::cout << " Y"[x % y == 0] <<" N"[x % y != 0] <<"";

    return 0;
}
