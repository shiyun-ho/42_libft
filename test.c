#include <stdio.h>
#include "libft.h"
#include <assert.h>
#include <ctype.h>


void test_ft_isalpha()
{
	unsigned char test_char; 
	
	printf(">>> Checking ft_is_alpha:\n");
	for (test_char = 'a'; test_char <= 'z'; test_char++){	
		printf("%c", test_char);
		int result = ft_isalpha(test_char);
		printf("%i", result);
	}

	printf("\n"); 

	for (test_char = 'a'; test_char <= 'z'; test_char++){	
		printf("%c", test_char);
		int std_result = isalpha(test_char);
		printf("%i", std_result);
	}

	printf("\n"); 
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
	test_ft_putchar_fd();

	return 0;
}

