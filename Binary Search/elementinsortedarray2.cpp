bool searchInARotatedSortedArrayII(vector<int>&arr, int key){
  int n = arr.size();
  int low = 0;
  int high = n - 1;
  while(low <= high){
    int mid = (low + high)/2;

    if(arr[mid] == key) return true;
    if(arr[low] == arr[mid] && arr[mid] == arr[high]){
      low++;
      high--;
      continue;
    }
    if(arr[low] <= arr[mid]){
      if(arr[low] <= key && key <= arr[mid]){
        high = mid - 1;
      }
      else{
        low = mid + 1;
      }
    }

    else{
      if(arr[mid] <= key && k <= arr[high]){
        low = mid + 1;
      }
      else{
        high = mid - 1;
      }
    }
  }
  return false;
}