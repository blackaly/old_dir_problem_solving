#include <iostream>
#include <string>

int main()
{

    char a[5] = {'a' , 'e' , 'i' , 'o' , 'u'};
    char user = ' ';
    for(int i = 0; i < 5; i++){
        std::cin >> user;
        std::string z = user == a[i] || user == toupper(a[i])?"Vowel": "Not Vowel" ;
        std::cout << z << "\n";

    }


    return 0;
}
