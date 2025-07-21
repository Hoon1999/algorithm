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
    int maxValue = 0;
    int depth = 0;
    public int maxDepth(TreeNode root) {
        if(root != null)
            countingDepth(root);
        
        return maxValue;
    }
    
    public void countingDepth(TreeNode node) {
        depth++;
        if(node == null)
            return;
        
        if(maxValue < depth)
            maxValue = depth;
        
        countingDepth(node.left);
        depth--;
        countingDepth(node.right);
        depth--;
    }
}