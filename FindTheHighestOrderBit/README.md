實作 "找整數的最高位位元位置"

if (n & (n-1)) == 0

n 就是2的次方數

以此規則來找最大次方是在第幾bit


補充:
bitwise operation 面試考題

3. SET BIT(n) = 1, CLEAR BIT(n) = 0
寫function 把某個數的第x個bit改成1或0 (改成1直接用or、改成0用mask 之後and)

CLEAR_BIT(x,n) ((x) &= (~(1 << n)))

SET_BIT(x,n) ((x) |= (1<< n))

4. 判斷是否是2的次方

5. 判斷一整數是偶數還是奇數

return x & 1; //回傳1odd, 0 even;

6. 請擷取出Input中的第七個bit值?

    return (x & 64(1000000)) >> 6;
    
    return (x >> 6) & 1
    
7. 請擷取出Input中的第N個bit值?

    int Get_N_bit(int x, int n){
    
         return (x >> (n-1)) & 1
         
    }
    
8. 計算有幾個位元是 1

   for (; n !=0; n >>= 1) if (n&1 == 1) ++i
