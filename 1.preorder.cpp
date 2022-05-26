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

void preOrderTrav(node * curr, vector<int> &preOrder){
    if(curr == NULL) return;
    preOrder.push_back(curr->data);
    preOrderTrav(curr->left, preOrder);
    preOrderTrav(curr->right, preOrder);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    struct node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(5);
    std::vector<int>preOrder;
    preOrderTrav (root, preOrder);
    cout<<"The preOrder Traversal is : ";
    for(int i=0; i<preOrder.size(); i++)
    {
        cout<<preOrder[i]<<" ";
    }
    
    
    return 0;
}