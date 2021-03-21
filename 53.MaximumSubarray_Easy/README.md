53. Maximum Subarray - Easy

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]

Output: 6

Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:

Input: nums = [1]

Output: 1

Example 3:

Input: nums = [5,4,-1,7,8]

Output: 23
 

Constraints:

1 <= nums.length <= 3 * 104

-105 <= nums[i] <= 105
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

Solution:

Kadane's演算法能夠使用一個迴圈得出答案，若要更快速就要使用分而治之來實作了，間單蘭說Kadane's演算法就是當遇到負數就歸零，每次相加結果取最大數。

陣列走訪

Run Time: 6 ms

時間複雜度: O(n)

空間複雜度: O(1)
