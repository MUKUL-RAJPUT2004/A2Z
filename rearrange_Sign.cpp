for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[positiveI] = nums[i];
                positiveI = positiveI + 2;
            }
            else{
                ans[negativeI] = nums[i];
                negativeI = negativeI + 2;
            }
        }
        return ans;