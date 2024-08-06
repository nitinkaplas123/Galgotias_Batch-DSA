#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        left=NULL;
        right=NULL;
        data=x;
    }
};

int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    printall(root);
    return 0;
}