#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Solution {
public:
    static int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        for (auto &vec_wealth: accounts)
        {
            int sum_weath = 0;
            for (auto &wealth: vec_wealth)
                sum_weath += wealth;

            if (sum_weath > max_wealth)
                max_wealth = sum_weath;
        }
        return max_wealth;
    }
};


int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Usage: " << argv[0] << " m-row n-col" << endl;
        return 1;
    }

    //check input
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);
    if (m <= 0 || n <= 0)
    {
        cout << "error input! negative number: " << m << " " << n << endl;
        return 1;
    }

    //generate wealth matrix
    srand(time(nullptr));
    vector<vector<int>> accounts = {};
    cout << "wealth matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        vector<int> tmp = {};
        for (int j = 0; j < n; j++)
        {
            int wealth = rand() % 10;
            tmp.push_back(wealth);
            cout << "\t" << wealth;
        }
        accounts.push_back(tmp);
        cout << endl;
    }

    //compare and get the max value
    int max_wealth = Solution::maximumWealth(accounts);
    cout << "the max wealth is: " << max_wealth << endl;

    return 0;
}
