88. Merge Sorted Array - Easy

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

The number of elements initialized in nums1 and nums2 are m and n respectively.

You may assume that nums1 has a size equal to m + n such that it has enough space to hold additional elements from nums2.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3

Output: [1,2,2,3,5,6]

Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0

Output: [1]
 

Constraints:

nums1.length == m + n

nums2.length == n

0 <= m, n <= 200

1 <= m + n <= 200

-109 <= nums1[i], nums2[i] <= 109


Solution:

1. Merge two array to nums1 then using Bubble Sort.
2. 混合插入有序數組，由於兩個數組都是有序的，所有隻要按順序比較大小即可。題目中說了nums1 數組有足夠大的空間，說明不用resize 數組，

又給了m和n，那就知道了混合之後的數組的大小，這樣就從nums1 和nums2 數組的末尾開始一個一個比較，把較大的數，按順序從後往前加入混合之後的數組末尾。

需要三個變量i，j，k，分別指向nums1，nums2，和混合數組的末尾。進行while 循環，如果i和j都大於0，再看如果nums1[i] > nums2[j]，說明要先把nums1[i] 加入混合數組的末尾，

加入後k和i都要自減1；反之就把nums2[j] 加入混合數組的末尾，

加入後k和j都要自減1。循環結束後，有可能i或者j還大於等於0，若j大於0，那麼還需要繼續循環，將nums2 中的數字繼續拷入nums1。若是i大於等於0，那麼就不用管，因為混合數組本身就放在nums1 中

Reference: https://www.cnblogs.com/grandyang/p/4059650.html
