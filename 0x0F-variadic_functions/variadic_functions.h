#ifndef VAR_FUNC
#define VAR_FUNC
/* stdout */
int _putchar(char c);
/* ex 0 */
int sum_them_all(const unsigned int n, ...);
/* ex 1 */
void print_numbers(const char *separator, const unsigned int n, ...);
/* ex 2 */
void print_strings(const char *separator, const unsigned int n, ...);
/* ex 3 */
void print_all(const char * const format, ...);
/**
 * struct print_format - structure
 * @p: format
 * @f: function
 */
typedef struct print_format
{
	char *p;
	void (*f)();
} print;
#endif
