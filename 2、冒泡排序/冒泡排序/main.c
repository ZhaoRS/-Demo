//
//  main.c
//  冒泡排序
//
//  Created by 赵瑞生 on 2017/3/9.
//  Copyright © 2017年 赵瑞生. All rights reserved.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) {
    /***********基础**************/
//    int a[100], i, j, t, n;
//    printf("请输入\n");
//    scanf("%d", &n); //输入一个数n，表示接下来有n个数
//    for (i = 0; i < n; i ++) { //循环读入n个数到数组a中
//        scanf("%d", &a[i]);
//    }
//    
//    //冒泡排序的核心部分
//    for (i = 0; i < n; i++) { //n个数排序 只进行n-1趟
//        for (j = 0; j < n - i; j ++) { //从第一位开始比较直到最后一个尚未归为的数
//            if (a[j] < a[j + 1]) { //比较大小并交换
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//            
//        }
//    }
//    
//    for (int i = 0; i < n; i ++) {
//        printf("%d    ", a[i]);
//    }
//    return 0;
//}

struct student {
    char name[21];
    int score;
}; //这里创建一个结构体用来存储姓名和分数

int main(int argc, const char * argv[]) {

    
    struct student a[100], t;
    
    int i, j, n;
    printf("请输入个数");
    scanf("%d", &n);//输入一个数n
    for (i = 0; i < n; i ++) {//循环读入n个人名和分数
        scanf("%s %d", a[i].name, &a[i].score);
    }
    
    
//    for (i = 0; i < n; i ++) {
//        printf("%s== %d\n", a[i].name, a[i].score);
//    }
//    
    
    //按照分数从高到低进行排序
    for (i = 0; i < n; i ++) {
        for (j = 0; j < n - i; j ++) {
            if (a[j].score < a[j + 1].score) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
            
        }
    }
    
    for (i = 0; i < n; i ++) {
        printf("%s== %d\n", a[i].name, a[i].score);
    }

    return 0;
}

