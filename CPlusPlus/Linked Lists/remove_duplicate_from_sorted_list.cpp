//The logic here is to maintain a previous and current node.
//If previous and current are equal, just make the next of
//previous to point to next of curent. This way we skipped the
//duplicate element. 
ListNode* Solution::deleteDuplicates(ListNode* A) {
    //Initialising previous node
    ListNode* prev = A;
    ListNode* head = A;
    //Updating Current node
    A = A->next;
    while(A!=NULL) {
        //Skipping current element if previous is same as current
        if(A->val == prev->val) {
            prev->next = A->next;
            A= A->next;
        }
        //If the elements are distinct just iterate forward
        else {
            prev = prev->next;
            A = A->next;
        }
    }
    return head;
}

