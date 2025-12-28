/*class Node{
    int val;
    Node next;
    Node(int x){
    	val = x; next = null;
    }
}*/
static int getMiddleElement(Node head){
     int i = 0;
     Node temp = head;
     while(temp!=null){
         i++;
         temp = temp.next;
     }
     i = i/2 +1;
     temp = head;
     for(int j = 1; j<i; j++){
         temp = temp.next;
     }
     return temp.val;
}
