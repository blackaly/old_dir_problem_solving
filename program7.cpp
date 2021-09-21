#include <iostream>
#include <string>

int main()
{

    std::string firstString = "";
    std::string secondString = "";
    int sum = 0;
    int sum2 = 0;

    std::cin >> firstString >> secondString;
    for(unsigned int i = 0; i < firstString.size(); i++){
        sum +=  toupper(firstString[i]);
        sum2 += toupper(secondString[i]);
    }
    std::cout << "\n"[!(sum == sum2) || std::cout << "1"]
    << "\n"[!(sum > sum2) || std::cout << "1"] << "\n"[!(sum < sum2) || std::cout << "-1"];




    return 0;
}
