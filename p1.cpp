class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int firstIndex=0;firstIndex<nums.size()-1;firstIndex++){
            for(int secondIndex=firstIndex+1;secondIndex<nums.size();secondIndex++){
                if(nums[firstIndex]+nums[secondIndex]==target){
                    return {firstIndex,secondIndex};
                }
            }
        }
        return {};
    }
};
