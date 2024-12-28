// peak element  in the  array 
//brute approach

int peakElement(vector<int> &nums){
  int  n = nums.size();
  
  for(int i=0; i<n; i++){
    if((i==0 || nums[i-1] < nums[i]) && (i==n-1 || nums[i+1] < nums[i]))
    return i;
  }
  return -1;
}


// binary search approach 

