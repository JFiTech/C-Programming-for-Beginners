//  AUTHOR: JFITECH
//  PURPOSE: READING FROM A FILE - FORMATTED STRINGS
// 	DATE: MAY 17TH, 2022


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


int main(void){
	char str1[10], str2[10], str3[10];
	int year;
	FILE *fp = NULL;

	fp = fopen("file.txt", "w+");

	if(fp != NULL)
		fputs("Hello, how are you?", fp);

	rewind(fp);

	fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

	printf("Read string1 |%s|\n", str1);
	printf("Read string2 |%s|\n", str2);
	printf("Read string3 |%s|\n", str3);
	printf("Read integer |%d|\n", year);

	fclose(fp);
	fp = NULL;

	return(0);
}