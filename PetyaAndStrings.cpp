#include <iostream>

//https://codeforces.com/problemset/problem/112/A

int main()
{

    std::string firstString = "";
    std::string secondString = "";
    int sum = 0;
    int sum2 = 0;

    std::cin >> firstString >> secondString;
    for(int i = 0; i < firstString.size(); i++){
        sum +=  tolower(firstString[i]);
        sum2 += tolower(secondString[i]);
    }
    if(firstString.size() >=1 && firstString.size() <= 100 && firstString.size() == secondString.size()){
        if(sum < sum2)
            std::cout << "-1" << '\n';
        else if(sum > sum2)
            std::cout << "1" << '\n';
        else
            std::cout << '0' << '\n';
    }

 return 0;

}

