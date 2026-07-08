#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){

    system("cls");

    stack<int> st;

    // push() this here is where we want to add the value in it 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // pop() this is where we delete the last element 
    st.pop();

    cout << endl;
    // the top() here is where we want to display the top and the top of the stack is the last element 

    cout << "The top of stack value: " << st.top() << endl;

    cout << endl;
    cout << "The size of the stack is equal : " << st.size() << endl;

    cout << endl;
    cout << "Is the stack empty : " << (st.empty()? "Yes" : "No") << endl;





}