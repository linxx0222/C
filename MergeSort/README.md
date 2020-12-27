Reference: https://kopu.chat/2017/08/10/%e5%90%88%e4%bd%b5%e6%8e%92%e5%ba%8f-merge-sort/

合併排序 (Merge Sort)

採用 “Divide-and-Conquer” 策略。

Devide-and-Conquer 步驟：

Devide: 將原問題分成若干個仔問題

Conquer: 遞迴解決各個子問題；當子問題夠小時則直接解

Combine: 將子問題的解合併成原問題的解

Merge Sort 是 Devide-and-Conquer 相當著名的應用之一，步驟如下：

將原本的 Data List 切割成兩等分

將左、右的 Sublist 各自以 Merge Sort 排序

合併左右半部的兩個 Sublist 成為一個新的 Data List

時間複雜度 (Time complexity)

如果 Sublist A 的長度為 m、Sublist B 的長度為 n，則合併兩個 Sublist：

最少比較次數 = m 或 n (若將 A 長度改為 n，則為 n)

最多比較次數 = m + n – 1 次 (若將 A 長度改為 n，則為 2n-1)

=> 時間皆為 O(n)

已知每回合 merge 所花費的時間為 O(n)，則 n 個 Data 做 Merge Sort 需要幾個回合？

由於 Merge Sort 過程相當於一棵 Binary Tree，故 Merge Sort 的回合數相當於「Binary Tree 的高度 – 1」。

n 個 Data 的 Binary Tree 高度為 log2 n + 1，故回合數為 log2 n。

Merge Sort 的總時間

= 回合數 * 每回合所花的時間

= log n * O(n)

= O(n logn)

Average/Best/Worst Case 的時間皆為 O(n logn)。

改用 Recursive Time Function 運算仍可得相同結果：


空間複雜度 (Space Complexity)

需要一個與原來 Data List 一樣的額外空間，來暫時儲存每一回合的合併結果，故為 O(n)。

穩定性：Stable
