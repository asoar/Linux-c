/********冒泡排序算法==稳定性好*******/
/**解决同一个问题可以有很多种算法, 比较算法的好坏主要标准就是时间复杂度
 
 1、冒泡排序算法属于 非线性时间比较类排序 中的交换排序
 2、比较相邻的元素。如果第一个比第二个大，就交换它们两个
 3、从开始第一对到结尾的最后一对，这样在最后的元素应该会是最大的数
 4、时间复杂度(平均和最坏)都是: O(n*n)
 5、时间复杂度(最好): O(n)
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
    print_data();
    for(int i = 0; i < LEN; i++) {
        for(int j = 0; j < LEN-i-1; j++) {
            if(data[j] > data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                print_data();
            }
        }
    }
    
    return 0;
}
