#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    struct ListNode *temp, *head;

    if(!l1)
        return l2;
    if(!l2)
        return l1;


    if(l1->val < l2->val)
    {
        temp = l1;
        l1 = l1->next;
    }
    else
    {
        temp = l2;
        l2 = l2->next;
    }

    head = temp;
    while(l1 && l2)
    {
        if(l1->val < l2->val)
        {
            temp->next = l1;
            l1 = l1->next;
        }
        else
        {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }
    while(l1)
    {
        temp->next = l1;
        l1 = l1->next;
        temp = temp->next;
    }
    while(l2)
    {
        temp->next = l2;
        l2 = l2->next;
        temp = temp->next;
    }

    temp->next = NULL;

    return head;
}
