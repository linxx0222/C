strcmp是C語言的函式之一，來自C語言標準函式庫，定義於string.h，它需要兩個字串當作參數，
比較兩個字串是否相等，相等就回傳 0，第一個字串大於第二個字串回傳正值，反之回傳負值。

int strcmp ( const char* s1, const char * s2 );
int strncmp ( const char* s1, const char * s2 , size_t n );

strcmp中，第一個參數s1和第二個參數s2指的是要互相比較字串長短的兩個參數，
第一個字串大於第二個字串回傳正值，反之回傳負值，如果相等則回傳0。(比較字串時，是比較當下該個字元使用ASCII code相減)
原文定義: Compares thr string s1 with the string s2. 
The function retirns a value of zero, less than zero (usually -1) or
greater than zero(usually 1) if s1 is equel to, less than or greater than s2, respectively.

strncmp中，第一個參數s1和第二個參數s2指的是要互相比較字串長短的兩個參數，
比較的長度是第三個參數n，當第一個字串大於第二個字串回傳正值，反之回傳負值，如果相等則回傳0。
(比較字串時，是比較當下該個字元使用ASCII code相減)
原文定義: Compares up to n characters of the string s1 with the string s2. 
The function returns zero, less than zero or greater than zero if the n-character
portion of s1 is equal to, less than or greter than the corresponding n-character portion of s2, respectively.
