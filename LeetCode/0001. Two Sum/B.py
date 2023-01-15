from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Create a dictionary to store the indices of the elements
        indices = {}
        
        # Iterate through the elements in the list
        for i, num in enumerate(nums):
            # Check if the complement of the current element (target - num) is in the dictionary
            if target - num in indices:
                # If it is, return the indices of the current element and its complement
                return [i, indices[target - num]]
            
            # If it is not, add the current element and its index to the dictionary
            indices[num] = i
        
        # If no pair of elements adds up to the target, return an empty list
        return []

