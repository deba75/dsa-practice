#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
    public:

    bool hasCycle(ListNode* head){
        if (head== NULL)
            return false;

        ListNode* hare= head;
        ListNode* tortoise= head;

        while( hare!= NULL && hare->next!= NULL){
            tortoise= tortoise->next;
            hare= hare->next->next;

            if(hare== tortoise){
                return true;
            }

        }
        return false; 

    }
};