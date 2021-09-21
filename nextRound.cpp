#include <iostream>

//https://codeforces.com/problemset/problem/158/A
int actuall_socre[100];
int main()
{


   int particip = 0, final_score = 0, number = 0;

   std::cin >> particip >> final_score;

   for(int i = 0; i < particip; ++i)
        std::cin >> actuall_socre[i];

    for(int j = 0; j < particip; ++j)
        if(actuall_socre[j] >= actuall_socre[final_score] && actuall_socre[j] > 0)
            number++;

    std::cout << number << '\n';



    return 0;
}
