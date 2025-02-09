~Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/description/

~Approach: The goal is to delete a given node in a singly linked list without access to the head pointer. Instead of physically deleting the node, we copy the value of the next node into the current node and then bypass the next node by updating the next pointer. This effectively removes the target node from the list while keeping the list structure intact.

~Algorithm:

1. Edge Case: If node is NULL or node->next is NULL (last node), return immediately.

2. Store the next node (q = node->next).

3. Copy q->val into node->val to overwrite the current node's value.

Update node->next to q->next, effectively skipping q.

~Time Complexity:

O(1) (Constant time) because only a few pointer manipulations and value assignments are performed, independent of the linked list size.
