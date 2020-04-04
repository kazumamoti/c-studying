#include<stdio.h>

int main( void ){
	
	int input_num_1;
	int input_num_2;
	
	/* 初期化 */
	input_num_1 = 0;
	input_num_2 = 0;
	
	printf("入力された２つの値が同じかどうか判断します。\n");
	printf("一つ目の値を入力してください。\n");
	scanf("%d",&input_num_1);
	
	printf("二つ目の値を入力してください。\n");
	scanf("%d",&input_num_2);
	
	if( input_num_1 == input_num_2 ){
		printf("同じです！\n");
	}
	else{
		printf("違う値です！\n");
	}
	
	return 0;
}
