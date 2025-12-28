// Node is defined as:
// class Node{
//     int val;
//     Node next;
//     Node(int x){
//     	val = x; next = null;
//     }
// }
class Solution{
    static int solve(Node root){
        int count = 0;
        int prev = 0;
        int next = 0;
        Node temp = root;
        while(temp!=null){
            if(prev == 0){
                prev = temp.val;
            }else{
               if(temp.next!=null)
                    next = temp.next.val;
                else{
                    temp = temp.next;
                    continue; 
                }
                if(temp.val<prev && temp.val<next)
                    count++;
                else if(temp.val>prev && temp.val>next)
                    count++;
                prev = temp.val;
            }
            temp = temp.next;
            
        }
        return count;
    }
}
