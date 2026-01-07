/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode tempa = headA;
        ListNode tempb = headB;
        while(tempb!=null){
            ListNode temp = tempa;
            while(temp!=null){
                if(temp==tempb)
                    return temp;
                temp=temp.next;
            }
            tempb = tempb.next;
        }
        return null;
    }
}