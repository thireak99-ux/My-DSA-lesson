#include<iostream>
using namespace std;

int factorial (int n ){

if (n == 0 || n == 1) return 1;

return n * factorial(n-1);

}

int fibannaci (int n){

    if (n == 1 ) return 0;
    if (n == 2 ) return 1; 

    return fibannaci(n- 1) + fibannaci(n-2);

}

int sumOfFib( int n) {

    if (n == 1) return fibannaci(1);

    return fibannaci(n) + sumOfFib(n-1);
}

int main (){
    system("cls");


    int n = 4;
    int fib = 6;

    cout << "This is the sum of 1 - 4 = " << factorial(n) << endl;
    cout << endl;

    n = 5;

    cout << endl;
    cout << "This is the sum of 1 - 5 = " << factorial(n) << endl;

    

    cout << endl;
    cout << endl;
    cout << "\t \tThis is the fibonacci result " << endl;
    cout << endl;

   for ( int i = 1 ; i <= 5 ; i++){
    cout << "this is fib "<<i<<" = " << fibannaci(i)<< endl;
   }

   cout << endl;
    cout << endl;
    cout << "\t \tThis is the sum fibonacci result " << endl;
    cout << endl;

   for ( int i = 1 ; i <= 5 ; i++){
    cout << "this is fib "<<i<<" = " << sumOfFib(i)<< endl;
   }

}