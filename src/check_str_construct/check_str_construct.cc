#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static bool canConstruct(string ransomNote, string magazine) {
        bool ans = true;
        for (auto c : ransomNote)
        {
            size_t index = ransomNote.find(c);
            if (magazine == "" || index == string::npos){
                ans = false;
                break;
            }
            magazine.erase(index, 1);
        }
        
        return ans;
    }
};


int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Usage: " << argv[0] << " ransomNote-str magazine-str" << endl;
        return 1;
    }

    //check input and generate two strings
    string ransom_note = argv[1];
    string magazine = argv[2];

    //compare and output result
    bool can_compose = Solution::canConstruct(ransom_note, magazine);
    cout << ransom_note << " can compose from " << magazine << "?" << (can_compose?" Yes": " No") << endl;

    return 0;
}
