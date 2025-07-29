// done 
// while(n!=0){
//         int a=n%10;
//         if(a==1){
//             sum=sum+pow(2,i);
//         }
//          n=n/10;
//         i++;
//     }
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a binary number : ";
    cin>> n ;
    int i=0;
    int sum=0;
    while(n!=0){
        int a=n%10;
        sum=sum+a*pow(2,i);
        i++;
        n=n/10;
    }
    cout<<"decimal number is = " << sum;
}