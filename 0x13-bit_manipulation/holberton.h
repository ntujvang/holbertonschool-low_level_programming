#ifndef HOLBERTON_H
#define HOLBERTON_H
/* stdout */
int _putchar(char c);
/* ex 0 */
unsigned int binary_to_uint(const char *b);
/* ex 1 */
void print_binary(unsigned long int n);
/* ex 2 */
int get_bit(unsigned long int n, unsigned int index);
/* ex 3 */
int set_bit(unsigned long int *n, unsigned int index);
/* ex 4 */
int clear_bit(unsigned long int *n, unsigned int index);
/* ex 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
