
#include <iostream>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next_node) : val(x), next(next_node) {}
};


class Solution {
public:
    static ListNode* middleNode(ListNode* head) {
        ListNode *fast = head, *slow = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
};


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Usage: " << argv[0] << " number-of-nodes" << endl;
        return 1;
    }

    //check input
    int n = atoi(argv[1]);
    if (n <= 0)
    {
        cout << "error input! should input positive number: " << n << endl;
        return 1;
    }

    //make up linked nodes
    ListNode *tail = new ListNode(1);
    ListNode *head = tail;
    for (int i = 2; i <= n; i++)
    {
        ListNode *tmp = new ListNode(i);
        tail->next = tmp;
        tail = tmp;
    }
    cout << "head: " << head->val << " tail: " << tail->val << endl;

    //find the middle node
    ListNode *middle = Solution::middleNode(head);
    if (middle != nullptr)
        cout << "middle: " << middle->val << endl;
    else
        cerr << "error happens." << endl;

    return 0;
}
