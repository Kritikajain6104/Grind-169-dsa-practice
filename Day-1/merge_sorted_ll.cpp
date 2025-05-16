
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // answer list pointing to start and end
        ListNode *ans = NULL, *last = NULL;
        // pointer for list
        ListNode *l1 = list1;
        ListNode *l2 = list2;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                ListNode *temp = new ListNode(l1->val);
                if (ans == NULL)
                    ans = temp;
                else
                    last->next = temp;
                last = temp;
                l1 = l1->next;
            }
            else
            {
                ListNode *temp = new ListNode(l2->val);
                if (ans == NULL)
                    ans = temp;
                else
                    last->next = temp;
                last = temp;
                l2 = l2->next;
            }
        }
        while (l1)
        {
            ListNode *temp = new ListNode(l1->val);
            if (ans == NULL)
                ans = temp;
            else
                last->next = temp;
            last = temp;
            l1 = l1->next;
        }
        while (l2)
        {
            ListNode *temp = new ListNode(l2->val);
            if (ans == NULL)
                ans = temp;
            else
                last->next = temp;
            last = temp;
            l2 = l2->next;
        }
        return ans;
    }
};