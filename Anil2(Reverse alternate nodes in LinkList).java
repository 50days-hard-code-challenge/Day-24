class Solution
{
   
    public static Node ReverseAlternateNode(Node head){
        if(head == null){
            return head;
        }
         Node prev = null;
        Node present = head;
        Node next = head.next;
        while(present!=null){
            present.next = prev;
            prev = present;
            present = next;
            if(next!=null){
                next = next.next;
            }
        }
        return prev;
    }
    public static void rearrange(Node odd)
    {
        Node head = odd;
        // add your code here
         if(head == null){
            return;
        }
        Node oddHead = head;
        Node even = head.next;
        Node evenHead = even;

        while(even != null && even.next != null){
            oddHead.next = even.next;
            oddHead = oddHead.next;
            even.next = oddHead.next;
            even = even.next;
        }
        Node p = ReverseAlternateNode(evenHead);
        oddHead.next = p;
        
    }
}
