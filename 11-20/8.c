#include <stdio.h> 
int main() 
{ 
    int sex, weight, cubage; 
    printf("请给出输血者的性别和体重:"); 
    scanf("%d,%d", &sex, &weight); 
    if (sex >= 0) // 男性
    {
        if (weight >= 120) 
            cubage = 200; 
        else 
            cubage = 180; // 原代码缺少else，weight<120时cubage未初始化
        printf("此人应该输血:%d 毫升\n", cubage);
    } 
    else // 女性（原代码多一个else，语法错误）
    { 
        if (weight >= 100) 
        { 
            cubage = 150; 
            printf("此人应该输血:%d 毫升\n", cubage); 
        } 
        else 
        { 
            cubage = 120; 
            printf("此人应该输血:%d 毫升\n", cubage); 
        }
    }
    return 0;
}
/* 分析结果：输入0,130→200毫升；输入0,110→180毫升；输入-1,110→150毫升；输入-1,90→120毫升；运行结果同分析 */