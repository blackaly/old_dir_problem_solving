#include <iostream>

//https://codeforces.com/problemset/problem/282/A

int main()
{
	
    int numbers{0}, x{0}; 		
    std::string users = " ";
    std::cin >> x;
    if(x >= 1 && x <= 150){
    for(int i = 0; i < x; ++i){
        std::cin >> users;
        if(users == "x++" || users == "X++")
            number++;
        else if(users == "++x" || users == "++X")
            ++number;
        else if(users == "x--" || users == "X--")
            number--;
        else
            --number;
    }
}
    std::cout << number << '\n';

    return 0;
}
