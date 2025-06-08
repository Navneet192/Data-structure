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
int maxDepth(Node *root){
    if (root == NULL)
    {
        return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    return 1 + max(lh, rh);
}
int main(){
        Node *root = new Node(10);
        root->left = new Node(20);
        root->right = new Node(30);
        root->left->left = new Node(40);
        root->left->right = new Node(50);
        root->right->left = new Node(60);
        root->right->right = new Node(70);
        cout << "maximum Depth is : "<< maxDepth(root);
    }