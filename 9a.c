#include <stdio.h> 
struct Employee { 
	int id; 
	char name[50]; 
	float basic, hra, da, pf, gross, net; 
}; 
void calculateSalary(struct Employee *emp) 
{ 
	emp->hra = emp->basic * 0.20f; 
	emp->da = emp->basic * 0.10f; 
	emp->pf = emp->basic * 0.12f; 
	emp->gross = emp->basic + emp->hra + emp->da; 
	emp->net = emp->gross - emp->pf; 
} 
void displaySlip(const struct Employee *emp) 
{ 
	printf("\n====================================\n"); 
	printf("          EMPLOYEE SALARY SLIP\n"); 
	printf("====================================\n"); 
	printf("Employee ID   : %d\n", emp->id); 
	printf("Employee Name : %s\n", emp->name); 
	printf("------------------------------------\n"); 
	printf("Basic Salary  : Rs. %10.2f\n", emp->basic); 
	printf("HRA (20%%)     : Rs. %10.2f\n", emp->hra); 
	printf("DA  (10%%)     : Rs. %10.2f\n", emp->da); 
	printf("------------------------------------\n"); 
	printf("Gross Salary  : Rs. %10.2f\n", emp->gross); 
	printf("PF  (12%%)     : Rs. %10.2f\n", emp->pf);     
	printf("------------------------------------\n");     
	printf("Net Salary    : Rs. %10.2f\n", emp->net);     
	printf("====================================\n"); 
}  
int main(void) 
{     
	struct Employee employees[100];     
	struct Employee *ptr;     
	int n, i;      
	printf("Enter number of employees (1-100): ");     
	if (scanf("%d", &n) != 1 || n < 1 || n > 100) 
	{         
		printf("Invalid number of employees.\n");         
		return 1;     
	}      
	for (i = 0; i < n; i++) 
	{         
		ptr = &employees[i];          
		printf("\nEnter details of employee %d\n", i + 1);          
		printf("Employee ID: ");         
		if (scanf("%d", &ptr->id) != 1) 
		{             
			printf("Invalid employee ID.\n");             
			return 1;         
		}         
		printf("Employee name: ");         
		if (scanf(" %49[^\n]", ptr->name) != 1) 
		{             
			printf("Invalid employee name.\n");             
			return 1;         
		}          
		printf("Basic salary: ");         
		if (scanf("%f", &ptr->basic) != 1 || ptr->basic < 0) 
		{             
			printf("Invalid basic salary.\n");             
			return 1;         
		}          
		calculateSalary(ptr);     
	}      
	for (i = 0; i < n; i++) 
	{         
		displaySlip(&employees[i]);     
	}      
	return 0; 
}  
