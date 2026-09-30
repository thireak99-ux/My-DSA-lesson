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

class CircularLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    CircularLinkedList()
    {
        head = tail = nullptr;
    }
    ~CircularLinkedList()
    {
        
    }
    void insertFront(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = tail = newNode;
            tail->next = head;
            return;
        }

        newNode->next = head;
        head = newNode;
        tail->next = head;
    }

    void insertEnd(int value)
    {

        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = tail = newNode;
            tail->next = head;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }

    void deleteFront()
    {
        if (head == nullptr)
        {
            cout << "List is empty !! Can't delete it " << endl;
            return;
        }

        if (head == tail)
        {
            delete head;
            head = tail = nullptr;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        tail->next = head;
    }

    void deleteEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty. you can't delete it !!! " << endl;
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = nullptr;
            return;
        }
        Node *temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = head;
        delete tail;
        tail = temp;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty !! Nothing to show" << endl;
            return;
        }
        Node *temp = head;
        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << " (Linked to Head) " << endl;
    }

    void displayV2()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        cout << head->data << " -> ";

        Node *temp = head->next;

        while (temp != head)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << " (Linked to head)" << endl;
    }
};

int main()
{
    system("cls");
    cout << "Starting of the program " << endl;
    cout << endl;
    CircularLinkedList list;

    list.insertFront(10);
    list.insertEnd(60);
    list.deleteEnd();
    list.display();
    list.displayV2();
    cout << endl;

    return 0;
}