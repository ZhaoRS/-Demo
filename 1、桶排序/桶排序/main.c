//
//  main.c
//  桶排序
//
//  Created by 赵瑞生 on 2017/3/9.
//  Copyright © 2017年 赵瑞生. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[11], i , j, t;
    for (i = 0; i < 10; i ++) {
        a[i] = 0;  //初始化0
    }
    
    for (i = 1; i <= 5; i ++) {
        scanf("%d", &t); //把每一个数读到变量T中
        a[t]++;  //进行计数
    }
    
    for (i = 0; i <= 10; i ++) { //依次判断a[0] ~ a[10]
        for (j = 1; j <= a[i]; j ++) {
            printf("%d", i);
        }
    }
    
    
    
    
    
    
    
    return 0;
}
