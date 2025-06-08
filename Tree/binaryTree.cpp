#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    cout << "Root is : " << root->data << endl;
    cout << "Root Left is : " << root->left->data << endl;
    cout << "Root right is : " << root->right->data << endl;
    return 0;
}
