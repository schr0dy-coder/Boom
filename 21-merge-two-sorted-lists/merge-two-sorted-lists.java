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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode ans = new ListNode();
        ListNode temp = ans;
        while(list1!=null && list2!=null){
            int value;
            if(list1.val <= list2.val){
                value = list1.val;
                list1 = list1.next;
            }
            else{
                value = list2.val;
                list2 = list2.next;
            }
            temp.next = new ListNode(value);
            temp = temp.next;   
        }
        if(list1 == null){
            temp.next = list2;
        }
        else{
            temp.next = list1;
        }
        return ans.next;
    }
}