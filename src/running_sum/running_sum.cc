#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    vector<int> running_sum(vector<int> &nums){
        vector<int> res = {};
        int size_nums = nums.size();
        for (int i; i<size_nums; i++)
        {
            if (i == 0)
                res.push_back(nums[i]);
            else
                res.push_back(nums[i] + res[i-1]);
        }
        return res;
    }
};

int main(int argc, char *argv[])
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