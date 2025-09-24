#include<iostream>
#include<vector>

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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* first = head;
        ListNode* sec = head->next;
        ListNode* prev = NULL;

        head = sec; // new head after the first swap

        while (first != NULL && sec != NULL) {
            ListNode* third = sec->next; // next node after the pair

            // swap
            sec->next = first;
            first->next = third;

            // connect previous pair with current swapped pair
            if (prev != NULL) {
                prev->next = sec;
            }

            // move prev to end of swapped pair
            prev = first;

            // move to the next pair
            first = third;
            if (first != NULL) sec = first->next;
        }

        return head;
    }
};
int main(){
    Solution s;
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    
    ListNode* ans=s.swapPairs(head);
    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}
