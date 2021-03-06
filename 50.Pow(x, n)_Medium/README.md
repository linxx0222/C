50. Pow(x, n) - Medium

Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10

Output: 1024.00000

Example 2:

Input: x = 2.10000, n = 3

Output: 9.26100

Example 3:

Input: x = 2.00000, n = -2

Output: 0.25000

Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

Constraints:

-100.0 < x < 100.0

-231 <= n <= 231-1

-104 <= xn <= 104


Solution:
1. original math approach
2. 這道題讓我們求x的n次方，如果只是簡單的用個for

循環讓x乘以自己n次的話，未免也把LeetCode 上的題想的太簡單了，

一句話形容圖樣圖森破啊。OJ 因超時無法通過，所以需要優化，使其在更有效的算出結果來們可以用遞歸來折半計算，

每次把n縮小一半，這樣n最終會縮小到0，任何數的0次方都為1，這時候再往回乘，如果此時n是偶數，

直接把上次遞歸得到的值算個平方返回即可，如果是奇數，則還需要乘上個x的值。

還有一點需要引起注意的是n有可能為負數，對於n是負數的情況，

我可以先用其絕對值計算出一個結果再取其倒數即可，之前是可以的，

但是現在test case 中加了個負2的31次方後，這就不行了，因為其絕對值超過了整型最大值，會有溢出錯誤，

不過可以用另一種寫法只用一個函數，在每次遞歸中處理n的正負，然後做相應的變換即可

Reference: https://www.cnblogs.com/grandyang/p/4383775.html
