//
//  main.c
//  Git_tutorial
//
//  Created by Henok Berhe on 10/14/18.
//  Copyright © 2018 Henok Berhe. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int num=7;
    int *pnum=&num;
    *pnum+=5;
    printf("The number is %d and our pointe is %p pointing to num and the pnum has num's address of num %p as its value is  %d",num,pnum,&num,*pnum);
    return 0;
}
