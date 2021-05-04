public class Main {

    public static void main(String[] args) {
        MyLinkedList obj = new MyLinkedList();
        obj.addAtHead(84);
        obj.addAtTail(2);
        obj.addAtIndex(1, 3);
        obj.deleteAtIndex(4);
        System.out.println(obj.get(3));
    }
}
