#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void printAll (queue<int> values , string msg){

    cout << msg << endl;

    while(!values.empty()){
        // cout << "Print all the queue values" << endl;
        // cout << endl;
        // cout << "This is the firqu element : " << values.front() << endl;
        // cout << "This is the laqu element : " << values.back() << endl;
        // cout << "This is the size of the queue : " << values.size() << endl;
        // cout << "Is queue empty : " << values.empty() << endl;                   this is can only be use with if 

        cout << values.front() << " ";
        values.pop();
    }
    return ;
}

int getMin (queue<int> values ){
    int mn = values.front();
    values.pop();

    while (!values.empty()){
        mn = min(mn, values.front());
        values.pop();
    }
    return mn;

}

void reversedPrint (queue<int> values , string msg ){

    stack<int> temp;

    while(!values.empty()){
        temp.push(values.front());
        values.pop();
        
    }
    cout << msg ;
    while (!temp.empty()){

        cout << temp.top() << " ";
        temp.pop();
    }
    cout <<endl;
    

}

int main () {

    system("cls");

    queue<int> values;
    

    for (int i = 1 ; i <=10 ; i++){
        values.push(i*10);
    }

        cout << "This is the firqu element : " << values.front() << endl;
        cout << "This is the laqu element : " << values.back() << endl;
        cout << "This is the size of the queue : " << values.size() << endl;
        cout << "Is queue empty : " << values.empty() << endl;
    
    
    printAll(values, "This is all element");

    cout << endl;

    cout << "This is the minimum values in the queue = " << getMin(values) << endl;
    cout<< endl;
    reversedPrint(values, "This is the reversed print : ");

}