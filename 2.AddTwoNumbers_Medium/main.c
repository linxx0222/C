#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *result = (struct ListNode*)malloc(sizeof(struct ListNode));
    result->val = 0;
    result->next = NULL;
    struct ListNode *p = l1;
    struct ListNode *q = l2;

    struct ListNode *head = result;
    struct ListNode *prev = result;


    while(p != NULL && q != NULL)
    {
        result->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        if( (p->val + q->val + result->val) >= 10 )
        {
            result->next->val = 1;
        }
        else
            result->next->val = 0;
        result->val = (p->val + q->val + result->val) % 10;

        p = p->next;
        q = q->next;

        result->next->next = NULL;
        prev = result;
        result = result->next;

    }
    while(p)
    {
        result->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        if( (p->val + result->val) >= 10 )
        {
            result->next->val = 1;
        }
        else
            result->next->val = 0;

        result->val = (p->val + result->val) % 10;

        p = p->next;
        result->next->next = NULL;
        prev = result;
        result = result->next;
    }
    while(q)
    {
        result->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        if( (q->val + result->val) >= 10 )
        {
            result->next->val = 1;
        }
        else
            result->next->val = 0;

        result->val = (q->val + result->val) % 10;


        q = q->next;
        result->next->next = NULL;
        prev = result;
        result = result->next;
    }

    if(result->val == 0) //last output needs to remove
    {
       result = prev;
       result->next = NULL;
    }

    return head;


}
