// sortedInsert method should return the head of the modified linked list.
class Solution {
    Node sortedInsert(Node head1, int key) {
        // Add your code here.
        
        // Add the element at first position 
        if(key<=head1.data){
            // create a NewNode 
            Node newNode = new Node(key);
            newNode.next = head1;
            head1 = newNode;
            return head1;
        }
        // if element insert between the list
        Node temp = head1;
        while(temp.next!=null && key>=temp.next.data){
            temp = temp.next;
        }
        Node newNode = new Node(key);
        newNode.next = temp.next;
        temp.next = newNode;
        return head1;
    }
}
