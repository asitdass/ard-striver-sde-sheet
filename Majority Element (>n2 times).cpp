//Moore’s Voting Algorithm
int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = nums[0];
        for(int i=0;i<nums.size();i++){
            int currEle = nums[i];
            if(currEle == element){
                count++;
            }
            else{
                if(count==0){
                    element = currEle;
                    if(currEle==element){
                        count++;
                    }
                }else{
                    count--;
                }
            } 
        }
        return element;
        
    }

