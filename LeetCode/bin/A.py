# Import the Solution class from the file where it is defined
from B import Solution

# Create an instance of the Solution class
solver = Solution()

# Call the twoSum method on the instance, passing the list of numbers and the target as arguments
result = solver.twoSum([2, 7, 11, 15], 9)

# Print the result
print(result)  # Output: [0, 1]
