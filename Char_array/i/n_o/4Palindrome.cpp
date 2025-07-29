#include<iostream>
using namespace std;
// char lowercase(char ch[]){
//     if(ch>='a' && ch<='z'){
//         return ch;
//     }
//     else char temp = ch-'A'+'a'; 
//     return temp;
// }

int getlength(char name[]){
     int count=0;
    for(int i=0;name[i]!='\0';i++){
        count ++;
    }
    return count;
}
int check(int k,char name[],int a){
    int b=0,c=k-1;
    while(b<c){
        if(name[b++]==name[c--]){
            return a=1;
        }
        else return a=0;
        break;}
    }

int main(){
     char name[20];
    cout<<"enter a character:";
    cin>> name;
    cout<< "your name is " << name<<endl;
      int k = getlength(name);
    cout << "length of string is = " << k << endl;
    int a;
    int d=check(k,name,a);

    if(d==1){
        cout<<name << " is a palendrome ";
    }
    else {cout << name << " not a palindrome ";
}
}