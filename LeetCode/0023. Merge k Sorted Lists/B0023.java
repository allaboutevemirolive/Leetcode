import java.util.PriorityQueue;

public class B0023 {
    
    public static ListNode mergeKLists(ListNode[] lists) {
        if (lists == null || lists.length == 0) {
            return null;
        }

        int k = lists.length;
        PriorityQueue<ListNode> heap = new PriorityQueue<>(k, (a, b) -> a.val - b.val);

        for (ListNode list : lists) {
            if (list != null) {
                heap.offer(list);
            }
        }

        ListNode head = new ListNode(0);
        ListNode curr = head;

        while (!heap.isEmpty()) {
            ListNode min = heap.poll();
            curr.next = min;
            curr = curr.next;
            if (min.next != null) {
                heap.offer(min.next);
            }
        }

        return head.next;
    }
}
