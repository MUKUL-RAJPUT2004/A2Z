int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int low=0, high=n-1, ans=n;
	if(low>high)    return -1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid] > x){
			ans=mid;
			high=mid-1;
		}
		else low=mid+1;
	}
	return ans;
};