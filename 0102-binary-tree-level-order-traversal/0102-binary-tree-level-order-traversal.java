/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    Queue<TreeNode> queue = new LinkedList<TreeNode>();
    
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> answer = new ArrayList<List<Integer>>();
        
        if (root == null)
            return answer;
        
        
        // queue.add() 와 queue.offer() 는 동일한 동작이지만 리턴값이 다르다.
        // queue.add() 성공 시 true, 실패 시 exception 리턴
        // queue.offer() 성공 시 true, 실패 시 false 리턴
        queue.offer(root);
        while(!queue.isEmpty()) {
            int queueLength = queue.size();
            TreeNode temp;
            List<Integer> subList = new ArrayList<Integer>();
            
            for(int i = 0; i < queueLength; i++ ) {
                temp = queue.poll(); // 값 꺼내기
                subList.add(temp.val);
                if(temp.left != null)
                    queue.offer(temp.left);
                if(temp.right != null)
                    queue.offer(temp.right);
            }
            answer.add(subList);
        }
        return answer;
    }
}