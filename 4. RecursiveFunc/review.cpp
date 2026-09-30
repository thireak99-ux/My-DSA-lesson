#include<iostream>
using namespace std;

int recursiceFunc(int n){
     if (n == 1) return 1;

    return n + recursiceFunc(n-1);
}

int main(){

    system("cls");

    int n = 4;

    cout << "This is the sum of n = " << recursiceFunc(n) << endl;
    cout << endl;
}