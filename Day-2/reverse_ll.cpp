#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev, *curr, *next;
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        prev = NULL, curr = head, next = head->next;
        while (curr)
        {
            curr->next = prev;
            prev = curr;
            curr = next;
            if (curr)
                next = curr->next;
        }
        return prev;
    }
};