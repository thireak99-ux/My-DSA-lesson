#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node (int value){
        data = value;
        left = right = nullptr;
    }
};

void inorder(Node* root){
    if(root == nullptr) return;

    inorder(root->left);
    cout << root->data << " , ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " , ";
}

void preorder(Node* root){
    if(root == nullptr) return;

    cout << root->data << " , ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    system("cls");

    Node* root = new Node(10);

    // left side 

    root->left = new Node(20);

    // Child of left side

    root->left->left = new Node(40);
    root->left->right = new Node(50);

    // right side 
    
    root->right = new Node(30);

    // Child of right side

    root->right->left = new Node (60);
    root->right->right = new Node(70);

    cout << "Print inorder travesal : ";
    inorder(root);

    cout<<endl;
    cout << endl;

    cout << "Print postorder travesal : ";
    postorder(root);

    cout << endl;
    cout << endl;

    cout << "Print preorder travesal : ";
    preorder (root);

    cout << endl;

    return 0;
}