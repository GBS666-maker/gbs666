#include <stdio.h>

int main()
{
    int day = 10;
    int total = 1; // total表示第10天剩下的巧克力
    
    // 倒推：从第9天到第1天，每天的巧克力数=(次日+1)*2
    for (int i = 9; i >= 1; i--)
    {
        total = (total + 1) * 2;
    }
    
    printf("小明妈妈总共买了%d块巧克力\n", total); // 输出：1534
    return 0;
}