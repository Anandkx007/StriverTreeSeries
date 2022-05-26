#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node * left, * right;
}; 

struct node* newNode(int data){
    struct node* node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return node;
    
}

void inOrderTrav(node * curr, vector<int> &inOrder){
    if(curr == NULL) return;
    inOrderTrav(curr->left, inOrder);
    inOrder.push_back(curr->data);
    inOrderTrav(curr->right, inOrder);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    struct node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    std::vector<int>inOrder;
    inOrderTrav (root, inOrder);
    cout<<"The inOrder Traversal is : ";
    for(int i=0; i<inOrder.size(); i++)
    {
        cout<<inOrder[i]<<" ";
    }
    
    
    return 0;
}