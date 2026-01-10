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
    public int findSecondMinimumValue(TreeNode root) {
        long secondMin = dfs(root, root.val);
        return secondMin == Long.MAX_VALUE ? -1 : (int) secondMin;
    }

    private long dfs(TreeNode node, int min) {
        if (node == null) return Long.MAX_VALUE;

        if (node.val > min) return node.val;

        long left = dfs(node.left, min);
        long right = dfs(node.right, min);

        return Math.min(left, right);
    }
}
