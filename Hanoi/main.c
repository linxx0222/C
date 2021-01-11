#include <stdio.h>
#include <stdlib.h>
int count = 0;
void Hanoi(int n, char Src, char Dest, char Aux) //��L�ƶq�A�_�I�W�l�A���I�W�l�M�Ŷ��W�l n,StartTower,EndTower,SpareTower
{
    if (n == 1)
    {
        printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", count++, n, Src, Dest);
    }
    else //n����1�A�����U���@�Ӷ�L�M�W��n-1�Ӷ�L�A����W��n-1�Ӳ��ʨ�SpareTower
    {    //�A��̤U���@�Ӳ��ʨ�EndTower�A�̫��n-1�ӱqSpareTower���ʨ�EndTower
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
    printf("���� %d �h�e����@�ݲ��� %d ��\n", n, count);

    return 0;
}
