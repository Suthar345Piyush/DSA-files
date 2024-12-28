// floor is same as lower bound with slight change;

getFloor(vector<int>&nums , int n , int x){
  int ans = -1;
  int low = 0;
  int high = n - 1;
  int n = nums.size();
  while(low <= high){
    int mid = (low + high)/2;
    if(nums[mid] <= mid){
      ans = nums[mid];
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return ans;
}

//ceil is same as lower bound
getCeil(vector<int>&nums , int  n , int x){
  int low = 0;
  int high = n - 1;
  int ans = -1;
  while(low <= high){
    int mid = (low + high)/2;
    if(nums[mid] >= x){
      ans = nums[mid];
      high = mid - 1;
    }
    else{
      low = mid + 1;
    }
  }
  return ans;
}


pair<int , int> getFloorAndCeil(vector<int>&nums , int  n, int x){
  int f = getFloor(nums , n , x);
  int c = getCeil(nums , n , x);

  return make_pair(f , c);
}