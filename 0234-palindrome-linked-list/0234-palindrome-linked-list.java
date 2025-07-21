/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode tail;
        ListNode slow, fast, temp;
        
        
        if(head.next == null)
            return true;
        
        slow = head;
        fast = head;
        
        // slow 는 node 하나씩 건너가고
        // fast 는 node 두개씩 건너간다.
        while(fast.next != null && (fast.next).next != null) {
            slow = slow.next;
            fast = (fast.next).next;
        }
        if(fast.next != null)
            fast = fast.next;
        
        temp = slow;
        slow = slow.next;
        // 위 반복문이 끝나면 slow 는 가운데 노드에 위치하고
        // fast 는 마지막 노드에 위치한다.
        // 이제 중간 노드부터 가리키는 노드를 거꾸로 만든다.
        while(slow.next != null) {
            tail = slow.next;
            slow.next = temp;
            temp = slow;
            slow = tail;
        }
        slow.next = temp;
        
        // 앞에서부터 하나씩 그리고 뒤에서부터 하나씩 선택해서 비교
        tail = fast;
        if(head.val != tail.val)
            return false;
        while(true) {
            head = head.next;
            tail = tail.next;
            if(head.val != tail.val)
                return false;
            if(tail == (tail.next).next)
                break;
        }
        return true;
        
    }
}