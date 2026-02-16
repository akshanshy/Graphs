#include<bits/stdc++.h>
using namespace std;
void print_graph(vector<vector<int>>adjmat){
    for(int i=1;i<adjmat.size();i++){
        cout<<"Node "<<i<<" is connected to:";
        for(int j=1;j<adjmat[i].size();j++){
            if (adjmat[i][j]==1){
                cout<<j<<" ";
            }
        }    
        cout<<endl;
    }
}

int main(){
    vector<vector<int>>edgelist={
        {1,2},
        {2,3},
        {3,4},
        {4,1},
        {1,3}
    };

    vector<vector<int>>adjmat(5,vector<int>(5,0));
    for(int i=0;i<edgelist.size();i++){
        int a=edgelist[i][0];
        int b=edgelist[i][1];
        adjmat[a][b]=1;
        adjmat[b][a]=1; 
    }
    print_graph(adjmat);
}