#include<iostream>
using namespace std;
int power(int a,int b){
  int ans=1;  
for(int i=0;i<b;i++){
 ans=ans*a;
}
return ans;
}

int main(){
 cout<<"enter two number"<<endl;
    int a,b;
    cin>> a >> b ;
    int K=power(a,b);
cout<<"power of given numbers"<<K<<endl;

}