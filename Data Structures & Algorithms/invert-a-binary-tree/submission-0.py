class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # 1. Base Case
        if not root:
            return None
            
        # 2. The Swap
        temp = root.left
        root.left = root.right
        root.right = temp
        
        # 3. Recursion (Don't forget 'self.')
        self.invertTree(root.left)
        self.invertTree(root.right)
        
        return root