#include<iostream>
using namespace std;

int  main(){
    system("cls");

// everytime we have new it gonna pair with delete

    int * values = new int[5]{10,20,30,40,50};

    for(int i = 0; i<5 ; i++){
        cout << " " << (values+i);
    }
    cout<<endl;
    cout<<endl;
    for(int i = 0 ; i<5 ; i++){
        cout << " " << values[i];
    }
    cout<<endl;

    // deallocate memory
    delete[] values;

    return 0;
}