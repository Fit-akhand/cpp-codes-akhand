#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="akhand";
    m[2]="babbar";
    m[5]="aditya";
    for(auto i:m){
        cout<< i.first<<endl;   
    }
    m.insert({7,"pappu"});
     for(auto i:m){
        cout<< i.first<< i.second<<endl;   
    }
    cout<<"is 5 present->"<<m.count(5)<<endl;
    
    auto it=m.find(5);
    
}