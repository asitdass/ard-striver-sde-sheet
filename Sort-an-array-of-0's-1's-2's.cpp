void sortColors(vector<int>& nums) {
        int zerocount=0;
        int onecount=0;
        int twocount =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zerocount++;
            }else if(nums[i]==1){
                onecount++;
            }else{
                twocount++;
            }
        }
        for(int i=0;i<zerocount; i++){
            nums[i]=0;
        }
         for(int i=zerocount;i<zerocount+onecount; i++){
            nums[i]=1;
        }
         for(int i=zerocount+onecount;i<zerocount+onecount+twocount; i++){
            nums[i]=2;
        }
        
    }

