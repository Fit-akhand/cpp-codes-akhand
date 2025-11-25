#include<iostream>
#include<queue>
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

void levelOrderTraversal(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *front = q.front();
        q.pop();
        if(front == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << front->data << " " ;

        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
        }

    }
}

int main(){

    // 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
    Node* root  = buildTree();
    
    cout <<  endl <<" print levelOrderTraversal tracersal : " << endl;
    levelOrderTraversal(root);

    return 0;
}