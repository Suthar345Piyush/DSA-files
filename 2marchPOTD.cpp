//Merge two 2d array by summing values  

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
         int n = nums1.size();
         int m = nums2.size();

         unordered_map<int , int> mp;
         vector<vector<int>> result;


         for(int i=0; i<n; i++){
           int id = nums1[i][0];
           int val = nums2[i][1];

           mp[id] += val;
         }


         for(int i=0; i<m; i++){
           int id = nums2[i][0];
           int val = nums2[i][1];


           mp[id] += val;
         }

         for(auto &it : mp){
            int key = it.first;
            int val = it.second;


            result.push_back({key , val});
         }

         sort(begin(result) , end(result));

         return result;
    }
};

//if i take unordered map then i have to sort it , otherwise we can use the ordered map(no need to sort the result)




//2 Pointer appraoch to solve the problem 

