#include <iostream>
#include <vector>

#include "B.cpp"


int main() {
    // Create an instance of the Solution class
    Solution solver;

    // Define the list of numbers and the target
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the twoSum method on the instance, passing the list of numbers and the target as arguments
    std::vector<int> result = solver.twoSum(nums, target);

    // Print the result
    std::cout << "Result: [" << result[0] << ", " << result[1] << "]" << std::endl;  // Output: Result: [0, 1]

    return 0;
}
