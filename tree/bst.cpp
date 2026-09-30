#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;

        left = right = nullptr;
    }
};

// class BinarySearchTree{
//     private:
//         Node* root;
//     public:
//         BinarySearchTree(){
//             root == nullptr;
//         };
//         void insert(int value){

//         }
// };


Node* insert (Node * root , int value){

    Node* newNode = new Node(value);
    if(root == nullptr){
         return newNode;
    }

    else if(value > root->data){
        root->right = insert(root->right , value);
    }
    else{
        root->left = insert(root->left , value); 
    }

    return root;
}

// preorder ( root , left , right )

void preorder (Node* root){
    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

Node* findMin (Node* root ){
    while(root->left != nullptr){
        root = root->left;
    }
    return root ;
}

Node * findMax (Node* root ){
    while(root->right != nullptr){
        root = root->right;
    }
    return root ;
}

Node * search (Node* root , int value){

    if (root == nullptr) return nullptr;
    
    if(root->data == value) return root;
    if(value > root->data){
        return search(root->right , value);
    }
    else return search(root->left , value);

    return nullptr;
}

int main(){
    system("cls");

    Node * root = nullptr;

    root = insert(root, 10);
    root = insert(root , 5);
    root = insert(root , 4);
    root = insert(root , 7);
    root = insert(root , 20);
    root = insert(root , 11);
    root = insert(root , 22);


    cout << "Display all values(PreOrder) = " << endl;

    preorder(root);

    cout << endl;

    int item = 100;
    Node* result = search(root , item);
    if (result == nullptr){
        cout<<endl;
        cout << item << " Not Found !!! " << endl;
    }else {
        cout << "\nItem has Found value = " << result->data <<endl;
    }


    Node* minNode = findMin(root);

    cout << "\n Minimal value : " << minNode->data << endl;

    cout << "\n Max value : " << findMax(root)->data <<endl;

}