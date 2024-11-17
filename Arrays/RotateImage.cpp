// rotate matrix coding ninjas solution 
#include <bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> &mat, int n, int m)

{

    int firstrow = 0;

    int firstcolumn = 0;

    int lastrow = n-1;

    int lastcolumn = m-1;

    int current_element;

 

    while(firstrow<lastrow && firstcolumn<lastcolumn){

      int previous_element = mat[firstrow+1][firstcolumn];

      for(int i = firstcolumn;i<=lastcolumn;i++){

        current_element = mat[firstrow][i];

        mat[firstrow][i] = previous_element;

        previous_element = current_element;

      }

      firstrow++;

      for(int j = firstrow;j<=lastrow;j++){

        current_element = mat[j][lastcolumn];

        mat[j][lastcolumn] = previous_element;

        previous_element = current_element;

      }

      lastcolumn--;

      for(int k = lastcolumn;k>=firstcolumn;k--){

        current_element = mat[lastrow][k];

        mat[lastrow][k] = previous_element;

        previous_element = current_element;

      }

      lastrow--;

      for(int l = lastrow;l>=firstrow;l--){

        current_element = mat[l][firstcolumn];

        mat[l][firstcolumn] = previous_element;

        previous_element = current_element;

      }

      firstcolumn++;

    }

 

}

 
