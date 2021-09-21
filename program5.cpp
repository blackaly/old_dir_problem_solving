#include <iostream>
#include <string>


int main()
{

    std::string nameRandom = " ";
    int enter = 0;
    int i = 0;
    int m = 0;
    int l = 0;
    std::cin >> enter;
    std::cin >> nameRandom;

    bool trueOrF[1] = {"\n"[!(nameRandom[l++] == 'A') || (++i)]
        || "\n"[!(nameRandom[l++] == 'A') || (++i)] || "\n"[!(nameRandom[l++] == 'A') || (++i)] || "\n"[!(nameRandom[l++] == 'A') || (++i)]
        || "\n"[!(nameRandom[l++] == 'A') || (++i)] || "\n"[!(nameRandom[l++] == 'A') || (++i)] || "\n"[!(nameRandom[l++] == 'A') || (++i)]
    };
    m = enter - i;
    if(trueOrF[1]) std::cout << i << " " << m << std::endl;




    return 0;
}
