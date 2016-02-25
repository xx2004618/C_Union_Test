//
//  main.c
//  C_Union_Test
//
//  Created by Xiao Xiang on 16/2/24.
//  Copyright © 2016年 Xiang Xiao. All rights reserved.
//

#include <stdio.h>
union data{
    int a;
    char b;
    int c;
    double d;
    char e;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%lu\n", sizeof(union data));
    return 0;
}
