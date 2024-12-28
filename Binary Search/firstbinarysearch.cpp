// solving binary search problem with iterative approach :
int search(vector<int> &arr , int target){
  int n = arr.size();
  int low  = 0;
  int high = n - 1;

  while(low <= high){
    int mid = (low + high) / 2;

    if(arr[mid] == target) return mid;
    else if(high > arr[mid]) return low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}

// solving with recursice approach
//dry run of the recursive code 

f(arr , low , high , target){
  if(low > high)  return -1;
  int mid = (low + high) / 2;

  if(arr[mid] == target) return mid;
  else if(arr[mid] > target)
  return f(arr , target , mid + 1 , high);

  else 
  return f(arr , target , mid - 1 , low);
}

// code implementation 

int bs(vector<int>&nums , int low , int low high , int target){
  if(low > high) return -1;

  int mid = low + (high - low) / 2; // it ensures that  the mid value cant overflow
  if(nums[mid] == target) return mid;
  else if(target > nums[mid]) return bs(nums , mid + 1 , high , target);
  
  return bs(nums , mid - 1 , low , target);
}

int search(vector<int>& nums , int target){
  return bs(nums , 0 , nums.size() - 1, target);
}
