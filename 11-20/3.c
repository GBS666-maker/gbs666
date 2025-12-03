#include <stdio.h> 
int main() 
{ 
    int logic; 
    int a = 1; 
    int b = 2; 
    int c = 3; 
    logic = a + b > c && b <= c; // 3>3?0 && 2<=3?1 → 0
    printf("logic = %d\n", logic); // 分析结果：0；运行结果：logic = 0
    logic = a >= b + c || b == c; // 1>=5?0 || 2==3?0 → 0
    printf("logic = %d\n", logic); // 分析结果：0；运行结果：logic = 0
    logic = !(a < c) + b != 1 && (a + c) / 2; // !1+2!=1 && 2 → 0+1 && 2 → 1
    printf("logic = %d\n", logic); // 分析结果：1；运行结果：logic = 1
    return 0;
}