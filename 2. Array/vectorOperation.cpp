#include<iostream>
#include<vector>
using namespace std;

void printArray (vector<int> arr, string message){
    cout << message ;

    // operation 1 -> n
    for( auto val : arr){
        cout << " " << val ;
    }
    cout << endl;
    
}

// linear search 
// item = value we want to find

int linearSearch ( vector <int> arr , int item){
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}


int main() { 
    system("cls");
    vector<int> arr = {23, 3, 56, 87, 11, 6};

    printArray(arr, "[+] Original Array : ");

    int item = 87; 
    auto result = linearSearch(arr , item);

    if (result == -1)
            cout << " Result is not found !!!!!!" << item << " ! " << endl;
    else 
        cout << " Result is found at index " << result << endl;

        for ( int i = 0; i < arr.size() ; i++){
        for ( int j = 0 ; j < arr.size()-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap (arr[j] , arr[j+1]);
            }
        }
    }

    printArray(arr, "Array after bubble sorted : ");
}