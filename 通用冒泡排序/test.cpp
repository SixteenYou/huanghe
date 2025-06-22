#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//Í¨ÓÃÃ°ÅÝÅÅÐò
typedef struct stu {
	char name[10];
	int year;
}stu;
int cmp_int(const void* arr1, const void* arr2)
{
	int a = *((int*)arr1);
	int b = *((int*)arr2);
	return (a > b) - (a < b);
}
int cmp_double(const void* arr1, const void* arr2)
{
	if (*(double*)arr1 > *(double*)arr2)
		return 1;
	else if (*(double*)arr1 < *(double*)arr2)
		return -1;
	else
		return 0;
}
int cmp_stu_int(const void* arr1, const void* arr2)
{
	return ((stu*)arr1)->year - ((stu*)arr2)->year;
}
int cmp_stu_name(const void* arr1, const void* arr2)
{
	return strcmp(((stu*)arr1)->name, ((stu*)arr2)->name);
}
void my_qsort(void* yuan, int num, int kuandu, int cmp(const void* arr1, const void* arr2))
{
	int temp;
	for (int i = 0;i < num;i++)
	{
		temp = 1;
		for (int j = 0;j < num - i - 1;j++)
		{
			if (cmp((char*)yuan + j * kuandu, (char*)yuan + (j + 1) * kuandu) > 0)
			{
				temp = 0;
				for (int k = 0;k < kuandu;k++)
				{
					char tmp;
					char* ptmp = &tmp;
					*ptmp = *((char*)yuan + j * kuandu + k);
					*((char*)yuan + j * kuandu + k) = *((char*)yuan + (j + 1) * kuandu + k);
					*((char*)yuan + (j + 1) * kuandu + k) = *ptmp;
				}
			}
		}
		if (temp)
			break;
	}
}
int main()
{
	int arr1[] = { 345,453,564,7,80,789,567,56,354,675 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	double arr2[] = { 564.5,87.43,456.67,345.89,56.3,87.67,678.23,546.56,56.234,35.45 };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	stu arr3[] = { {"wang",25},{"li",45},{"zhang",43},{"qiu",28},{"su",65} };
	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
	my_qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);
	my_qsort(arr2, sz2, sizeof(arr2[0]), cmp_double);
	my_qsort(arr3, sz3, sizeof(arr3[0]), cmp_stu_int);
	for (int i = 0;i < sz1;i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (int i = 0;i < sz2;i++)
		printf("%.2lf ", arr2[i]);
	printf("\n");
	for (int i = 0;i < sz3;i++)
	{
		printf("%s\n", arr3[i].name);
		printf("%d\n", arr3[i].year);
	}
	my_qsort(arr3, sz3, sizeof(arr3[0]), cmp_stu_name);
	printf("\n");
	for (int i = 0;i < sz3;i++)
	{
		printf("%s\n", arr3[i].name);
		printf("%d\n", arr3[i].year);
	}
	return 0;
}