#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create a map to store the indices of the elements
        std::unordered_map<int, int> indices;
        
        // Iterate through the elements in the list
        for (int i = 0; i < nums.size(); i++) {
            // Check if the complement of the current element (target - num) is in the map
            if (indices.count(target - nums[i])) {
                // If it is, return the indices of the current element and its complement
                return {i, indices[target - nums[i]]};
            }
            
            // If it is not, add the current element and its index to the map
            indices[nums[i]] = i;
        }
        
        // If no pair of elements adds up to the target, return an empty vector
        return {};
    }
};