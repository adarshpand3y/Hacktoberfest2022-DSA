class Solution {
    public ListNode reverseList(ListNode head) {

         ListNode current=head,forward=null,prev=null;
        while(current!=null){
            forward=current.next;
            current.next=prev;
               prev=current;
            current=forward;
        }
        return prev;
        
        
    }
}
