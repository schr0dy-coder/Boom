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
    public int pairSum(ListNode head) {
        int n = 0;
        ListNode temp = head;
        while(temp!=null){
            temp = temp.next;
            n++;
        }
        int [] arr = new int[n];
        temp = head;
        int i = 0;
        while(temp!=null){
            arr[i++] = temp.val;
            temp = temp.next;
        }
        int max_sum = 0;
        for(int j = 0; j<n/2; j++){
            max_sum = Math.max(max_sum, arr[j] +arr[n-j-1]);
        }
        return max_sum;
    }
}