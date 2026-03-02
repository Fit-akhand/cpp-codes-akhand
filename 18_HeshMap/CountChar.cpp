#include<iostream>
#include<unordered_map>
using namespace std;

// bool checkCirculer(Node*head){
//     unordered_map<Node*,bool> vis;
//     Node*temp = head;
//     while(temp!NULL){
//         if(vis.find(temp)!=vis.end()){
//             vis[temp] = true;
//         }
//         else{
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false; 
// }

int main(){

    string str = "thiruvananthapuram";
    unordered_map<char,int> freq;

    for(int i=0;i<str.size();i++){
        char ch = str[i];
        freq[ch]++;
    }

    for(auto a:freq){
        cout << a.first << " " <<a.second << endl;
    }
    cout << str.size() << endl;

    return 0;
}