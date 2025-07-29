#include<iostream>
#include<array>
using namespace std;
int main(){
  int basic[]={1,2,3,4,5};

  array<int,5> a = {1,2,3,4,5};
 int size =a.size();

   for(int i=0;i<size;i++){
    cout<< a[i]<<endl ;
   }
   cout<<"element at 2= "<< a.at(2)<<endl;
  cout<<"element empty or  not= "<< a.empty()<<endl;

   cout<<"element at front  "<< a.front()<<endl;
   cout<<"element at last  "<< a.back()<<endl;


}