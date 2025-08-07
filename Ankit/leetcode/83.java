// remove duplicate node//

class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode temp=head;
        while(temp!=null && temp.next!=null){
            if(temp.next.val==temp.val){
                temp.next=temp.next.next;  // skip the duplicate
            }
            if(temp.next==null) return head;
            if(temp.next.val!=temp.val){
                temp=temp.next;               // Move to next node if no duplicate
            }
        }
        return head;
    }
}