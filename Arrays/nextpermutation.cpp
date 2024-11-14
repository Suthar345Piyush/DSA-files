

// lexicographically next permutation 
class Solution {
  public: 
     void nextPermutation(vector<int> &nums){
      int n = nums.size();


      int first_index = -1;
      for(int i = n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
          first_index = i;
          break;
        }
      }



      if(first_index != -1){
        int swap_index = first_index + 1;
        for(int j = n-1; j > first_index; j--){
          if(nums[j] > nums[first_index]){
            swap_index = j;
            break;
          }
        }

        swap(nums[first_index], nums[swap_index]);
      }


      reverse(nums.begin() + first_index + 1, nums.end());
     }
};

