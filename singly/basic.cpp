#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next ;

    Node (int val){
    data = val;
    next = nullptr;
    };
};



class SinglyLinkedList{
    private:

        Node* head;
    
    public :
    
        SinglyLinkedList(){
            head = nullptr;
        }

        ~SinglyLinkedList(){
            cout << " Object is destroyed !! " << endl;
        }

        void insertFront (int value){
            Node* newMode = new Node(value);
            newMode->next = head;
            head = newMode; 
        }
        void displayAll (){
            Node* temp = head ;

            while(temp!=nullptr){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL";
        }
}; 


int main(){
    system("cls");

    SinglyLinkedList list;

    list.insertFront(10);
    list.insertFront(50);
    list.displayAll();


}