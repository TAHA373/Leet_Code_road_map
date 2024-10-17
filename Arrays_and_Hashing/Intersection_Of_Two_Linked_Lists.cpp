#include <iostream>
#include <string>
#include <cstdlib>
#include <map>
using namespace std;


  //Definition for singly-linked list.
  struct ListNode {
    int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
ListNode * new_list (int val)
{
    ListNode *lst;

    lst = (ListNode*)malloc(sizeof(ListNode));
    lst->val = val;
    lst->next = NULL;
    return (lst);
    //lst = malloc(sizeof(lst));
}
class Solution {
public:
      ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
            map<ListNode *, int> mp;
            while (headA)
            {
                    mp[headA] += 1;
                    headA = headA->next;

            }
            while (headB)
            {
                    mp[headB] += 1;
                    if (mp[headB] > 1)
                        return (headB);
                    headB = headB->next;

            }
            return (NULL);
    }
};

int main()
{
    ListNode *l1 = new_list(4);
    ListNode *l2 = new_list(1);
   // ListNode *l3 = new_list(0);
    ListNode *ll1 = new_list(5);
    ListNode *ll2 = new_list(6);
    ListNode *ll3 = new_list(1);
    ListNode *lll1 = new_list(8);
    ListNode *lll2 = new_list(4);
    ListNode *lll3 = new_list(5);
    l1->next = l2;
    l2->next = lll1;
    ll1->next = ll2;
    ll2->next = ll3;
    ll3->next = lll1;
    lll1->next = lll2;
    lll2->next = lll3;
    lll3->next  = NULL;
    // l3->next = l4;
    // l4->next = l2;
    Solution s;
   cout <<  s.getIntersectionNode(l1,ll1);
}