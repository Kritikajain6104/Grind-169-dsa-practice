
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
    ListNode *reverse(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *prev, *curr, *next;
        prev = NULL;
        curr = head;
        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return true;
        }
        ListNode *slow, *fast;
        slow = fast = head;
        while (fast && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *head2;
        head2 = reverse(slow);
        while (head && head2)
        {
            cout << head->val << " " << head2->val << endl;
            if (head->val != head2->val)
            {
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};