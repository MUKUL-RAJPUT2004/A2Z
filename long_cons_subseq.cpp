int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    
    int largest = 1, count = 0;
    if(n == 0 )    return 0;
    unordered_set<int> st;
    for(int i=0;i<n;i++)    st.insert(arr[i]);

    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x=x+1;
                count ++;
            }
            largest = max(largest, count);
        }
    }
    return largest;
}