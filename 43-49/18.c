#include <stdio.h>
#define ROW 3 // 数组行数
#define COL 4 // 数组列数
// 函数：二维数组转置（a为原数组，b为转置后数组）
void transpose(int a[ROW][COL], int b[COL][ROW])
{
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            b[j][i] = a[i][j]; // 行列互换：原a[i][j]赋值给b[j][i]
        }
    }
}
// 函数：打印二维数组
void printArray(int arr[][COL], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[ROW][COL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b[COL][ROW]; // 转置后数组（行数=原列数，列数=原行数）
    printf("原数组：\n");
    printArray(a, ROW, COL);
    transpose(a, b); // 调用转置函数
    printf("转置后数组：\n");
    printArray(b, COL, ROW);
    return 0;
}