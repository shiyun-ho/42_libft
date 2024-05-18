#include <stdio.h>
#include "libft.h"
#include <assert.h>
#include <ctype.h>


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
	unsigned int testChar; 

	printf(">>>Checking ft_isascii:\n"); 

	printf(">Checking agst ascii:\n"); 
	for (testChar = 0; testChar <= 127; testChar++){
		assert(ft_isascii(testChar) && isascii(testChar));
	}

	printf(">Checking agst non-ascii:\n");
	for (testChar = 128; testChar <= 255; testChar++){
		assert(ft_isascii(testChar) && isascii(testChar));
	}

	printf("All tests passed!\n"); 
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
	test_isascii(); 

	//test_ft_putchar_fd();
	
	return 0;
}

