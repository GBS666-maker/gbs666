#include <stdio.h> 
void fun (int x, int y, int z) 
{ 
    z = x * x + y * y; // z为形参，修改不影响实参a
} 
int main() 
{ 
    int a = 38; 
    fun(7, 3, a); // 传值调用，a值不变
    printf("%d\n", a); // 分析结果：38；运行结果：38
    return 0;
}