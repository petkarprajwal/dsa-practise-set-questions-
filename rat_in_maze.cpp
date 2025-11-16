#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

void helper(vector<vector<int>>&maze, int n, int m, int i, int j, string path, vector<string>&ans, vector<vector<int>>&visited){
    if(i<0 || j<0 || i>=n || j>=m || maze[i][j]==0 || visited[i][j]==1){
        return;
    }
    if(i==n-1 && j==m-1){
        ans.push_back(path);
        return;
    }
    visited[i][j]=1;
    helper(maze,n,m,i-1,j,path+'U',ans,visited);
    helper(maze,n,m,i+1,j,path+'D',ans,visited);
    helper(maze,n,m,i,j-1,path+'L',ans,visited);
    helper(maze,n,m,i,j+1,path+'R',ans,visited);
    visited[i][j]=0;
}
vector<string> findPath(vector<vector<int>>&maze, int n, int m){
    vector<string>ans;
    vector<vector<int>>visited(n,vector<int>(m,0));
    helper(maze,n,m,0,0,"",ans,visited);
    return ans;
}
int main(){
    vector<vector<int>>maze={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    int n=4;
    int m=4;
    vector<string>ans=findPath(maze,n,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}   
