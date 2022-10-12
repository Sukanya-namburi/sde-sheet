//Problem-1)set matrix zeroes(Leetcode-118)

//Time Complexity: O(N*M + N*M)
//Space Complexity: O(N)

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
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Problem-2)pascal's triangle(Leetcode-73)

//model-1 (Given number of rows as an input we have to find the pascal's triangle)
//Time complexity:O(n^2)
//Space complexity:O(n^2)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<vector<int>>out;
    for(int i=0;i<num;i++){
        vector<int>temp(i+1,1); //Intially take all values as 1
        for(int j=1;j<i;j++){
            temp[j]=out[i-1][j-1]+out[i-1][j]; //Changing values
        }
        out.push_back(temp);
    }
    for(int i=0;i<out.size();i++){
        for(int j=0;j<out[i].size();j++){
            cout<<out[i][j]<<" ";
        }
        cout<<endl;
    }
}

//mode1-2(if they give column and row number as an input then we have to print element in that particular place)
//Logic
// use formula (r-1 C c-1)--->ncr formula

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Problem-3)Next Permutation(Leetcode-31)
//Logic(using inbuilt function)
next_permutation(nums.begin(),nums.end());
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Problem-4)Maximum Subarray-Kadane's algorithm(Leetcode-53)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(sum,maxi);//if sum is negative the change it into 0 bcz
        if(sum<0){          //it is not good to carry negative number to get maximum sum subarray
            sum=0;
        }
    }
    cout<<maxi;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Problem-5)Sort Colors-Sort an array of 0’s 1’s 2’s(Leetcode-75)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
            swap(arr[low++],arr[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(arr[mid],arr[high--]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Problem-6)Best Time to Buy and Sell Stock(Leetcode-121)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int profit=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(arr[i],mini);
        profit=max(profit,arr[i]-mini);
    }
    cout<<profit;
}


