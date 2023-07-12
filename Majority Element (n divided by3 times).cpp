vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> umap;
        for(int i=0; i< nums.size(); i++){
            umap[nums[i]]++;
        }
        for(auto x : umap){
            if(x.second > floor(nums.size()/3)){
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }

