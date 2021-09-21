#include <iostream>
#include <cmath>
using namespace std;

int main(){


long numberOfarr[100000] = {};
long freqArray[100000] = {};

int arrSize = 0, greaterValue = 0, smallestValue = 0;
int fastC_1 = 0, fastC_2 = 0, fastResult_1 = 0, fastResult_2 = 0;
int fastCounter_1 = 0, fastCounter_2 = 0;
int total = 0;

cout << "array size: " << endl;
cin >> arrSize;

int nOfClass = sqrt(arrSize);


for(int i = 0; i < arrSize; ++i){
    cout << '{' << (i + 1) << '}' << ' ';
    cin >> numberOfarr[i];
}


/************Sorting the array**************/
int j = 0, temp = 0;

for(int i = 1; i < arrSize; ++i)
{
    temp = numberOfarr[i];
    j = i - 1;
    while(j >= 0 && numberOfarr[j] > temp){
    numberOfarr[j + 1] = numberOfarr[j];
    j--;
    }
    numberOfarr[j + 1] = temp;
}

for(int i = 0; i < arrSize; ++i)
    cout << numberOfarr[i] << ' ';

/********************************/

smallestValue = numberOfarr[0];
greaterValue = numberOfarr[arrSize - 1];
int widthOfClass = (greaterValue - smallestValue) / nOfClass;

cout <<'\n'<< smallestValue << ' ' << greaterValue << '\n';
cout << "Width: " <<widthOfClass << '\n';


fastC_1 = 0;
fastC_2 = 0;

while(arrSize > fastC_1){
    fastC_1 += widthOfClass;
    ++fastCounter_1;
}

while(arrSize > fastC_2){
    fastC_2 += (widthOfClass + 1);
    ++fastCounter_2;
}
cout << fastC_1 << ' ' << fastC_2 << '\n';
cout << fastCounter_1 << ' ' << fastCounter_2 << '\n';


if(fastCounter_2 <= fastCounter_1){
    widthOfClass = widthOfClass + 1;
      for(int i = 0; i < fastCounter_2; ++i){
        fastResult_1 += widthOfClass;
        fastResult_2 = (widthOfClass + fastResult_1);

        for(int j = 0; j < arrSize; ++j){
            if(numberOfarr[j] > fastResult_1 && numberOfarr[j] <= fastResult_2 && arrSize >= fastResult_2)
                ++freqArray[i];

        }
    }

} else{
      for(int i = 0; i < fastCounter_1; ++i){
        fastResult_1 += widthOfClass;
        fastResult_2 = (widthOfClass + fastResult_1);

        for(int j = 0; j < arrSize; ++j){
            if(numberOfarr[j] > fastResult_1 && numberOfarr[j] <= fastResult_2 && fastResult_2 <= arrSize)
                ++freqArray[i];

        }
    }


}


for(int i = 0; i < arrSize; ++i){
  if(freqArray[i] == 0){break;}
 cout << freqArray[i] << ' ';
 total += freqArray[i];

}
cout << '\n' << total << '\n';

return 0;
}

