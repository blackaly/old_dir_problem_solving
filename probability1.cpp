#include <iostream>

/*
    How the program work: 
    first -> put the length of the table. 
    second => put the values. 
*/

int main()
{

  int temp = 0, n = 0, firstDigit = 0, secondDigit = 0;

  std::cout << "Enter The size of the array: ";
  std::cin >> n;

  int *table = new int(n); // Takes an array of numbers.

      for(int i = 0; i < n; ++i){
        std::cout << '{' << i + 1 <<'}' << ' ' ;
        std::cin >> table[i];                    // Takes the value of the array
    }

    for(int i = 0; i < n - 1; ++i){             //Makes sorting operation.
        for(int j = 0; j < n - 1; ++j){
            if(table[j] > table[j + 1]){
                temp = table[j];
                table[j] = table[j + 1];
                table[j + 1] = temp;
        }
    }
}

    for(int i = 0; i < n; ++i){
        firstDigit = table[i] / 10;      // Takes the last Diagit. ex. (110) will be 10
        secondDigit = table[i] % 10;     // Takes the first Digit. ex. (110) will be 1
        std::cout << '\n' << firstDigit << "  |  " << secondDigit << '\n';
    }



    return 0;
}

