// https://leetcode-cn.com/problems/permutations/

#include "../../common/common.h"

class Solution
{
    vector<int> nums;
    vector<vector<int>> res;

    void dfs(int index)
    {
        if (index == nums.size())
        {
            res.push_back(nums);
            return;
        }

        dfs(index + 1);

        for (int i = index + 1; i < nums.size(); ++i)
        {
            swap(nums[index], nums[i]);
            dfs(index + 1);
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        this->nums = nums;
        dfs(0);
        return res;
    }
};

int main()
{
	return 0;
}