#include <stdio.h>
int main()
{
	float Basicpay,Travelallowance,Dinningallowance,Grosssalary;
	printf("Enter the Basic pay:\n");
	scanf("%f",Basicpay);
	Travelallowance=(0.1*Basicpay);
	Dinningallowance=(0.15*Basicpay);
	Grosssalary=Basicpay+Travelallowance+Dinningallowance;
	printf("The gross salary=%f\n",Grosssalary);
	return 0;
}
