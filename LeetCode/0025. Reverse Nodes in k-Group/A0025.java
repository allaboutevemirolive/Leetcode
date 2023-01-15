public class A0025 {

    public static void main(String[] args) {
        // Create a linked list with the example input
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(5);

        // Reverse the linked list in groups of 2
        int k = 2;
        B0025 A0025 = new B0025();
        ListNode reversed = A0025.reverseKGroup(head, k);

        // Print the reversed linked list
        while (reversed != null) {
            System.out.print(reversed.val + " ");
            reversed = reversed.next;
        }
    }
}
