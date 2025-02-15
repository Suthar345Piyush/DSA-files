//find  the number of  distinct color among  the balls

//good  and  important  question using  two unordered map to solve  the  question 

//lc-3160
class Solution{
  public : 
     vector<int> queryResults(vector<vector<int>>& queries , int limit){
       int n = queries.size();
       vector<int> result(n);
       
       // color ka  count
       unordered_map<int  , int>  colormp; 
       
    // ball[i] = x , ith ball has  x color and  initially balls are  not  colored
      //  vector<int> ballArr(limit + 1 , -1);

      //ball ka  color 
      unordered_map<int , int> ballmp;

       for(int i=0; i<n; i++){
        int ball = queries[i][0];
        int color = queries[i][1];
    
    // if  their any already colored ball is  present 
    //here we have  to remove  the  previous color ball from the  map
    // if this  ball is  already present  in my map
       if(ballmp.count(ball)){
          int prevColor =  ballmp[ball];
          colormp[prevColor]--;


          if(colormp[prevColor] == 0){
            colormp.erase(prevColor);
          }
       }
          ballmp[ball] = color;
          colormp[color]++;


          result[i] = colormp.size();
       }
       return result;
     }
}


// time complexity = O(n)
//space complexity = O(n+n) = O(n)