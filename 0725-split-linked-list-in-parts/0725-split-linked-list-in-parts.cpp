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
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* node=head;
        vector<ListNode*> result(k,nullptr);
        int count =0;
        while(node!=NULL)
        {
            node=node->next;
            count++;
        }
        int ele=count/k;
        int emp=count%k;
        node=head;
        ListNode * prev=NULL;
           for (int i = 0; node && i < k; i++, emp--) {
            // Store the current node as the start of the current part.
            result[i] = node;
            // Traverse n + 1 nodes if there are remaining extra nodes (r > 0).
            // Otherwise, traverse only n nodes.}
            for (int j = 0; j < ele + (emp > 0); j++) {
                prev = node;
                node = node->next;
            }
            // Disconnect the current part from the rest of the list by setting prev->next to nullptr.
            prev->next = nullptr;
        }

        // Return the array of k parts.
        return result;
    }
    
};