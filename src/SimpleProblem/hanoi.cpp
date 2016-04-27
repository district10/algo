#include <algo/SimpleProblem.h>
#include <stdio.h>

void algo::hanoi(int n, char x, char y, char z) {
    if(n == 1) {
        /* 将编号为 n 的圆盘从 x 移到 z */
        printf("%d from %c to %c\n", n, x, z);
        return;
    } else {
        /* 将 x 上编号 1 至 n-1 的圆盘移到 y，z 作辅助塔 */
        hanoi(n-1, x, z, y);
        /* 将编号为 n 的圆盘从 x 移到 z */
        printf("%d from %c to %c\n", n, x, z);
        /* 将 y 上编号 1 至 n-1 的圆盘移到 z，x 作辅助塔 */
        hanoi(n-1, y, x, z);
    }
}