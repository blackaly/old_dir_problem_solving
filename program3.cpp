#include <iostream>
#include <string>

int main()
{
int userCurrentScore = 100;
int x = 0;
int y = 0;

    while(true){
        x = x + userCurrentScore;
        std::cin >> x >> y;
        x = x + userCurrentScore;
        y == 1? (y = 50): (y = 0);
        x += y;
        std::cout << x << "\n";

    }

    return 0;
}
