/*
题目：
编写算法，在一非递减的顺序表L中，删除所有值相等的多余元素。要求时间复杂度为O(n)，空间复杂度为O(1)。

函数原型如下：
void del_dupnum(SeqList *L)

相关定义如下：
struct _seqlist{
    ElemType elem[MAXSIZE];
    int last;
};
typedef struct _seqlist SeqList;
*/

#include "list.h" // 请不要删除，否则检查不通过
#include <stdio.h>
#include <stdlib.h>

void del_dupnum(SeqList* L)
{
    int flag = 0;
    int val = L->elem[0];
    for (int i = 0; i <= L->last; i++) {
        if (val != L->elem[i]) {
            val = L->elem[i];
            flag += 1;
            L->elem[flag] = val;
        }
    }
    L->last = flag;
}
