字串搜尋:
方便以下講解，字串 target 為我們的目標字串， want 就是我們想要找出的字串． 其中:

n = len(target)
m = len(want)
暴力搜尋
解決問題:

講到在一個字串裡面要搜尋一個比較小的字串．比較直覺方式就是暴力法，也就是一個個比對．

方法論:

從字串 target 的第 i 個位置開始找 ( i 從 0, 1, … n )
如果 target[i] == want[0] 則繼續往下比對，一直比對到整串字串比對完畢．
如果不成功，將指標移到 target[i+1]

時間複雜度:

最差狀況: O(m * n)

Reference:
https://www.evanlin.com/about-kmp/
http://wiki.csie.ncku.edu.tw/acm/course/String_Matching
