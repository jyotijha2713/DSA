class Node{
    int data;
    Node next;
    Node(int d){data=d;}
};
class List{
    Node head;
    void insertBegin(int x){
        Node temp = new Node(x);
        temp.next = head;
        head = temp;
    }
    void insertEnd(int x){
        Node temp = new Node(x);
        if(head==null){
            head=temp;
            return;
        }
        Node curr = head;
        while(curr.next!=null)
            curr=curr.next;
        curr.next=temp;
    }
    void printList(){
        Node curr = head;
        while(curr!=null)
        {
            System.out.print(curr.data+" ");
            curr = curr.next;
        }
    }
}
public class Basicsjava{
    public static void main(String args[])
    {
        List l = new List();
        l.insertBegin(20);
        l.insertBegin(5);
        l.insertBegin(10);
        l.printList();
        System.out.println();
        l.insertEnd(30);
        l.insertEnd(40);
        l.insertEnd(50);
        l.printList();
    }
}