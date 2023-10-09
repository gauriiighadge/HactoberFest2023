#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
//  Iterative Code
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* next;

        while(temp){
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }

//  Recursive Code
    ListNode* reverseList(ListNode* head) {
        if(!head || !head -> next) return head;

        ListNode* ans = reverseList(head->next);
        head -> next -> next = head;
        head -> next = NULL;

        return ans;
    }
};
int main()
{
    // Code in the backend of compiler

    return 0;
}
