#include<iostream>
#include<queue>

using namespace std;

int main(){

    system("cls");

    // this is MaxHeap

    // priority_queue<int> values;

    // this is MinHeap (greater<int>)

    priority_queue<int , vector<int> , greater<int>> values;

    values.push(9);
    values.push(900);
    values.push(100);
    values.push(50);

    cout << "[+] Print all values: " << endl;

    while(!values.empty()){
        cout << values.top() << " ";
        values.pop();
    }

}