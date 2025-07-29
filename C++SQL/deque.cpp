   #include<iostream>
   #include<deque>
   using namespace std;
   int main(){
    deque<int> d = {0,0};
    d.push_back(2);
    d.push_front(1);
     for(int i:d){
        cout<< i;
    }cout<<endl;
    d.pop_back();
  for(int i:d){
        cout<< i;
    }cout<<endl;
   }