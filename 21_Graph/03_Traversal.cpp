#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
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
            cout<<"}" << endl;
        }
    }

    void bfsTrav(int src){
        queue<int> q;
        unordered_map<int,bool> visited;

        q.push(src);
        visited[src] = true;
        //main logic
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout << frontNode << ",";
            for(auto nbr: adjacencylist[frontNode]){
                //har ek nebour ko queue me insert karna hai
                // but insert tabhi karna hai, agar visited ho
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }

        }
    }

    void dfshelper(int src,unordered_map<int,bool>&visited){
        // jise hi call ata hai 
        // ans print karo
        // visited true mark karo 
        cout<< src << " ,";
        visited[src] = true;
        // current node se nabour ki trf call karni hai
        for(auto nbr:adjacencylist[src]){
            // agar neibour visited nahi hai to 
            // to uske liye dfs call karna hai
            if(!visited[nbr]){
                dfshelper(nbr,visited);
            }
        }
    }

    void dfstraversal(int src,int n){
        unordered_map<int,bool> visited;
        for(int src=0; src<n ; src++){
            if(!visited[src]){
                //fn call for src node
                dfshelper(src,visited); 
            }
        }
        
    }
};

int main(){ 

    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(0,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,8,1);
    g.addEdge(3,4,1);
    g.addEdge(8,4,1);
    g.addEdge(4,5,1);
    g.addEdge(4,7,1);
    g.addEdge(5,6,1);
    g.addEdge(7,6,1);

    g.printList();
    cout << "DFS : " ;
    g.dfstraversal(0,10);

    return 0;
}