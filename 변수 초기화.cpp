#include<stdio.h>

int main(void){
	int num1, num2;
	int num3= 30,num4= 40;//변수선언과 초기화를 동시 
	
	printf("num1=%d, num2=%d \n",num1,num2);//컴파일 에러 쓰레기값이 나옴  
	num1 = 10;
	num2 = 20;
	
	printf("num1= %d, num2=%d \n",num1,num2);
	printf("num3= %d, num4=%d \n",num3,num4);
	
	return 0;
}
