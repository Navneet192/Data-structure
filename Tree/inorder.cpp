#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void inorder(struct Node* node){
    if(node != NULL){
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
    }
}
int main()
{
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    cout << "Root left Right : " << root->left->right->data << endl;
    cout << "Inorder traversal is : ";
    inorder(root);
    cout << endl;
    return 0;
}