#include<iostream>
#include<queue>
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

void levelordertraversal(Node*root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node*front = q.front();
        q.pop();
        if(front == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< root->val <<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}

void minBST(Node*root){
    if(root->left == NULL){
        cout<<"min -> " << root->val;
        return;
    }
    minBST(root->left);
}

void maxBST(Node*root){
    if(root->right == NULL){
        cout<<"max -> " << root->val;
        return;
    }
    maxBST(root->right);
}

void searchBST(Node*root,int value){
    if(root == NULL){
        cout <<"Value not match";
        return;
    }
    if(root->val == value){
        cout<< "value gooted : " << root->val; 
    }
    else if(root->val < value){
        searchBST(root->right,value);
    }
    else{
        searchBST(root->left,value);
    }
}

int main(){
    
    Node *root = NULL;
    root = createBst(root);

    cout << endl;

    // cout << " preorder :";
    // preorder(root);
    cout << " inorder :";
    inorder(root);
    cout << endl;
    
    minBST(root);
    cout << endl;

    maxBST(root);
    cout << endl;

    cout<< "Value uou want to search : " ;
    int k;
    cin >> k;
    searchBST(root,k);

    return 0;
}