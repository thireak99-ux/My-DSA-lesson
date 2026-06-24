#include<iostream>
using namespace std;
int main(){

    system("cls");

    int values[]{10,20,30,40,50};

    int size = sizeof(values) / sizeof(values[0]);

    cout << "Size is : " << size << endl;

    cout << "First element is : " << values[0] <<endl;

    cout << "Second element is : " << values[size-1] << endl;

    cout << endl;
    for(int i = 0; i < size ; i++){

        cout << " " << values[i] ;
    }
    cout << endl;
    cout << endl;

    for(int val: values){
        cout << " " << val;
    }
    cout << endl;

    return 0;
}