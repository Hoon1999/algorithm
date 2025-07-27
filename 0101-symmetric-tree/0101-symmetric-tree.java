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
    public boolean isSymmetric(TreeNode root) {
        return compareNode(root.left, root.right);
    }
    public boolean compareNode(TreeNode left, TreeNode right) {
        if(left == null && right == null)
            return true;
        else if(left == null && right != null)
            return false;
        else if(left != null && right == null)
            return false;
        
        if(left.val == right.val) {
            if(compareNode(left.left, right.right) && compareNode(left.right, right.left))
                return true;
            else
                return false;
        }
        return false;
    }
}