#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

class Solution{
public:
    vector<int> running_sum(vector<int> &nums){
        int size_nums = nums.size();
        assert(size_nums > 0);
        for (int i = 1; i<size_nums; i++)
            nums[i] += nums[i - 1];
        return nums;
    }
};

int main()
{
    Solution solution = Solution();

    //test case 1
    vector<int> nums = {1, 1, 1, 1, 1};
    auto running_sums = solution.running_sum(nums);
    for (auto sum : running_sums)
        cout << sum << " ";
    cout << endl;

    //test case 2
    nums = {1, 2, 3, 4};
    running_sums = solution.running_sum(nums);
    for (auto sum : running_sums)
        cout << sum << " ";
    cout << endl;

    //test case 3
    nums = {3, 4, 2, 10, 1};
    running_sums = solution.running_sum(nums);
    for (auto sum : running_sums)
        cout << sum << " ";
    cout << endl;

    return 0;
}