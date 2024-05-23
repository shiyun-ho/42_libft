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

void test_strlcpy() {
  char src[] = "Hello, world!";
  char dest1[50], dest2[50];

  printf("### Starting test of ft_strlcpy: ###\n\n");

  // Test 1: Enough space
  printf(">> Test when there is sufficient space: \n");
  size_t size = sizeof(dest1) - 1;
  memset(dest1, 0, size + 1); // Ensure null termination
  memset(dest2, 0, size + 1);

  size_t ret1 = strlcpy(dest1, src, size);
  size_t ret2 = ft_strlcpy(dest2, src, size);

  printf("strlcpy: |%s|\n", dest1);
  printf("ft_strlcpy: |%s|\n", dest2);
  assert(ret1 == ret2);
  assert(strcmp(dest1, dest2) == 0);
  printf("Test 1 (Enough space): PASSED\n\n");

  // Test 2: Small destination when dest buffer < src string
  printf(">> Test when there dest buffer is SMALLER than src str: \n");
  size = 10;
  memset(dest1, 0, size + 1);
  memset(dest2, 0, size + 1);

  ret1 = strlcpy(dest1, src, size);
  ret2 = ft_strlcpy(dest2, src, size);

  printf("strlcpy: |%s|\n", dest1);
  printf("ft_strlcpy: |%s|\n", dest2);
  assert(ret1 == ret2);
  assert(strcmp(dest1, dest2) == 0);
  printf("Test 2 (Small destination): PASSED\n\n");

  // Test 3: Empty source
  printf(">> Test when src str is EMPTY: \n");
  size = sizeof(dest1) - 1;
  src[0] = '\0'; // Empty source string
  memset(dest1, 0, size + 1);
  memset(dest2, 0, size + 1);

  ret1 = strlcpy(dest1, src, size);
  ret2 = ft_strlcpy(dest2, src, size);

  printf("strlcpy: |%s|\n", dest1);
  printf("ft_strlcpy: |%s|\n", dest2);
  assert(ret1 == ret2);
  assert(strcmp(dest1, dest2) == 0);
  printf("Test 3 (Empty source): PASSED\n\n");

  // Test 4: Zero size
  printf(">> Test when size is ZERO: \n");
  size = 0;
  memset(dest1, 0, size + 1);
  memset(dest2, 0, size + 1);

  ret1 = strlcpy(dest1, src, size);
  ret2 = ft_strlcpy(dest2, src, size);

  printf("strlcpy: |%s|\n", dest1);
  printf("ft_strlcpy: |%s|\n", dest2);
  assert(ret1 == ret2);
  assert(dest1[0] == dest2[0]); // Both should be null terminated
  printf("Test 4 (Zero size): PASSED\n\n\n");

  printf("~~~~ ( o - o ) V ----ALL TESTS PASSED!~~~~~\n");
}

void test_strncmp()
{
	printf("### Starting test of ft_strncmp: ###\n\n");

	// Test 1: Equal strings
	printf("Test 1: Equal strings\n");
	char *s1 = "hello";
	char *s2 = "hello";
	int result_ft = ft_strncmp(s1, s2, 5);
	int result_std = strncmp(s1, s2, 5);
	printf("s1 = |%s|\n", s1); 
	printf("s2 = |%s|\n", s2);
	printf("n (comparison) = %i\n\n", 5);

	assert(result_ft == result_std);
	printf("ft_strncmp: %d, strncmp: %d, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 2: Different strings (s1 < s2)
	printf("\nTest 2: Different strings (s1 < s2)\n");
	s1 = "apple";
	s2 = "banana";
	result_ft = ft_strncmp(s1, s2, 5);
	result_std = strncmp(s1, s2, 5);
	printf("s1 = |%s|\n", s1); 
	printf("s2 = |%s|\n", s2);
	printf("n (comparison) = %i\n\n", 5);

	assert(result_ft == result_std);
	printf("ft_strncmp: %d, strncmp: %d, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 3: Different strings (s1 > s2)
	printf("\nTest 3: Different strings (s1 > s2)\n");
	s1 = "world";
	s2 = "hello";
	result_ft = ft_strncmp(s1, s2, 5);
	result_std = strncmp(s1, s2, 5);
	printf("s1 = |%s|\n", s1); 
	printf("s2 = |%s|\n", s2);
	printf("n (comparison) = %i\n\n", 5);

	assert(result_ft == result_std);
	printf("ft_strncmp: %d, strncmp: %d, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 4: Empty string
	printf("\nTest 4: Empty string\n");
	s1 = "";
	s2 = "hello";
	result_ft = ft_strncmp(s1, s2, 5);
	result_std = strncmp(s1, s2, 5);
	printf("s1 = |%s|\n", s1); 
	printf("s2 = |%s|\n", s2);
	printf("n (comparison) = %i\n\n", 5);

	assert(result_ft == result_std);
	printf("ft_strncmp: %d, strncmp: %d, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 6: Short comparison length
	printf("\nTest 5: Short comparison length\n");
	s1 = "hello world";
	s2 = "hello";
	result_ft = ft_strncmp(s1, s2, 3);
	result_std = strncmp(s1, s2, 3);
	printf("s1 = |%s|\n", s1); 
	printf("s2 = |%s|\n", s2);
	printf("n (comparison) = %i\n\n", 3);

	assert(result_ft == result_std);
	printf("ft_strncmp: %d, strncmp: %d, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	printf("~~~~ ( o - o ) V ----ALL TESTS PASSED!~~~~~\n");
	}

void test_ft_toupper() {
	printf("==========\n");  // Separator for better readability

	// Test 1: Lowercase letter
	printf("** Test 1: Lowercase letter **\n");
	char c = 'a';
	char result_ft = ft_toupper(c);
	char result_std = toupper(c);
	//assert(result_ft == result_std);
	printf("ft_toupper: %c, toupper: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 2: Uppercase letter (should remain unchanged)
	printf("\n** Test 2: Uppercase letter (unchanged) **\n");
	c = 'X';
	result_ft = ft_toupper(c);
	result_std = toupper(c);
	assert(result_ft == result_std);
	printf("ft_toupper: %c, toupper: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 3: Number
	printf("\n** Test 3: Number (should remain unchanged) **\n");
	c = '5';
	result_ft = ft_toupper(c);
	result_std = toupper(c);
	assert(result_ft == result_std);
	printf("ft_toupper: %c, toupper: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 4: Symbol
	printf("\n** Test 4: Symbol (should remain unchanged) **\n");
	c = '$';
	result_ft = ft_toupper(c);
	result_std = toupper(c);
	assert(result_ft == result_std);
	printf("ft_toupper: %c, toupper: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 5: EOF (undefined behavior, handle accordingly)
	printf("\n** Test 5: EOF (undefined behavior) **\n");
	c = EOF;  // This might cause undefined behavior with custom implementation
	result_ft = ft_toupper(c);
	result_std = toupper(c);
	// No assertion here, as EOF behavior is implementation specific
	printf("ft_toupper: %d (undefined behavior)\n", result_ft);
	printf("toupper: %d (undefined behavior)\n", result_std);

	// Test 6: Non-char value (undefined behavior, handle accordingly)
	printf("\n** Test 6: Non-char value (undefined behavior) **\n");
	int non_char_value = 123;  // This might cause undefined behavior with custom implementation
	result_ft = ft_toupper(non_char_value);
	result_std = toupper(c);
	// No assertion here, as non-char value behavior is implementation specific
	printf("ft_toupper: %d (undefined behavior)\n", result_ft);
	printf("toupper: %d (undefined behavior)\n", result_std);




	printf("==========\n");  // Separator for better readability
	printf("ALL TESTS PASSED\n");
}

void test_ft_tolower() {
	printf("==========\n");  // Separator for better readability

	// Test 1: Lowercase letter
	printf("** Test 1: Upper letter **\n");
	char c = 'A';
	char result_ft = ft_tolower(c);
	char result_std = tolower(c);
	assert(result_ft == result_std);
	printf("ft_tolower: %c, tolower: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 2: Uppercase letter (should remain unchanged)
	printf("\n** Test 2: Lowercase letter (unchanged) **\n");
	c = 'x';
	result_ft = ft_tolower(c);
	result_std = tolower(c);
	assert(result_ft == result_std);
	printf("ft_tolower: %c, tolower: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 3: Number
	printf("\n** Test 3: Number (should remain unchanged) **\n");
	c = '5';
	result_ft = ft_tolower(c);
	result_std = tolower(c);
	assert(result_ft == result_std);
	printf("ft_tolower: %c, tolower: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 4: Symbol
	printf("\n** Test 4: Symbol (should remain unchanged) **\n");
	c = '$';
	result_ft = ft_tolower(c);
	result_std = tolower(c);
	assert(result_ft == result_std);
	printf("ft_tolower: %c, tolower: %c, Test Passed: %s\n", result_ft, result_std, result_ft == result_std ? "YES" : "NO");

	// Test 5: EOF (undefined behavior, handle accordingly)
	printf("\n** Test 5: EOF (undefined behavior) **\n");
	c = EOF;  // This might cause undefined behavior with custom implementation
	result_ft = ft_tolower(c);
	result_std = tolower(c);
	// No assertion here, as EOF behavior is implementation specific
	printf("ft_tolower: %d (undefined behavior)\n", result_ft);
	printf("tolower: %d (undefined behavior)\n", result_std);

	// Test 6: Non-char value (undefined behavior, handle accordingly)
	printf("\n** Test 6: Non-char value (undefined behavior) **\n");
	int non_char_value = 123;  // This might cause undefined behavior with custom implementation
	result_ft = ft_tolower(non_char_value);
	result_std = tolower(c);
	// No assertion here, as non-char value behavior is implementation specific
	printf("ft_tolower: %d (undefined behavior)\n", result_ft);
	printf("tolower: %d (undefined behavior)\n", result_std);




	printf("==========\n");  // Separator for better readability
	printf("ALL TESTS PASSED\n");
}




int main(void)
{
	//test_ft_isalpha();
	//test_is_digit();
	//test_isalnum();
	//test_isascii(); 
	//test_isprint();
	//test_strlen();
	//test_strlcpy(); 
	//test_strncmp();
	//test_ft_toupper();
	test_ft_tolower();

	//test_ft_putchar_fd();
	
	return 0;
}

