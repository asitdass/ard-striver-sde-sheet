int findDuplicate(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> unmap;
        for(int i=0; i<nums.size(); i++){
            unmap[nums[i]]++;
        }
        for(auto x : unmap){
            if(x.second>1){
                ans= x.first;
            }
        }
        return ans;

    }
