#include <iostream>

// Jacopi with 3 Linear Equation, by: Ali Muhammad

int main()
{

    int iteration = 0;                 // Number of iteration
    int n;                             // number of equations
    long double bs[100] = {};            // number of cofficient in righ-hand side
    long double coff[100][100] = {};     // Constants.
    long double x1 = 0, x2 = 0, x3 = 0; // UNKOWNS or variables
    double x = 0, y = 0, z = 0;    // Assign to Unkowns

    std::cout << "number of cofficient in one equation: ";
    std::cin >> n; // Takes the number of equation.

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j){
            std::cout << "[" << (i + 1) <<"]" << "[" << (j + 1) <<"]" << ' ';
            std::cin >> coff[i][j]; //Takes The cofficients a
    }

     std::cout << "number of bs: " << '\n'; // Takes the cofficient b

     for(int i = 0; i < n; ++i){
        std::cout << "[" << (i + 1) << "]";
        std::cin >> bs[i];
    }
    std::cout <<"number of iteration: ";
    std::cin >> iteration;              //Takes the number of iteratuins



        for(int i = 0; i < iteration; ++i){
        x = (1 / coff[0][0]) * (((bs[0]) - (coff[0][1] * x2)) - (coff[0][2] * x3)); // 1
        y = (1 / coff[1][1]) *  (((bs[1]) - (coff[1][0] * x1)) - (coff[1][2] * x3)); // 2
        z = (1 / coff[2][2]) * (((bs[2]) - (coff[2][0] * x1)) - (coff[2][1] * x2)); // 3

        x1 = x;
        x2 = y;
        x3 = z;

    }


    std::cout << x1 << ' ' << x2 << ' ' << x3 << '\n';

    return 0;
}

