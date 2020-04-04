#include<stido.h>

int main( void ){
	int hoge = 0;
	int *pt;
	
	pt = &hoge;
	*pt = 10;
	
	printf("%d",hoge);
	
	return 0;
}
