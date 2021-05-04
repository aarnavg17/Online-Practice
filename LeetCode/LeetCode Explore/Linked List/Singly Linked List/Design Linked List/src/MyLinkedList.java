class MyLinkedList {

    /** Initialize your data structure here. */
    public MyLinkedList() {
        dummy = new Node(0);
    }

    private Node head, tail,dummy;
    private int size = 0;

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    public int get(int index) {
        Node temp = head;

        for (int i = 0; i < index; i++){
            temp = temp.next;
            if (temp == null){
                return -1;
            }
        }
        return temp.data;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    public void addAtHead(int val) {
        Node newNode = new Node(val);
        if (head == null) {
            head = tail = newNode;
        }
        else {
            newNode.next = head;
            head = newNode;
        }
        size++;
    }

    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int val) {
        Node newNode = new Node(val);

        if (tail == null){
            head = tail = newNode;
        }
        else{
            tail.next = newNode;
            tail = newNode;
        }
        size++;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    public void addAtIndex(int index, int val) {
        if (index == 0){
            addAtHead(val);
        }
        else if (index >= size){
            addAtTail(val);
        }
        else{
            Node current = head;
            for (int i = 1; i < index; i++){
                current = current.next;
            }
            Node temp = current.next;
            current.next = new Node(val);
            (current.next).next = temp;
            size++;
        }
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        if (index >= size || index < 0) {
            return;
        }
        if (index == 0) {
            head = head.next;
            size--;
            return;
        }
        else {
            Node previous = head;
            for (int i = 1; i < index; i++) {
                previous = previous.next;
            }
            if (index == size - 1) {
                previous.next = null;
                tail = previous;
            } else {
                Node current = previous.next;
                previous.next = current.next;
            }
        }
        size--;
    }

    public int getSize() {
        return this.size;
    }

    public class Node {
        int data;
        Node next;

        public Node(int e){
            this.data = e;
            next = null;
        }
    }

    public void print() {
        Node h = this.head;
        while (h != null) {
            System.out.print(h.data + ", ");
            h = h.next;
        }
        System.out.println();
    }
}



/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */