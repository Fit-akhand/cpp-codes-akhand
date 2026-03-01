#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> m;
    
    pair<string,int> p = make_pair("Scorpio",9);
    m.insert(p);

    pair<string,int>p2("Alto",2);
    m.insert(p2);

    m["Fortuner"] = 10;

    cout<< m.at("Scorpio") << endl;
    cout<< m.at("Alto")<< endl;

    cout << m["Fortuner"] << endl;

    cout<< m.size() << endl;
    // cout << m["Inova"] << endl;
    // cout<< m.size() << endl;

    // cout<< m.find("Fortuner") != m.end() << endl;

    for(auto i:m){
        cout << i.first << "->" << i.second << endl; 
    }


    return 0;
}