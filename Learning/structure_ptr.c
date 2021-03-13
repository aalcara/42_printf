#include <stdio.h>

int main(void)
{
	struct student
	{
		char name[25];
		int age;
	};

	struct student anil = {"Anil", 30};

	printf("Name = %s, Age = %d\n", anil.name, anil.age);

	struct student *ptr;
	ptr = &anil;
	(*ptr).age = 200;
	printf("Name = %s, Age = %d\n", anil.name, anil.age);

	ptr -> age = 10;
	printf("Name = %s, Age = %d\n", anil.name, anil.age);

	return 0;
}
