/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode temp = head;
        ListNode ahead = head;
        while(ahead!=null){
            if(temp.val  != ahead.val){
                temp.next = ahead;
                temp = temp.next;
            }
            if(ahead.next==null){
                temp.next = null;
            }
            ahead = ahead.next;
        }
        return head;
    }
}