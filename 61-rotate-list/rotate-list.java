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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null)
            return head;
        ListNode temp = head;
        int n = 0;
        while(temp!=null){
            temp = temp.next;
            n++;
        }
        k = k%n;
        if(k==0)
            return head;
        temp = head;
        ListNode np = head;
        while(np.next!=null){
            np = np.next;
        }
        for(int i = 0; i<n-k-1; i++){
            head = head.next;
        }
        ListNode res = head.next;
        head.next = null;
        np.next = temp;
        return res;
    }
}