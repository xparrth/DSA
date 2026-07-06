class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0] =0;
        ans[1] =0;
        
        for(int i =0 ;i < nums.size(); i++){
            for(int j =0 ;j < i; j++){
            if(nums[i] + nums[j] == target){
                
                ans[0] = i;
                ans[1] = j;
                return ans;
                

            }
            
        }
        }
        
        return ans;
    }
};