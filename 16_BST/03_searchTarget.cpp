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

bool searchBst(Node*root,int target){
    if(root == NULL){
        return false;
    }
    if(root->val == target){
        return true;
    }
    else{
        if(root->val > target){
            return searchBst(root->left,target);
        }
        else{
            return searchBst(root->right,target);
        }
        // bool leftans = searchBst(root->left,target);

        // bool rightans = searchBst(root->right,target);

        // return leftans||rightans;

    }
    return false;
}


int main(){
    
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);

    root->left->left = new Node(3);
    root->left->right = new Node(7);

    root->right->right = new Node(30);
    int target;
    cout << " enter a value: ";
    cin >> target;

    cout << " ANS : " << searchBst(root,target);


    return 0;
}
