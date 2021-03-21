20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.

Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([)]"

Output: false

Example 5:

Input: s = "{[]}"

Output: true
 

Constraints:

1 <= s.length <= 104

s consists of parentheses only '()[]{}'.


Solution:

思路：這一題代碼用到了堆棧中的先進後出概念，①創建一個標誌位flag=-1和一個空字符串stack；

②從第一個字符開始讀取輸入字符串；

③檢查讀入的字符，if{如果是'('或'{'或'['，則標誌位加一，同時該括號存入stack；}else{如果是')'或'}'或'] '，

則比較stack最後一次存入的字符，如果相匹配，則標誌位減一，否則直接返回false；}； 

④讀取輸入字符串的下一個字符，並且每讀取一個字符，執行一次步驟③，直至輸入字符串全部讀取完畢；

⑤最後檢查標誌位flag是否與初值相等，相等返回true，否則返回false。*/

Reference: https://blog.csdn.net/hhhhhyb/article/details/75949088
