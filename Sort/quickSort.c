/********快速排序算法===不稳定*******/
/**解决同一个问题可以有很多种算法, 比较算法的好坏主要标准就是时间复杂度
 
 1、使用分治法来把一个串（list）分为两个子串（sub-lists）
 2、从数列中挑出一个元素，称为 “基准”（pivot）
 3、重新排序数列，所有元素比基准值小的摆放在基准前面，所有元素比基准值大
    的摆在基准的后面（相同的数可以到任一边）
 4、在这个分区退出之后，该基准就处于数列的中间位置。
    这个称为分区（partition）操作
 5、递归地（recursive）把小于基准值元素的子数列和大于基准值元素的子数列排序
 6、平均时间复杂度: O(nlog2n)
 7、最坏时间复杂度: O(n*n)
 8、最好时间复杂度: O(nlog2n)
 */

/*** http://www.gyound.com/ **/

#include <stdio.h>

#define LEN   10
int data[LEN] = {10, 1, 6, 3, 4, 8, 2, 9, 5, 0};


void print_data(void)
{
    printf("%d %d %d %d %d %d %d %d %d %d\n",
           data[0], data[1], data[2], data[3],
           data[4], data[5], data[6], data[7],
           data[8], data[9]);
}


int main(int argc, char *argv[])
{

    
    return 0;
}
