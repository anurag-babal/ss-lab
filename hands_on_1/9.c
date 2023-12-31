/*
============================================================================
Name : 9.c
Author : Anurag Babal
Description : Write a program to print the following information about a given file.
	a. inode
	b. number of hard links
	c. uid
	d. gid
	e. size
	f. block size
	g. number of blocks
	h. time of last access
	i. time of last modification
	j. time of last change
Date: 20th Aug, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdint.h>
#include<time.h>

int main(int argc, char** argv) {
	char* error = "Invalid syntax";
	struct stat details;
	if(argc != 2) {
		write(1, error, sizeof(error));
		return -1;
	}
	stat(argv[1], &details);
	printf("Inode :- %d\n", (int)details.st_ino);
	printf("Hard link count :- %d\n", (int)details.st_nlink);
	//printf("UID :- %ju", (uintmax_t)details.st_uid);
	printf("GID :- %d\n", (int)details.st_gid);
	printf("Size :- %d\n", (int)details.st_size);
	printf("Block Size :- %d\n", (int)details.st_blksize);
	printf("Number of Blocks :- %d\n", (int)details.st_blocks);
	printf("Time of last access :- %s", ctime(&details.st_atime));
	printf("Time of last modification :- %s", ctime(&details.st_mtime));
	printf("Time of last change :- %s", ctime(&details.st_ctime));
	return 0;
}
