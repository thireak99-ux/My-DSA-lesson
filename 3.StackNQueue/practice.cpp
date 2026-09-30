#include<iostream>
#include<stack> 
#include<iomanip>
using namespace std; 


int main(){
    system("cls"); 
    string input;
    stack<char> st; 
    cout<<"Enter input: "; 
    getline(cin,input);

    string reversedString ;
    // for ( int i = 1 ; i < input.size() ; i++){
    //     st.push(input[i]);
    // }
    for ( auto ch:input ) st.push(ch);
    while (!st.empty()){
        reversedString = reversedString + st.top();
        st.pop();
    }
    cout << endl;
    cout<<"OUTPUT: "<<endl; 
    cout<<"Original String: "<<input<<endl; 
    cout<<"Reversed String: "<< reversedString <<endl; 

    return 0; 
}
