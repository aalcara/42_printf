#include <stdio.h>

typedef struct adress
{
	int			number;
	char		*street;
	char		*city;
	long int	CODE;
} T_ADRESS;

typedef struct personal_data
{
	char		*name;
	long int	phone;
	T_ADRESS	adress;
} T_DATA;

void print_data(T_DATA example)
{
	printf("name:\t%s\nphone:\t%li\n", example.name, example.phone);
	printf("\nAdress:\nnumber:\t%d\nstreet:\t%s\ncity:\t%s\npost code:\t%li\n",
	example.adress.number,example.adress.street, example.adress.city, example.adress.CODE);
	return;
}

int main(void)
{
	T_DATA		example;
	T_DATA		*ptr;

	ptr = &example;
	//(*ptr).name = 123123;
	example.name = "Joao Batista";
	example.phone = 325236534;
	example.adress.number = 641;
	example.adress.street = "NULL";
	ptr->adress.street = "6th avenue";
	example.adress.city = "Kansas";
	example.adress.CODE = 189562354;
	print_data(example);
	return 0;
}
