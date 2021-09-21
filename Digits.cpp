#include <iostream>
#include <string>
// https://codeforces.com/problemset/problem/1510/D


int main()
{
    unsigned int numberOfCards = 0;
    std::cin >> numberOfCards;

    unsigned int cards[numberOfCards] = {};
    unsigned int favNumber = 0;
    unsigned int choosenNumber = 0;
    unsigned int actuallyNumber[] = {};

    int i = 0;
    int sum = 0;
    int m = 1;
    std::cin >> favNumber;

    for(unsigned int i = 0; i < numberOfCards; i++){
        std::cin >> cards[i];
    }
    while(i < numberOfCards){
        for(unsigned int j = i + 1; j < numberOfCards; j++){
            sum = cards[i] * cards[j];
            m = sum % 10;
            if(m == favNumber){std::cout << "( "<< cards[i] << " - " << cards[j]<<" )" <<sum << " - " <<"h" << std::endl;}

        }

        ++i;
    }

    return 0;
}
