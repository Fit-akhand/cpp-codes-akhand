#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    // adjacency List
    unordered_map<int,vector<int>> adjacencylist;
    
    // direction = 1 -> directed edge
    // direction = 0 -- undirected edge

    void addEdge(int u,int v,bool direction){
        if(direction == 1){
            adjacencylist[u].push_back(v);
        }
        else{
            adjacencylist[u].push_back(v);
            adjacencylist[v].push_back(u);
        }
    }

    void printList(){
        for(auto i: adjacencylist){
            cout << i.first << ": ";

            cout <<"{";
            for(auto j: i.second){
                cout << j <<", ";
            }
            cout<<"}";
        }
    }

};

int main(){

    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);

    g.printList();

    return 0;
}