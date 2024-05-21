#include <stdio.h>
#include "libft.h"
#include <assert.h>
#include <ctype.h>
#include <string.h>

void test_ft_isalpha()
{
	unsigned int test_char; 
	unsigned int test_char2; 

	printf(">>> Checking ft_is_alpha:\n");

	printf("> Checking against alphabets (check if it returns non zero values):\n");
	for (test_char = 'a'; test_char <= 'z'; test_char++){	
		printf("%c", test_char);
		int result = (int) ft_isalpha(test_char);
		printf("%i", result);
	}
	printf("\n"); 

	for (test_char2 = 'a'; test_char2 <= 'z'; test_char2++){	
		printf("%c", test_char2);
		int std_result = (int) isalpha(test_char2);
		printf("%i", std_result);
	}
	printf("\n\n"); 

	printf("> Checking against non-alphabets (check if it returns zero values):\n");
	for (test_char = '!'; test_char <= '@'; test_char++){	
		printf("%c:", test_char);
		int result = (int) ft_isalpha(test_char);
		printf("%i ", result);
	}
	printf("\n"); 

	for (test_char2 = '!'; test_char2 <= '@'; test_char2++){	
		printf("%c:", test_char2);
		int std_result = (int) isalpha(test_char2);
		printf("%i ", std_result);
	}
	printf("\n\n"); 
}

void test_is_digit()
{
	int c;
	printf(">>> Checking ft_is_digit:\n");

	printf("> Checking digits 0 - 9\nCustom:\n");
	for (c = '0'; c <= '9'; c++)
	{
		printf("%i:", c);
		int result = (int) ft_isdigit(c); 
		printf("%i	", result);
	}
	printf("\n\nStd:\n"); 
	for (c = '0'; c <= '9'; c++)
	{
		printf("%i:", c);
		int result = (int) isdigit(c); 
		printf("%i	", result);
	}
	
	printf("\n\n\n");

	printf("> Checking symbols ! - @(Includes '0' - '9')\nCustom:\n");
	for (c = '!'; c <= '@'; c++)
	{
		printf("%i:", c); 
		int result = (int) ft_isdigit(c); 
		printf("%i	", result);
	}
	printf("\n");
	printf(">  Checking symbols ! - @(Includes '0' - '9')\nStd:\n");
	for (c = '!'; c <= '@'; c++)
	{
		printf("%i:", c); 
		int std_result = (int) isdigit(c); 
		printf("%i	", std_result);
	}

	printf("\n\n");
}

void test_isalnum()
{
	printf(">>> Checking ft_isalnum:\n");
	printf("\nTesting series of symbols - Should return 0 \n"); 
	printf("\nCustom Lib:\n");
	for (int c = '!'; c <= '/'; c++)
	{
		printf("%i:", c);
		int result = ft_isalnum(c); 
		printf("%i	", result);
	}
	printf("\nStd lib:\n");
	for (int c = '!'; c <= '/'; c++)
	{
		printf("%i:", c);
		int std_result = isalnum(c); 
		printf("%i	", std_result);
	}
	
	printf("\n\n");

	printf("\nTesting 0 - 9; series of symbols, A- Z --> Should return 1\n"); 
	printf("\nCustom Lib:\n");
	for (int c = '0'; c <= 'Z'; c++)
	{
		printf("%i:", c);
		int result = ft_isalnum(c); 
		printf("%i	", result);
	}
	printf("\nStd lib:\n");
	for (int c = '0'; c <= 'Z'; c++)
	{
		printf("%i:", c);
		int std_result = isalnum(c); 
		printf("%i	", std_result);
	}
}

void test_isascii()
{
	int testChar; 

	printf("#####Checking ft_isascii:#####\n"); 

	printf(">Checking agst ascii:\nCustom:\n"); 
	for (testChar = 0; testChar <= 127; testChar++){
		printf("%i:", testChar);
		printf("%i	", ft_isascii(testChar));
	}
	printf("\n\nStandard:\n"); 
	for (testChar = 0; testChar <= 127; testChar++){
		printf("%i:", testChar);
		printf("%i	", isascii(testChar));
		//assert(ft_isascii(testChar) && isascii(testChar));
	}
	printf("\n\n"); 

	printf(">Checking agst non-ascii:\nCustom\n");
	for (testChar = 128; testChar <= 255; testChar++){
		printf("%i:", testChar);
		printf("%i	", ft_isascii(testChar));
		//assert(ft_isascii(testChar) && isascii(testChar));
	}
	printf("\n\nStandard:\n"); 
	for (testChar = 128; testChar <= 255; testChar++){
		printf("%i:", testChar);
		printf("%i	", isascii(testChar));
		//assert(ft_isascii(testChar) && isascii(testChar));
	}

}

void test_isprint()
{
	unsigned int testChar;

	printf("###Checking ft_isprint:###\n");
	
	printf(">Checking agst printable char:\nCustom:\n"); 
	for (testChar = 33; testChar <= 126; testChar++){
		printf("%i:", testChar);
		printf("%i	", ft_isprint(testChar));
	}
	printf("\n\nStandard:\n"); 
	for (testChar = 33; testChar <= 126; testChar++){
		printf("%i:", testChar);
		printf("%i	", isprint(testChar));
	}
	printf("\n\n"); 

	printf(">Checking agst non-printable char:\nCustom\n");
	for (testChar = 0; testChar <= 32; testChar++){
		printf("%i:", testChar);
		printf("%i	", ft_isprint(testChar));
	}
	printf("\n\nStandard:\n"); 
	for (testChar = 0; testChar <= 32; testChar++){
		printf("%i:", testChar);
		printf("%i	", isprint(testChar));
	}

}

void test_strlen()
{
	printf("### Starting test of ft_strlen ###\n");
	char str[50] = "Hello World! ";

	printf(">>> Testing |%s|\n\n", str);
	printf("Length of string str(ft_strlen) = %zu \n", ft_strlen(str));
	printf("Length of string str(strlen) = %zu \n\n\n", strlen(str));

	char str1[50] = "";
	printf(">>> Testing |%s|\n\n", str1);
	printf("Length of string str1(ft_strlen) = %zu \n", ft_strlen(str1));
	printf("Length of string str1(strlen) = %zu \n\n\n", strlen(str1));

	char *str2 = NULL;
	printf(">>> Testing |%s|\n\n", str2);
	printf("Length of string str2(ft_strlen) = %zu \n", ft_strlen(str2));
	printf("Length of string str2(strlen) = %zu \n\n\n", strlen(str2));
}

void test_ft_putchar_fd()
{
	printf(">>> Checking ft_putchar_fd:\n");
	
	char testChar;

	printf(">ft_putchar_fd: \n");
	for (testChar = '!'; testChar <= '~'; testChar++)
	{
		ft_putchar_fd(testChar, 1);
	}
	
	printf("\n>putchar: \n");
	for (testChar = '!'; testChar <= '~'; testChar++)
	{
		putchar(testChar);
	}
}

int main(void)
{
	//test_ft_isalpha();
	//test_is_digit();
	//test_isalnum();
	//test_isascii(); 
	//test_isprint();
	//test_strlen();


	//test_ft_putchar_fd();
	
	return 0;
}

