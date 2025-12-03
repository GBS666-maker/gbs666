#include <stdio.h>

int main()
{
    int radius;
    double area;
    const double PI = 3.1416; // 用常量定义圆周率，提升可读性和可维护性
    
    // 第一个循环：面积>=120时退出（break）
    printf("=== break 示例 ===\n");
    for (radius = 1; radius <= 10; radius++)
    {
        area = PI * radius * radius;
        if (area >= 120.0)
            break; // 满足条件立即退出循环
        printf("radius=%d, area=%.2f\n", radius, area);
    }
    printf("break后：radius=%d\n", radius - 1); // 输出：radius=6
    
    // 第二个循环：面积<120时跳过（continue）
    printf("\n=== continue 示例 ===\n");
    for (radius = 1; radius <= 10; radius++)
    {
        area = PI * radius * radius;
        if (area < 120.0)
            continue; // 满足条件跳过后续打印，进入下一次循环
        printf("radius=%d, area=%.2f\n", radius, area);
    }
    printf("continue后：radius=%d\n", radius - 1); // 输出：radius=10
    
    return 0;
}