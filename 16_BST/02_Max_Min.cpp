#include<iostream>
using namespace std;

class Node{
public:    
    int val;
    Node* left;
    Node* right;

    Node(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};

int max_node(Node* root){
    if(root == NULL){
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }
    return root->val;
}

int min_node(Node* root){
    if(root == NULL){
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root->val;
}

int main(){
    // ---- Predefined BST ----
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);

    root->left->left = new Node(3);
    root->left->right = new Node(7);

    root->right->right = new Node(30);

    // ---- Output ----
    cout << "Minimum: " << min_node(root) << endl;
    cout << "Maximum: " << max_node(root) << endl;

    return 0;
}
