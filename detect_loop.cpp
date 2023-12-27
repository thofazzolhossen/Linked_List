void detectLoop_Linked_List(ListNode head)
  {
    ListNode tortoise = head;
    ListNode hare = head;
    while(hare.next!=null&&hare!=null)
    {
        tortoise=tortoise.next;
        hare=hare.next.next;
        if(hare==tortoise){
            flag=1;
            return true;
        }

    }
    return false;
  }

  //remove loop
  void remove_loop_Linked_List(){
       if(flag == 1){
       ptr1 = head;


           while(ptr1->next != ptr2->next){
               ptr1 = ptr1->next;
               ptr2 = ptr2->next;
           }


       ptr2->next = NULL;
   }
  }




 //Length of loop
  int lengthOfLoop(ListNode hare, ListNode tortoise)
  {
    int lengthOfLoop=1;
    hare=hare.next
    while(hare!=tortoise)
    {
        hare=hare.next;
        lengthOfLoop++;
    }
    return lengthOfLoop;
  }
