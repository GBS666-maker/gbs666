#include <stdio.h> 
int main() 
{ 
    int i = 1; 
    switch (i) 
    { 
        case 1: printf("%d\t", i++); // i=1，输出1后i=2（无break，穿透）
        case 2: printf("%d\t", i++); // i=2，输出2后i=3（无break，穿透）
        case 3: printf("%d\t", i++); // i=3，输出3后i=4（无break，穿透）
        case 4: printf("%d\t", i++); // i=4，输出4后i=5
    } 
    printf("\ni=%d\n", i); // 分析结果：1	2	3	4	 i=5；运行结果：1	2	3	4	 i=5
    return 0;
}
/* 若case1后加break：仅输出1	，i=2 */