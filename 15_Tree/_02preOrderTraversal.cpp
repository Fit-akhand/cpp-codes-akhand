#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }

};

// return root node of tree
Node*buildTree(){
    int val;
    cin >> val;
    if(val == -1){
        return NULL;
    }
    else{
        Node *root = new Node(val);
        
        root->left = buildTree() ;
        root-> right = buildTree();
    }
}

// NLR pre order traversal
void preOrderTraversal(Node*root){
    //base case
    if(root == NULL) {
        return;
    }
    // ek case mai solve karunga baki recursion sambhal lega
    // N
    cout << root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}

int main(){

    // 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
    Node* root  = buildTree();
    cout << endl <<" print Preorder tracersal : " << endl;
    preOrderTraversal(root);

    return 0;
}