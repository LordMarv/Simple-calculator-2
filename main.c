//simple calculator project using if statements
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char op;
	double num1,num2;
	
	printf("\tSIMPLE CALCULATOR PROJECT USING SWITCH STATEMENT\n");
	
	printf("ENter the operator(+,-,/,*): ");
	scanf("%c",&op);
	
	printf("Enter two digits: \n");
	scanf("%lf %lf",&num1, &num2);
	
	if(op=='+'){
		printf("%.2lf + %.2lf= %.2lf",num1, num2, (num1 + num2));
	}
	else if(op=='-'){
		printf("%.2lf - %.2lf= %.2lf",num1, num2, (num1 - num2));
	}
	else if(op=='*'){
		printf("%.2lf * %.2lf= %.2lf",num1, num2, (num1 * num2));
	}
	else if(op=='/'){
		if(num2!=0){
			printf("%.2lf / %.2lf= %.2lf",num1, num2, (num1 / num2));
		}else{
			printf("DIVISION ERROR!!!");
		}
	}
	else{
		printf("Enter the right operator");
	}
	
	return 0;
}
