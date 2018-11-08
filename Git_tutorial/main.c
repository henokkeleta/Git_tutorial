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
    int *pnum2=NULL;
    pnum2=pnum;
    *pnum2+=2;
    printf("The number is %d and our pointe is %p pointing to num \nand the pnum has num's address of num %p as its value is  %d \nand pnum's address is %p and pnum2 is %p \nand its value is %d \nand pnum2 addres is %p" ,num,pnum,&num,*pnum,pnum2,&pnum,*pnum2,&pnum2);
    return 0;
}
