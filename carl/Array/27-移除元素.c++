class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0; int k = -1; int n = nums.size()-1;
        if (n == -1)return 0;
        for (i;i<=n;i++){
            if (nums[i]!= val){
            k++;
            nums[k]=nums[i];
            }
        }
            nums.erase(nums.begin()+k+1,nums.end());
        return k+1;
    }
};