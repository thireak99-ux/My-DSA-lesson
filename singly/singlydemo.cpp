#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node (int value){
        data = value;
        next = nullptr;
    }

};

class SinglyLinkedList{

    private:

    Node * head;

    public :

    SinglyLinkedList (){
        head = nullptr ;
    }

    ~SinglyLinkedList(){
        cout << " Object has been destroyed " << endl;
    }

    void insertBack (int value){
        Node * newNode = new Node(value);
        
        if (!head){
            head = newNode;
            return;
        }

        Node * temp = head ;

        while (temp->next){
            temp = temp->next;
        }
        temp->next = newNode;

    }
    void display(){
            Node* temp = head ;

            while(temp!=nullptr){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL";
}
};



int main (){
    system("cls");

    SinglyLinkedList temp;

    temp.insertBack(30);
    temp.insertBack(20);
    temp.insertBack(10);
    temp.display();
}
