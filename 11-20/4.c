#include <stdio.h> 
int main() 
{ 
    int i, j, k; 
    int m, n, p; 
    i = 8; 
    j = 10; 
    k = 12; 
    m = ++i; // i先增为9，m=9
    printf("i = %d\n", i); // 分析结果：9；运行结果：i = 9
    printf("m = %d\n", m); // 分析结果：9；运行结果：m = 9
    n = j--; // j先赋值给n=10，再减为9
    printf("j = %d\n", j); // 分析结果：9；运行结果：j = 9
    printf("n = %d\n", n); // 分析结果：10；运行结果：n = 10
    p = (++m) * (n++) + (--k); // m先增为10，n先乘后增为11，k先减为11 → 10*10+11=111
    printf("k = %d\n", k); // 分析结果：11；运行结果：k = 11
    printf("p = %d\n", p); // 分析结果：111；运行结果：p = 111
    return 0;
}
