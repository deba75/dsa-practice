#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){

    }
};

class Solution{
    public: 
     bool detectCycle(ListNode* head){
        if(head == NULL)
        return false;
        ListNode* hare= head;
        ListNode* tortoise= head;

        while(hare!= NULL && hare->next!= NULL){
            tortoise= tortoise->next;
            hare= hare->next->next;

            if(hare== tortoise){
                break;
            }

        }

        if(hare==NULL || hare->next == NULL)
        return false;

        hare= head;
        while(hare!= tortoise){
            hare= hare->next;
            tortoise= tortoise->next;
        }

return hare;
        
     }
    };