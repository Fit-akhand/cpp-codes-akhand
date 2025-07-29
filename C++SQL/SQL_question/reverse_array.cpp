#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    // if after a particular size reverse the array 
    // so change the value of s;
 int s=0,e=v.size()-1;
while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
}
return v;
}
void print(vector <int>v){
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
}
int main(){
    vector<int> v;
v.push_back(11);
v.push_back(1);
v.push_back(45);
v.push_back(23);
v.push_back(56);
v.push_back(5);
v.push_back(6);

vector<int> ans=reverse(v);
cout<<"reverse of array"<<endl;
print(ans);

}