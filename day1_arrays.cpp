//set matrix zeroes(leetcode)

#include<bits/stdc++.h>
using namespace std; 
void setZeroes(vector<vector<int>>&matrix){
    int rows=matrix.size();
    int cols=matrix[0].size();
    vector<int>dummy1(rows,-1);
    vector<int>dummy2(cols,-1);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                dummy1[i]=0;
                dummy2[j]=0;
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(dummy1[i]==0 or dummy2[j]==0){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){
    vector<vector<int>>matrix;
    matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
