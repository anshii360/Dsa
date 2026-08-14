/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* node=head;
        unordered_map<ListNode* ,bool>visited;
    while(node!=NULL){
    if(visited.find(node)!=visited.end()){
        return node;
        
    }
    visited[node]=true;
    node=node->next;
}
return NULL;
    }
};