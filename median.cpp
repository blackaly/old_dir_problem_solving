tuple<int, int> median(int arr[], int arrSize){
    int number_1 = arr[(arrSize - 1) / 2];
    if(((arrSize - 1) % 2) == 0){
        return{arr[number_1], NULL};
    }
    else{
        return{arr[number_1], arr[number_1 + 1]};
    }

}

