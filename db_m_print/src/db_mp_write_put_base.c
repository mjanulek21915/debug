#include "db_m_print.h"

int static			db_mp_put_base_recursive(long long n, char *base, int len_base)
{
	long long temp;
	int i;

	i = 0;
	temp = n % len_base;
	if (n > len_base - 1)
		i += db_mp_put_base_recursive(n / len_base, base, len_base);
	write(1, &(base[temp]), 1);
	return (i + 1);
}

int				db_mp_write_put_base(long long n, char *base)
{
	int len_base;
	int rst;

	rst = 0;
	len_base = db_mp_strlen(base);
	return (db_mp_put_base_recursive(n, base, len_base));
}