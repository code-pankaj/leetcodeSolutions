class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long totalSum = nums[0];
        long long tempSum = nums[0];
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i = 1; i < nums.size(); i++){
            if(tempSum + nums[i] > nums[i]){
                tempSum += nums[i];
            }
            else{
                tempSum = nums[i];
            }
            if(totalSum < tempSum){
                totalSum = tempSum;
            }
        }
        return totalSum;
    }
};