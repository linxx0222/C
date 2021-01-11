#include <stdio.h>
#include <stdlib.h>
int count = 0;
void Hanoi(int n, char Src, char Dest, char Aux) //圓盤數量，起點柱子，終點柱子和空閒柱子 n,StartTower,EndTower,SpareTower
{
    if (n == 1)
    {
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", count++, n, Src, Dest);
    }
    else //n不為1，分為下面一個圓盤和上面n-1個圓盤，先把上面n-1個移動到SpareTower
    {    //再把最下面一個移動到EndTower，最後把n-1個從SpareTower移動到EndTower
        Hanoi(n - 1, Src, Aux, Dest);
        Hanoi(1, Src, Dest, Aux);
        Hanoi(n - 1, Aux, Dest, Src);
    }
}
int main()
{
    printf("Hanoi!\n");
    int n;
    printf("Type the height of Hanoi:\n");
    scanf("%d", &n);

    Hanoi(n, 'A', 'B', 'C');
    printf("移動 %d 層河內塔共需移動 %d 次\n", n, count);

    return 0;
}
