
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    
};
node* create_node(int key)
{
    node *new_node=new node;
    new_node->data=key;
    new_node->left=new_node->right=NULL;
}
node* insert(node *root,int val)
{   
    if(root==NULL)
    return create_node(val);
    
    if(val<root->data)
    root->left=insert(root->left,val);
    else
    root->right=insert(root->right,val);

    return root;
}
void inorder(node *root)
{
    node *temp=root;
    if(temp!=NULL)
    {
      inorder(temp->left);
      cout<<temp->data<<" ";
      inorder(temp->right);
        
    }
}

int main() 
{
    node *root=NULL;
    root=insert(root,9);
    root=insert(root,12);
    root=insert(root,56);
    root=insert(root,13);
    root=insert(root,7);
    root=insert(root,19);
    root=insert(root,14);
    root=insert(root,26);
    root=insert(root,78);
    inorder(root);
    
    


    return 0;
}
