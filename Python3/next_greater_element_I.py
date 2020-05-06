class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result = []
        
        for val1 in nums1:
            index = nums2.index(val1)
            for i in range(index, len(nums2)):
                if nums2[i] > val1:
                    result.append(nums2[i])
                    break
            else: 
                result.append(-1)
        
        return result
