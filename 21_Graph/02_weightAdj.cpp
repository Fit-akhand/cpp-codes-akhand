#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Graph{
    public:
        // adjlist
        unordered_map<int,vector<pair<int,int> > > adjlist;

        void addEdge(int u,int v,int wt,bool direction){
            if(direction == 1){
                //directed edge
                adjlist[u].push_back(make_pair(v,wt));
            }
            else{
                // undirected edge
                adjlist[u].push_back(make_pair(v,wt));
                adjlist[v].push_back(make_pair(u,wt));
            }
        }

        void printedge(){
            for(auto i:adjlist){
                cout<< i.first <<": " ;
                cout <<"{" ;
                for(auto j:i.second){
                    cout << "(" <<j.first << "," << j.second<< ")";
                }
                cout <<"}" << endl;
            }
        }
};

int main(){
    Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,6,1);
    g.addEdge(2,3,7,1);
    g.addEdge(3,4,8,1);

    g.printedge();

    return 0;
}