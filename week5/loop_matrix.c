#include <stdio.h>

int main(void)
{
    int i, j;
    int a[10][10] = {0}; 
 
    i = 1;
    while (i<=9) 
    {
        j = 1;
        while (j<=9)
        {
            a[i][j] = ??? /* a[i][j] ith row, jth column */
            j = j + 1;
        }
        i = i + 1;
    }
 
    /* show the content of a */
    i = 1;
    while (i<=9) 
    {
        j = 1;
        while (j<=9)
        {
            printf("%3d ", a[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
 
    return 0;
}

//3層迴圈？ ex. 矩陣乘法
/*
How to print a Pascal Triangle?
Try it yourself.
0 0 0 0 0 0
0 1 0 0 0 0
0 1 1 0 0 0
0 1 2 1 0 0
0 1 3 3 1 0
0 1 4 6 4 1
...
*/