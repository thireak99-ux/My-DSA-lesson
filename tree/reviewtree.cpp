#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * left;
    Node* right;

    Node(int value){
        data = value;
        left = right = nullptr;
    }
};

void  preorder (Node * root){
    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void inorder (Node * root){
    if( root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder (Node * root){
    if( root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}

int main() {

    system("cls");

    Node* root = new Node(10);

    root->left = new Node(20);
    root->left->left = new Node (40);
    root->left->right = new Node(50);

    root->right = new Node(45);
    root->right->right = new Node(25);
    root->right->right->left = new Node(12); 
    root->right->right->right = new Node(19);

    cout << " this is the preorder traversal : " << endl;

    cout << endl;

    preorder(root);

    cout << endl;
    cout << endl;

    cout << " This is the inorder traversal : " << endl;

    cout << endl;

    inorder(root);

    cout << endl;
    cout<<endl;

    cout << " This is the postorder traversal : "<< endl;

    cout << endl;

    postorder(root);

    cout << endl;
    cout << endl;

}