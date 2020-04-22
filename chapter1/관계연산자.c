#include<stdio.h>

int main(void){
	int num1=10;
	int num2= 12;
	int result1, result2,result3;
	
	result1=(num1==num2); //1과 2가 같다 
	result2=(num1<=num2); //1이 2보다 작거나 같다 
	result3=(num1>num2);
	
	printf("result1: %d \n",result1);//참이면 1 거짓이면 0을 반환한다. 
	printf("result2: %d \n",result2);
	printf("result3: %d \n",result3);
	return 0;
}
