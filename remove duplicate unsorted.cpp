/* Function to remove unsorted duplicates from linked list */
void remove_unsorted_duplicates(Node* head) {
    Node *ptr1, *ptr2, *dup;
    ptr1 = head;
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
//Compare the picked element with the
/*rest of the elements in the inner loop. */
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




void remove_sorted_Duplicates(struct Node* head)
{
    struct Node* current = head;
    struct Node* next_next;

    /* do nothing if the list is empty */
    if (current == NULL)
       return;

    /* Traverse the list till last node */
    while (current->next != NULL)
    {
       /* Compare current node with next node */
       if (current->data == current->next->data)
       {
           /* The sequence of steps is important*/
           next_next = current->next->next;
           free(current->next);
           current->next = next_next;
       }
       else
        /*This is tricky: only advance if no deletion */
       {
          current = current->next;
       }
    }
}
