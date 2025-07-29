#include<iostream>
   #include<algorithm>
   #include<vector>
   using namespace std;
   int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    for(int i:v){
        cout<< i;
    }cout<<endl;
    cout<<"finding element->"<<binary_search(v.begin(),v.end(),5)<<endl;
    int a=6,b=8;
    cout<<"max of a,b->"<<max(a,b)<<endl;
    cout<<"min of a,b->"<<min(a,b)<<endl;
   }
