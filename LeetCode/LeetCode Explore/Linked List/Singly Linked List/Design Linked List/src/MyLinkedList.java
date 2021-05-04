class MyLinkedList {

    public MyLinkedList() {
        this.size = 0;
    }

    private Node head, tail;
    private int size;

    public int get(int index) {
        Node temp = this.head;

        for (int i = 0; i < index; i++) {
            temp = temp.next;
            if (temp == null) return -1;
        }

        return temp.val;
    }

    public void addAtHead(int val) {
        Node newNode = new Node(val);
        if (this.head == null) {
            this.head = this.tail = newNode;
        }
        else {
            newNode.next = this.head;
            this.head = newNode;
        }

        this.size++;
    }

    public void addAtTail(int val) {
        Node newNode = new Node(val);

        if (this.tail == null){
            this.head = this.tail = newNode;
        }
        else{
            this.tail.next = newNode;
            this.tail = newNode;
        }

        this.size++;
    }

    public void addAtIndex(int index, int val) {
        if (index == 0) addAtHead(val);
        else if (index >= size) addAtTail(val);
        else{
            Node current = head;

            for (int i = 1; i < index; i++) current = current.next;

            Node temp = current.next;
            current.next = new Node(val);
            current.next.next = temp;

            size++;
        }
    }

    public void deleteAtIndex(int index) {
        if (index >= size || index < 0) return;
        if (index == 0) {
            this.head = this.head.next;
            this.size--;
            return;
        }
        Node previous = head;
        for (int i = 1; i < index; i++) previous = previous.next;
        if (index == size - 1) {
            previous.next = null;
            tail = previous;
        } else {
            previous.next = previous.next.next;
        }
        this.size--;
    }

    public class Node {
        int val;
        Node next;

        public Node(int val){
            this.val = val;
            this.next = null;
        }
    }
}



/*
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */