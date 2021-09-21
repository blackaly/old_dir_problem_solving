#include <iostream>

//https://codeforces.com/problemset/problem/71/A

int main()
{

    std::string string_words[100] = {};
    int n = 0;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
        std::cin >> string_words[i];

    for(int j = 0; j < n; ++j){
            if(string_words[j].size() > 10)
                std::cout << string_words[j][(string_words[j].size()- string_words[j].size())] << string_words[j].size() - 2 << string_words[j][string_words[j].size() - 1] << '\n';
            else
                std::cout << string_words[j] << '\n';

    }



    return 0;
}
