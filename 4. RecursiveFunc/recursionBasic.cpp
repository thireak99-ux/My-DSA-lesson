#include<iostream>
using namespace std;

int sumOfN (int n){

    if (n == 1) return 1;

    return n + sumOfN(n-1);
}

int main (){
    system("cls");


    int n = 4;

    cout << "This is the sum of 1 - 4 = " << sumOfN(n) << endl;
    cout << endl;

    n = 5;

    cout << "This is the sum of 1 - 5 = " << sumOfN(n) << endl;
}