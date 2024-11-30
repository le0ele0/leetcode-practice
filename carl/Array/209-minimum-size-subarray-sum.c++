#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int add(vector<int> &nums, int low, int high)
    {
        int result = 0;
        for (low; low != high + 1; low++)
            result += nums[low];
        return result;
    }
    int minSubArrayLen(int target, vector<int> &nums)
    {
        // 子数组是连续的。

        int i = 0;
        int j = 0;
        int length = nums.size();
        int shortest = length + 1;
        for (i; i <= length - 1; i++)
            ;
        {
            if (add(nums, j, i) < target)
                i++;
            else if (shortest > (i - j + 1))
            {
                shortest = i - j + 1;
                j++;
            }
        }
        if (shortest == length + 1)
            return 0;
        else
            return shortest;
    }
};

int main()
{
    int array[] = {2, 3, 1, 2, 4, 3};
    int target = 7;
    Solution solution;
    cout << solution().minSubArrayLen(arget, vector<int>(array, array + sizeof(array) / sizeof(int)));
}