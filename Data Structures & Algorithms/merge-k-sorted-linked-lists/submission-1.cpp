/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
private:
        struct comparenodes{
        bool operator()(ListNode* a,ListNode* b){
            return (a->val)>(b->val);
            }
        };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>,comparenodes> mh;
        ListNode* head = NULL,*temp;
        int n = lists.size();
        for(int i = 0;i<n;i++){
            if(lists[i])    mh.push(lists[i]);
        }
        while(!mh.empty()){
            ListNode* curr = mh.top();
            mh.pop();
            if(curr->next)  mh.push(curr->next);
            //Adding curr to the list
            if(!head) {
                head = curr;
                temp = head;
            }
            else {
                temp->next = curr;
                temp = temp->next;
            }
        }
        return head;
    }
};
