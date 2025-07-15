/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        HashMap<ListNode, Integer> map = new HashMap<>();
        
        if(head == null)
            return false;
        
        while(head.next != null) {
            // map.put 을 할 때, 처음 넣는 key 면 null 을 리턴하고, 중복되는 key 이면, 이전에 저장된 key:value 의 value 를 리턴한다. 즉 null 이 리턴되면 이전에 넣은 적이 없거나 value 에 null 이 저장되어 있다는 의미다.
            // node.value 에 null 이 없다는 가정을 하므로 null 을 return 하는 경우는 처음 key 를 삽입하는 경우다.
            if(map.put(head.next, head.val) != null) {
                return true;
            }
            head = head.next;
        }
        return false;
        
    }
}