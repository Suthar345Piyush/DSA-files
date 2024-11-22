//pascal triangle ;
//problem 1 brute force approach :
// using formula nCr;
//second part of the problem 

// #include<bits/stdc++.h>
// using namespace std;

// int nCr(int n , int r){
//   long long res = 1;

//   for(int i = 0; i < r; i++){
//     res = res * (n-i);
//     res = res / (i + 1);
//   }
//   return res;
// }

// void pascalTriangle(int n){
//   for(int c = 1; c <=n ; c++){
//     cout << nCr(n-1 , c- 1) << " ";
//   }
//   cout << "n";
// }

// int main(){
//   int n = 5;
//   pascalTriangle(n);
//   return 0;
// }


// third part of the problem 


// vector<int> generateRow(int row){
//   long long ans = 1;
//   vector<int> ansRow;
//   ansRow.push_back(1);
//   for(int  col = 1; col < row; col++){
//     ans = ans * (row - col);
//     ans = ans / (col);
//     ansRow.push_back(ans);
//   }
//   return ansRow;
// }

// vector<vector<int>> pascalTriangle(int  N){
//   vector<vector<int>> ans;
//   for(int i = 1; i <= N; i++){
//     ans.push_back(generateRow(row));
//   }*

//   return ans;
// }


//correct solution with an temp array 


// #include<bits/stdc++.h>
// using namespace std;


// int nCr(int  n , int r){
//   long  long res = 1;

//   for(int i = 0 ; i < r; i++){
//     res = res * (n-i);
//     res = res / (i+1);
//   }
//   return (int)(res);
// }

// vector<vector<int>> pascalTriangle(int n){
//   vector<vector<int>> ans;

//   for(int row = 1; row <= n; row++){
//     //initialize a temp list 
//     vector<int> tempList;
//     for(int col = 1; col <= row; col++){
//       tempList.push_back(nCr(row-1 , col-1 ));
//     }
//     ans.push_back(tempList);
//   }
//   return ans;
// }
// int main(){
//   int n = 5;
//   vector<vector<int>> ans = pascalTriangle(n);
//   for(auto it : ans){
//     for(auto it2 : it){
//       cout << it2 << " ";
//     }
//     cout << "n";
//   }

//   return 0; 
// }


//easiest solution of the pascal triangle

class solution {

  vector<vector<int>> generate(int numRows){
    vector<vector<int>> result(numRows);

    for(int i=0; i<numRows; i++){

      result[i] = vector<int>(i+1, 1);

      for(int j = 1; j<i; j++){
        result[i][j] = result[i-1][j] + result[i-1][j-1];
      }
    }

    return result;
  }
}

