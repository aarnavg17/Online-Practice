public class Main {

    public static void main(String[] args) {
        MyLinkedList obj = new MyLinkedList();
        obj.addAtHead(84);
        obj.addAtTail(2);
        obj.addAtTail(39);
//        obj.print();
        System.out.println(obj.get(3));
        System.out.println(obj.get(1));
        obj.addAtTail(42);
        obj.addAtIndex(1, 80);
        obj.addAtHead(14);
        obj.addAtHead(1);
        obj.addAtTail(53);
        obj.addAtTail(98);
        obj.addAtTail(19);
        obj.addAtTail(12);
        System.out.println(obj.get(2));
        obj.addAtHead(16);
        obj.addAtHead(33);
        obj.addAtIndex(4, 17);
        obj.addAtIndex(6, 8);
        obj.addAtHead(37);
        obj.addAtTail(43);
//        obj.print();
        obj.deleteAtIndex(11);
//        obj.print();
        obj.addAtHead(80);
        obj.addAtHead(31);
        obj.addAtIndex(13, 23);
        obj.addAtTail(17);
        System.out.println(obj.get(4));
        obj.addAtIndex(10, 0);
        obj.addAtTail(21);
        obj.addAtHead(73);
        obj.addAtHead(22);
        obj.addAtIndex(24, 37);
        obj.addAtTail(14);
        obj.addAtHead(97);
        obj.addAtHead(8);
//        obj.print();
        System.out.println(obj.get(6));
        obj.deleteAtIndex(17);
//        obj.print();
        obj.addAtTail(50);
        obj.addAtTail(28);
        obj.addAtHead(76);
        obj.addAtTail(79);
        obj.print();
        System.out.println(obj.get(18));
        System.out.println("Size " + obj.getSize());
        obj.deleteAtIndex(30);
        obj.print();
        obj.addAtTail(5);
        obj.addAtHead(9);
        obj.addAtTail(83);
        obj.deleteAtIndex(3);
        obj.print();
    }
}
/*
["addAtTail","addAtHead","addAtTail","deleteAtIndex","addAtTail","deleteAtIndex","addAtIndex","deleteAtIndex","addAtTail","addAtHead","addAtIndex","addAtHead","addAtHead","get","addAtHead","get","addAtHead","deleteAtIndex","get","addAtHead","addAtTail","get","addAtHead","get","addAtTail","get","addAtTail","addAtHead","addAtIndex","addAtIndex","addAtHead","addAtHead","deleteAtIndex","get","addAtHead","addAtIndex","addAtTail","get","addAtIndex","get","addAtIndex","get","addAtIndex","addAtIndex","addAtHead","addAtHead","addAtTail","addAtIndex","get","addAtHead","addAtTail","addAtTail","addAtHead","get","addAtTail","addAtHead","addAtTail","get","addAtIndex"]
[[5],[9],[83],[3],[40],[26],[20,90],[30],[40],[56],[15,23],[51],[21],[26],[83],[30],[12],[8],[4],[20],[45],[10],[56],[18],[33],[2],[70],[57],[31,24],[16,92],[40],[23],[26],[1],[92],[3,78],[42],[18],[39,9],[13],[33,17],[51],[18,95],[18,33],[80],[21],[7],[17,46],[33],[60],[26],[4],[9],[45],[38],[95],[78],[54],[42,86]]
 */