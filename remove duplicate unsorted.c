/* Function to remove duplicates from linked list */
void remove_duplicates(Node* head) {
    Node *ptr1, *ptr2, *dup;
    ptr1 = head;
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
        /* Compare the picked element with the rest of the elements in the inner
         * loop. */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->val == ptr2->next->val) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            } else /* if not duplicate move to next node */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
