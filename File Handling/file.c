#include<stdio.h>

void main(){

	FILE *fp;
	char ch;

	fp = fopen("D:\\file.txt", "r");
	if(fp==NULL) printf("cannot open file\n");
	else {
	while(1){
		ch = fgetc(fp);
		if(ch==EOF) break;
		printf("%c", ch);
	}
}
	printf("\n\n\n");
	fclose(fp);

}
