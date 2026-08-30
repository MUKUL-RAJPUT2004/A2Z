int cnt=0;

class Solution {
  public:
  void cnt_inv(vector<int> &arr, int low, int mid, int high){
    
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right])    temp.push_back(arr[left++]);
        else{
            temp.push_back(arr[right]);
            right++;
            cnt=cnt+(mid-left+1);
        }
    }
    
    while(left<=mid)    temp.push_back(arr[left++]);
    while(right<=high)    temp.push_back(arr[right++]);
    
    for(int i=low; i<=high; i++)    arr[i]=temp[i-low];
    
    
}

  
    void find_inversion(vector<int> &arr, int low, int high) {
    
    int mid=(low+high)/2;
    if(low>=high)    return;


    find_inversion(arr, low, mid);
    find_inversion(arr, mid+1, high);
    cnt_inv(arr, low, mid, high);
    

    }
    
    int inversionCount(vector<int> &arr){
        cnt=0;
        find_inversion(arr,0, arr.size()-1);
        return cnt;
        
    }
};