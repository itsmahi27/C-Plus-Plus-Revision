#include <bits/stdc++.h>
using namespace std;
// User function template for C++

class Solution{
    private:
    bool isPossible(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited){
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> &m, int n, vector<string>& ans, string path,vector<vector<int>> visited, int x, int y){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return ;
        }
        visited[x][y]=1;
        //4 choices- D/U/L/R
        //down
        int newx=x+1;
        int newy=y;
        if(isPossible(m,n,newx,newy,visited)){
            path.push_back('D');
            solve(m,n,ans,path,visited,newx,newy);
            path.pop_back();
        }
        //up
        newx=x-1;
        newy=y;
        if(isPossible(m,n,newx,newy,visited)){
            path.push_back('U');
            solve(m,n,ans,path,visited,newx,newy);
            path.pop_back();
        }
        //Left
        newx=x;
        newy=y-1;
        if(isPossible(m,n,newx,newy,visited)){
            path.push_back('L');
            solve(m,n,ans,path,visited,newx,newy);
            path.pop_back();
        }
        //Right
        newx=x;
        newy=y+1;
        if(isPossible(m,n,newx,newy,visited)){
            path.push_back('R');
            solve(m,n,ans,path,visited,newx,newy);
            path.pop_back();
        }
        visited[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string path="";
        int srcx=0;
        int srcy=0;
        if(m[0][0]==0){
            return ans;
        }
        vector<vector<int>> visited=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        solve(m,n,ans,path,visited,srcx,srcy);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    
int main()
{
   
    return 0;
}