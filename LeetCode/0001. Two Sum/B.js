/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
function twoSum(nums, target) {
    // Create a map to store the indices of the elements
    const indices = new Map();
    
    // Iterate through the elements in the list
    for (let i = 0; i < nums.length; i++) {
        // Check if the complement of the current element (target - num) is in the map
        if (indices.has(target - nums[i])) {
            // If it is, return the indices of the current element and its complement
            return [i, indices.get(target - nums[i])];
        }
        
        // If it is not, add the current element and its index to the map
        indices.set(nums[i], i);
    }
}
