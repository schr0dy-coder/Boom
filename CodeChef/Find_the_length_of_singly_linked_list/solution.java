public static int getLength(Node head) {
    if(head==null)
        return 0;
    int len = 0;
    while(head!=null){
        len++;
        head = head.next;
    }
    return len;
 }
