class Solution:
    def getSubsets(self, nums):
        subsets = []
        sum_of_subsets = []
        subset = []
        
        def recursion(subset, max_depth, start=0, current_depth=1):
            if current_depth == 1: subset = []
            for index in range(start, len(nums) - (max_depth - current_depth)):
                subset.append(nums[index])
                current_depth += 1
                if current_depth < max_depth:
                    recursion(subset=subset, start=start+1, current_depth=current_depth, max_depth=max_depth)
                else:
                    return subset
                    
        for i in range(1, len(nums) + 1):
            subsets.append(recursion(subset=subset, max_depth=i))
        print(subsets)
        
x = Solution()
x.getSubsets([1,2,3,4,5])
