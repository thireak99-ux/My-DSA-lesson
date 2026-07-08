#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> arr , string message){

    cout << " [+] " << message << ": ";

    for( int value : arr){
        cout << " " << value ;
    }
    cout << endl;
}

int linearSearch (vector <int> arr , int target){
    for ( int i = 0 ; i < arr.size() ; i++){
        if (target == arr[i]) return i;
    }
    return -1;
}


/*

- pass by value 
- pass by reference 

*/

void bubbleSort (vector<int>& arr ){
     // for algorithm bubble sort

     for ( int i = 0; i < arr.size() ; i++ ){
        for( int j = 0 ; j < arr.size()-i-1 ; j++){
            if(arr[j] > arr [j+1] ) swap(arr[j],arr[j+1]);
        }
     }
}


int main(){

    system("cls");

    vector<int> arr = {20, 10 , 35 , 60 , 50};

    printArray(arr,"This is the array that we want to print in the output");
    cout<< endl;


    // linearSearch 

    int target = 40;

    int result = linearSearch(arr , target);
    if ( result == -1) cout << "Not found 404" << endl;
    else cout << "The result found at index " << result << endl;

    bubbleSort(arr);
    printArray(arr, "this is the arrray of bubble sort");
    
    


}