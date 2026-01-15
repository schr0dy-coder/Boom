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
    public ListNode removeElements(ListNode head, int val) {
        if(head == null){
            return head;
        }
        ListNode dummy = new ListNode();
        ListNode help = dummy;
        ListNode temp = head;
        while(temp!=null){
            if(temp.val != val){
                help.next = temp;
                help = help.next;
            }
            temp = temp.next;
        }
        help.next = null;
        return dummy.next;
        
    }
}