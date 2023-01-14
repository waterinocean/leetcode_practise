#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    static vector<string> fizzBuzz(int n) {
        vector<string> ans = {};
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
                ans.push_back("FizzBuzz");
            else if (i % 3 == 0)
                ans.push_back("Fizz");
            else if (i % 5 == 0)
                ans.push_back("Buzz");
            else
                ans.push_back(to_string(i));
        }
        return ans;
    }
};


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Usage: " << argv[0] << " number-n" << endl;
        return 1;
    }

    //check input
    int n = atoi(argv[1]);
    if (n <= 0)
    {
        cout << "error input! negative number: " << n << endl;
        return 1;
    }

    //get res vec_string
    vector<string> answer = Solution::fizzBuzz(n);
    int sz = answer.size();
    cout << "[";
    for (int i = 0; i < sz; i++)
    {
        if (i == sz - 1)
            cout << "\"" << answer[i] << "\"";
        else
            cout << "\"" << answer[i] << "\"" << ",";
    }
    cout << "]" << endl;

    return 0;
}
