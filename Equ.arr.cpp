#include <iostream>
using namespace std;


long* arr1 = new long();

int main(){

long long testCases = 0;
long long counter[1000000000] = {};
long long arrSize = 0;
int temp = -1;
cin >> testCases;

for(int i = 0; i < testCases; ++i){
    long long arr[1000000000] = {};
    cout << "\nCase " << (i + 1) << '\n';
    cin >> arrSize;
    ++temp;
    for(int j = 0; j < arrSize; ++j){
        cin >> arr1[j];
        ++arr[arr1[j]];
        if(arr[arr1[j]] == 2)
            ++counter[temp];
        }

    }


    for(int i = 0; i < arrSize; ++i){
        if(counter[i] > 0){
            if(counter[i] <= 2)
                cout << '\n' << counter[i] << '\n';
            else{
                    counter[i] = (counter[i] - counter[i]) + 2;
                    cout << counter[i] << '\n';
            }
        }

    }

return 0;
}

