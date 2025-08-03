  // intersection of two linkedlist leetcode 160//

public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode tempA=headA;
        ListNode tempB=headB;
        int lengthA=0;int lengthB=0;
        while(tempA!=null){      // length of node A
            lengthA++;
            tempA=tempA.next;
        }
       while(tempB!=null){       // length of node B
            lengthB++;
            tempB=tempB.next;
        } 
        tempA=headA;
        tempB=headB;
        if(lengthA>lengthB){           // this is done for get equal node if Ais greater
            int steps=lengthA-lengthB;
            for(int i=1;i<=steps;i++){
                tempA=tempA.next;
            }
        }
        else{
            int steps=lengthB-lengthA;   // this is done for get equal node if B is greater
            for(int i=1;i<=steps;i++){
                tempB=tempB.next;
            }
        }
        while(tempA!=tempB){     // this is done for common position
            tempA=tempA.next;
            tempB=tempB.next;
        }
        return tempA;
    }
}