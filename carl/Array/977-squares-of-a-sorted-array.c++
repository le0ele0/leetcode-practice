class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sorted(nums.size());
        int i = 0;
        int j = nums.size()-1;
        int m = sorted.size()-1;
        while(i<=j){
            if (nums[i]*nums[i]>=nums[j]*nums[j]){
            sorted[m]=nums[i]*nums[i];
            i++;
            }
            else if(nums[j]*nums[j]>=nums[i]*nums[i]){
            sorted[m]=nums[j]*nums[j];
            j--;
            }
            m--;
        }
    return sorted;
    }
};
//双指针，一头一尾。