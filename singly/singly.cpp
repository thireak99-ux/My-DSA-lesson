#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    SinglyLinkedList()
    {
        // head = tail = nullptr ,  this part here is when we first add list it's don't have value
        head = nullptr;
        tail = nullptr;
    }

    ~SinglyLinkedList()
    {
        cout << endl;
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            
            cout << "Free memory location !!! " << endl;
        }
    }
    void deleteFront()
    {
        if (head == nullptr)
        {
            cout << "List is empty !! Can't delete it " << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr)
            tail = nullptr;
    }

    void deleteEnd(){

        if(head == nullptr){
            cout<< "List is Empty !!! cannot delete it " << endl;
            return;
        }
        if(head == tail){
            delete head;
            tail = head = nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
            temp->next = nullptr;
            tail = temp;
    
    }


    void insertEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void insertFront(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {

            tail = newNode;
            head = newNode;

            return;
        }
        newNode->next = head;
        head = newNode;
    }
    bool search (int value){
        Node* temp = head;
        while(temp != nullptr){

            if(temp->data == value) return true;
            temp = temp->next;

        }
        return false;
    }
    void display()
    {

        // auto here is like Node* temp = head;
        auto temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    system("cls");

    SinglyLinkedList list;

    list.insertFront(40);
    list.insertFront(30);
    list.insertFront(20);
    list.insertFront(10);
   
    list.display();

    cout << endl; 
    cout << (list.search(40) ? "Item has found" : "Not found") << endl;

    return 0;
}