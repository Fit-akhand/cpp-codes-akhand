#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v;
  cout<< "size = "<< v.capacity()<<endl;
  v.push_back(1);
  cout<< "size = "<< v.capacity()<<endl;
  v.push_back(2);
  cout<< "size = "<< v.capacity()<<endl;
  v.push_back(3);
  cout<< "size = "<< v.capacity()<<endl;
  for(int i:v){
    cout<<"before pop back"<<i<<endl;
  }
  v.pop_back();
  for(int i:v){
    cout<<"after pop back"<< i<<endl;
  }
}