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
    bool hasCycle(ListNode *head)
    {
            map<ListNode *, int> mp;
            while (head)
            {
                mp[head] += 1;
                //cout << head << "\n";
                if (mp[head] > 1)
                    return (true);
                head = head->next;
            }
            return (false);
    }
};

int main()
{
    ListNode *l1 = new_list(3);
    // ListNode *l2 = new_list(2);
    // ListNode *l3 = new_list(0);
    // ListNode *l4 = new_list(-4);
    l1->next = NULL;
    // l2->next = l3;
    // l3->next = l4;
    // l4->next = l2;
    Solution s;
   cout <<  s.hasCycle(l1);
}