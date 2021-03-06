/********正向插入排序算法==稳定性好*******/
/**解决同一个问题可以有很多种算法, 比较算法的好坏主要标准就是时间复杂度
   插入排序算法采取增量式(Incremental)的策略，每添加一个元素到已排序
   的子序列中，逐渐将整个数组排序完毕
 
 1、计算复杂度时忽略print_data和printf输出语句
 2、最外层的for循环执行了 LEN-1 次
 3、内层while循环假设执行m次，主要取决于原始数据，这里将括号内的比较和赋值的时间忽略了
 4、总的执行时间粗略估计: (LEN-1)(a1+a2+a5+m(a3+a4))
 5、最好的情况下(数据正向排好)执行时间为: (a1+a2+a5)(LEN-1) = (a1+a2+a5)LEN - (a1+a2+a5)
 表示成: a*LEN - b，是LEN的线性函数
 6、最坏的情况下(数据逆向排好)执行时间为: (LEN-1)(a1+a2) + (a3+a4)(LEN*(LEN-1)/2)
 7、最坏和随机平均情况下都可以表示成:a*LEN*LEN + b*LEN + c,是LEN的二次函数
 8、分析算法时间复杂度时，主要关心最坏情况，该算法当LEN愈来愈大时，常数时间可以忽略不计
 所以该算法的时间复杂度为: O >= LEN*LEN
 */

/*** http://www.gyound.com/ **/

#include <stdio.h>

#define LEN   10
int data[LEN] = {10, 1, 6, 3, 4, 8, 2, 9, 5, 0};

extern void print_data(void);

int main(int argc, char *argv[])
{
    
    int i, j, temp;
    
    for(j = 1; j < LEN; j++) {  //LEN-1
        print_data();
        temp = data[j];         //a1
        i = j - 1;              //a2
        while(i >= 0 && data[i] > temp){//m
            data[i+1] = data[i];//a3
            i--;                //a4
        }
        data[i+1] = temp;       //a5
    }
    print_data();
    
    return 0;
}

void print_data(void)
{
    printf("%d %d %d %d %d %d %d %d %d %d\n",
           data[0], data[1], data[2], data[3],
           data[4], data[5], data[6], data[7],
           data[8], data[9]);
}
