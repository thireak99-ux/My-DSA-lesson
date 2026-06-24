#include<iostream>
#include<vector>

using namespace std;

int main(){
    system("cls");

    vector<int> arr = {10,22,3,44,55};
    cout << "Size of array is : " << arr.size() << endl;

    cout << endl;
    cout << "[+] Print all elements:" ;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << " " << arr [i] ;
    }
    cout << endl;
}