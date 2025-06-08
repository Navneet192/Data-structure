#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
void postorderTraverse(Node* root){
    if(root != NULL){
    postorderTraverse(root->left);
    postorderTraverse(root->right);
    cout << root->data << " ";
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    cout << "postorder Traversal data is :";
    postorderTraverse(root);
    return 0;
}