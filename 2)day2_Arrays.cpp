//Problem-1)Rotate matrix(image)(Leetcode-48)

/*Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
  Output: [[7,4,1],[8,5,2],[9,6,3]] */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){                               
            cin>>matrix[i][j];                              
        }                                               
    }
    //Logic to transpose the matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);                
        }                                                      
    } 
    //Reversing the every vector in 2d vector
    for(int i=0;i<m;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    } 
}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem-2)Merge intervals(Leetcode-56)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    //user input of 2D vector
    vector<vector<int>>mat(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){        //INPUT: [[1,3],[2,6],[8,10],[15,18]] 
            cin>>mat[i][j];
        }
    }
    //Logic for merge intervals
    vector<vector<int>>ans;
    sort(mat.begin(),mat.end());
    vector<int>temp=mat[0];
    for(auto it:mat){
        //checking if two intervals are merging are not
        if(it[0]<=temp[1]){
            temp[1]=max(temp[1],it[1]);
        }
        //if intervals are not merging the add those into vector and update temp
        else{
            ans.push_back(temp);
            temp=it;
        }
    }
    ans.push_back(temp);//Adding last interval present in temp into ans
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){         //output:[[1,6],[8,10],[15,18]]
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

