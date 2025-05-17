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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        int n = 0;
        while (temp != NULL)
        {
            n++;
            temp = temp->next;
        }
        int middle = (n / 2);
        ListNode *res = head;
        for (int i = 0; i < middle; i++)
        {
            res = res->next;
        }
        return res;
    }
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};