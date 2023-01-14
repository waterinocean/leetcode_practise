#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        //method 1
        while (num > 0)
        {
            if (num % 2 == 0) num /= 2;
            else num--;
        
            ans++;
        }

        //method 2
        // while (num > 0)
        // {
        //     ans += (num & 1) + 1;
        //     num >>= 1;
        // }
        // ans = max(ans - 1, 0);
        
        return ans;
    }
};


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " some unsigned_ints" << endl;
        return 1;
    }

    //parse args
    vector<int> steps = {};
    for (int i = 1; i < argc; i++)
    {
        int num_in = atoi(argv[i]);
        if (num_in < 0)
        {
            cout << "invalid input, must not be negative! " << num_in << endl;
            return 1;
        }
        steps.push_back(num_in);
    }

    //compute and print steps
    Solution s = Solution();
    for (int i = 0; i < argc - 1; i++)
    {
        int num_in = steps[i];
        int num_step = s.numberOfSteps(num_in);
        cout << num_in << "\thas\t" << num_step << "\tsteps to turn into 0" << endl;
    }
    
    return 0;
}
