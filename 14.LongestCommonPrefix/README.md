14. Longest Common Prefix - Easy

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]

Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]

Output: ""

Explanation: There is no common prefix among the input strings.
 

Constraints:

0 <= strs.length <= 200

0 <= strs[i].length <= 200

strs[i] consists of only lower-case English letters.


Solution:

思路：既然是公共前綴子字符串，那必然每一組一維字符串都包含在其中，所以可以將第一組字符串整個賦給臨時字符串變量temp，

然後通過temp與其他幾組一維字符串比較，每次比較都必須從第一個字符開始，如果遇到不同字符，本題比較結束，

並且temp截短至不同字符出前一位置，直至temp與所有一維字符串變量比較結束，此時再返回temp;

Reference: https://blog.csdn.net/hhhhhyb/article/details/75717858
