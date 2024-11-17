// Spiral matrix solution:

#include<bits/stdc++.h>
using namespace std;

vector<int>  printSpiral(vector<vector<int>> mat){

   // defining an ans array to store the result

   vector<int> ans;

   int n = mat.size(); // size of row;
   int m = mat[0].size(); // size of column;

   // pointers for traversal

   int top = 0; 
   int bottom = n-1;
   int left = 0; 
   int right = m-1;
    

   while(top <= bottom && left <= right){

     // from left to right 
      for(int i = left; i <= right; i++){
        ans.push_back(mat[top][i]);
      }
      top += 1;

      // from top to bottom 

      for(int i = top; i <= bottom; i++){
        ans.push_back(mat[right][i]);
      }
      right -= 1;

      // from right to left 
      if(top <= bottom){
      for(int i = right; i >= left; i--){
        ans.push_back(mat[bottom][i]);
      }
      bottom -= 1;
      };

    // from bottom to top 
    if(left <= right){
    for(int i = bottom; i>=top; i--){
      ans.push_back(mat[i][left]);
    }
    left++;
    }
   }
   return ans;
}

int main(){
  vector<vector<int>> mat = {{1,2,3,4},
                             {5,6,7,8},
                          {9,10,11,12},
                        {13,14,15,16}};  
  
  vector<int> ans = printSpiral(mat);

  for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }

  cout << endl;
  return 0;
}