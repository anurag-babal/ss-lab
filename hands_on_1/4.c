/*
============================================================================
Name : 4.c
Author : Anurag Babal
Description :  Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 11th Aug, 2023.
============================================================================
*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(void) {
	int fd = open("abc", O_RDWR);
	while(1);
	return 0;
}
