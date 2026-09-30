#include<iostream>
using namespace std;

void greeting (string username){
    cout << endl;
    cout << "Welcome my belove client " << username << endl;
    cout << endl;
}

float exchangeMoney (float usd){
    return usd * 4000;
}


int main (){

    system("cls");

    greeting("HE. Sothirak");

    float result = exchangeMoney(10);

    cout << "This is your exchange money from 10 USD to Khmer Riels: " << result << " riels" << endl;
}