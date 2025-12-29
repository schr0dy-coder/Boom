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
    public ListNode middleNode(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        int len = 0;
        ListNode temp = head;
        while(temp!=null){
            temp = temp.next;
            len++;
        }
        int half = len/2 + 1;
        temp = head;
        int t = half;
        while(t-->1){
            temp = temp.next;
        }
        return temp;
    }
}