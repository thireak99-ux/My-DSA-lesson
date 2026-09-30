#include<iostream>
#include<deque>

using namespace std;

void printAll (deque<int> values , string msg){

    cout << msg ;
    for (auto val : values){
        cout << val << " ";
    }
    cout << endl;

}

void reversedPrint (deque <int> values , string msg){

    //  cout << msg;

    // for(int i = values.size()-1 ; i >= 0 ; i--){
    //     cout << values[i] << " ";
    // }

    // cout << endl;
    cout << msg;

    while(!values.empty()){
        cout << values.back() << " ";
        values.pop_back();
    }
}

int main(){
    system("cls");

    deque<int> values;

    for(int i = 1 ; i <=10 ; i++){
        values.push_back(i*10);
    }
    cout << endl;

    cout << "Using iterator style : " << endl;

    for (auto it = values.begin(); it!= values.end() ; it++ ){

        cout << (*it) << " ";


    }
    cout << endl;

    cout << "[+] Using with for i loop : " << endl;
    cout << endl;

    for( int i = 0 ; i < values.size(); i++){
        cout << values[i] << " ";
    }
    cout << endl;

    cout<< endl;
    cout << "[+] Using with for each : " << endl;
    cout << endl;

    values.push_front(99);
    values.push_back(88);

    values.insert(values.begin()+3,101);

    values.pop_front();
    values.pop_back();

    values.erase(values.begin()+3);

    printAll(values , "All element is printed: ");

    cout << endl;

    reversedPrint(values , "This is the reverse version: ");

    cout << endl;


}