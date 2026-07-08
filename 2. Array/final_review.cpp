#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr, string message)
{
    cout << "[+] " << message << endl;

    for (int value : arr)
    {
        cout << " " << value;
    }
    cout << endl;
}

int linearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
            return i;
    }
    return -1;
}

void bubbleSort (vector<int>& arr ){

    for (int i = 0 ; i < arr.size(); i++){
        for ( int j = 0; j < arr.size()-i-1 ; j++){
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
        
    }
}

// remove duplicate --> only work after sorted

void removeDuplicates(vector<int>& arr) {
    int counter = 0;
    for (int i= 1 ; i < arr.size() ; i++){
        if (arr [counter] != arr[i]){
            counter++;
            arr[counter] = arr[i];
        }
    }

    // resize() keep only unique elements
    // 0 , 1 , 2 , 3 , 4 size = 5 last element + 1
 
    arr.resize(counter + 1);
}

int main()
{
    system("cls");

    vector<int> values = {11, 11 , 25, 23, 23, 33, 56, 40};
    cout << endl;

    printArray(values, "This is the original values of array. ");

    int target = 56;
    int result = linearSearch(values, target);

    cout << "\n";
    cout << "Result " << target << ((result == -1) ? " Not Found " : " has found at index ") << result << endl;

    cout << endl;
    bubbleSort(values);
    printArray(values , "This is the array after bubble sorted");

    cout << endl;
    removeDuplicates(values);
    printArray(values , "Array after remove duplicate");
}
