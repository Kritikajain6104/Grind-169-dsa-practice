struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        // bruteforce space-O(n) time-O(n)
        //  set<ListNode*>st;
        //  ListNode*temp;
        //  temp=head;
        //  while(temp && st.find(temp)==st.end()){
        //      st.insert(temp);
        //      temp=temp->next;
        //  }
        //  return temp?true:false;

        // two pointer
        if (head == NULL)
        {
            return false;
        }
        ListNode *slow, *fast;
        slow = fast = head;
        while (slow && fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};