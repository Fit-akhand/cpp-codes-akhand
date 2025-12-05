#include<iostream>
using namespace std;

class Node{
public:    
    int val;
    Node*left;
    Node*right;

    Node(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};

Node* BuildBst(Node*root,int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if (root->val < val) {
        root->right = BuildBst(root->right, val);
    } else {
        root->left = BuildBst(root->left, val);
    }

    return root;
}

Node* createBst(Node*root){
    cout << "Enter a value for the node" << endl;
    int n;
    cin >> n;
    while(n!=-1){
        root = BuildBst(root,n);
        cout << "Enter a value for the node" << endl;
        cin >> n;
    } 
    return root;
}


void preorder(Node*root){
    if(root == NULL){
        return ;
    }

    cout << root ->val << " ";
    preorder(root->left);
    preorder(root->right); 
}

void inorder(Node*root){
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout << root ->val << " ";
    inorder(root->right); 
}

int main(){
    
    Node *root = NULL;
    root = createBst(root);

    cout << endl;

    cout << " preorder :";
    preorder(root);
    cout << " inorder :";
    inorder(root);

    return 0;
}