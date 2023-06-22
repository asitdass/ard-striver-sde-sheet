int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int temp=0;
        if(nums.size()==1){
            return nums[0];
        }else{

        for(int i=0;i<nums.size();i++){
            temp += nums[i];
            maxi=max(maxi,temp);
            if(temp<0){
                temp=0;
            }
        }
        return maxi;
        }
        
    }
