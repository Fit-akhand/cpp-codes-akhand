#include<iostream>
using namespace std;
bool isSafe(char maze[][3],int row,int col,int newX,int newY,bool visited[][3]){
    if((newX>=0 && newX <row) && (newY>=0 && newY<col) && visited[newX][newY] == false && maze[newX][newY] == '.'){
        return true;
    }
    else{
        return false;
    }
}

void solve(char maze[][3],int row,int col,int srcX,int srcY,int destX,int destY,string output,bool visited[][3]){
    if(srcX == destX && srcY == destY){
        cout << output << endl;
        return;
    }

    //up
    int newX = srcX-1;
    int newY = srcY;
    if(isSafe(maze,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

    int newY = srcY;
        solve(maze,row,col,newX,newY,destX,destY,output+'U',visited);

        visited[newX][newY] = false;
    }

    //down
    newX = srcX+1;
    newY = srcY;
    if(isSafe(maze,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

        solve(maze,row,col,newX,newY,destX,destY,output+'D',visited);

        visited[newX][newY] = false;
    }
    //left
    newX = srcX;
    newY = srcY-1;
    if(isSafe(maze,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

        solve(maze,row,col,newX,newY,destX,destY,output+'L',visited);

        visited[newX][newY] = false;
    }
    //right
    newX = srcX;
    newY = srcY+1;
    if(isSafe(maze,row,col,newX,newY,visited)){
        visited[newX][newY] = true;

        solve(maze,row,col,newX,newY,destX,destY,output+'R',visited);

        visited[newX][newY] = false;
    }

}

int main(){
    char arr[3][3] = {
        {'.','.','.'},
        {'.','-','-'},
        {'.','.','.'}
    };

    int row = 3;
    int col = 3;

    int srcX = 0;
    int srcY = 0;

    int destX = row-1;
    int destY = col-1;

    string output = "";

    bool visited[3][3] = {
        {true,false,false},
        {false,false,false},
        {false,false,false}
    };

    solve(arr,row,col,srcX,srcY,destX,destY,output,visited);

}
