#include <stdio.h> 
int main() 
{ 
    int x, y, z, mid, dec; 
    printf("请任意输入三个整数:\n"); 
    scanf("%d %d %d", &x, &y, &z); 
    // 降序排序：x最大，z最小
    if (x < y) { mid = x; x = y; y = mid; }
    if (x < z) { mid = x; x = z; z = mid; }
    if (y < z) { mid = y; y = z; z = mid; }
    printf("请输入一个整数,程序根据其正负判断输出:\n");
    scanf("%d", &dec);
    if (dec >= 0) printf("最大整数为: %d\n", x); // 输入非负，输出x
    else printf("最小整数为:%d\n", z); // 输入负，输出z
    return 0;
}
/* 分析结果：输入3 1 2和5 → 最大整数为: 3；输入3 1 2和-2 → 最小整数为:1；运行结果同分析 */