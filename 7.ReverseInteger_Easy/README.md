7. Reverse Integer - Easy

Given a signed 32-bit integer x, return x with its digits reversed. 

If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123

Output: 321

Example 2:

Input: x = -123

Output: -321

Example 3:

Input: x = 120

Output: 21

Example 4:

Input: x = 0

Output: 0
 

Constraints:

-231 <= x <= 231 - 1



Solution:

如果硬要轉成string然後反轉在轉回來, 你會發現過程除了手段很硬之外, 面對overflow也會變得很麻煩

我們需要的是一個數學可以解決的解法, 但說真的在情急之下要想到我個人是覺得蠻不容易的

主要就是會先module 10找到當前的最後一個數字, 得到r, 在將這個r加到ans上, ans乘以十無疑就是要進位, 最後我們在將原本的x / 10

當x == 0 的時候就宣告這個數已經走訪完成, 我們即可退出

最後題目有提到當結果的數字overflow時我們要回傳0, 在這邊也可以看到一個不錯的方式就是直接讓當前的ans 去比較INT_MAX與INT_MIN除以十的結果

比較讓我訝異的是如果像我前言說的我們需要對負數進行字串的處理會變得很麻煩, 這邊怎麼做到的呢？

原來不用擔心 module 這個動作對負數也是有作用的

例如 -31 % 10 得到的結果會是 -1喔, 所以變相是接下來一連串的動作都會是負數, 自然也不用再多作轉換

Reference: https://sam66.medium.com/leetcode-7-reverse-integer-1b003bcdf583
