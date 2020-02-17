#include <stdio.h>

int	ft_atoi(char *str)
{
	int result;
	int is_negative;
	int i;

	result = 0;
	is_negative = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		is_negative = -1;
		i++;
	}
	while(str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * is_negative);
}

int	main(void)
{
	int s1;
	int s2;
	int s3;
	int s4;
	int s5;
	int s6;
	int s7;
	int s8;
	char str1[] = "-42";
	char str2[] = "42";
	char str3[] = "5";
	char str4[] = "2147483647";
	char str5[] = "-2147483648";
	char str6[] = "     123";
	char str7[] = "\n    234";
	char str8[] = "\t   5678";
	s1 = ft_atoi(str1);
	s2 = ft_atoi(str2);
	s3 = ft_atoi(str3);
	s4 = ft_atoi(str4);
	s5 = ft_atoi(str5);
	s6 = ft_atoi(str6);
	s7 = ft_atoi(str7);
	s8 = ft_atoi(str8);

	printf("%d\n", s1);
	printf("%d\n", s2);
	printf("%d\n", s3);
	printf("%d\n", s4);
	printf("%d\n", s5);
	printf("%d\n", s6);
	printf("%d\n", s7);
	printf("%d\n", s8);
	return (0);
}
