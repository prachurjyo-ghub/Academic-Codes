#include<iostream>
using namespace std;
     struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    Node* newNode = new Node(); 
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inOrderTraversal(struct Node* root) {
    if (root == NULL) return;
    inOrderTraversal(root->left);
   cout<<" "<<root->data;
    inOrderTraversal(root->right);
}

void postOrderTraversal(struct Node* root) {
    if (root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<" "<<root->data;
}


int main(){

    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);


    cout<<"Inorder Traversal"<<endl;
    inOrderTraversal(root);
    cout<<"\nPostorder Traversal"<<endl;
    postOrderTraversal(root);


 
}