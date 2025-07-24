#include<bits/stdc++.h>
using namespace std;

class tree{
public:
    int data;
    tree* left;
    tree* right;

    tree(int val): data(val), left(NULL), right(NULL){}

};
tree* buildTree(tree* root){
    cout<<"Enter data: ";
    int val;
    cin>>val;
    root = new tree(val);

    if(val == -1)
        return NULL;
    cout<<"Enter data for left node: "<<val<<endl;
    root->left  = buildTree(root->left);

    cout<<"Enter data for right node: "<<val<<endl;
    root->right  = buildTree(root->right);

    return root;
}
void levelOrder(tree* root) {
    if(root==NULL)
        return;
    queue<tree*> q;
    q.push(root);
    while(!q.empty()){
        tree* curr = q.front();
        q.pop();

        cout<<curr->data<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}


int main(){
    tree* root = NULL;
    root = buildTree(root);

    cout<<"Level Order Traversal: ";
    levelOrder(root);

    return 0;
}