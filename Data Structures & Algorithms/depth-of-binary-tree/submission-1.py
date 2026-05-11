class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # 1. Base Case
        if not root:
            return 0

        left_h = self.maxDepth(root.left)
        right_h = self.maxDepth(root.right)

        return 1 + max(left_h, right_h)