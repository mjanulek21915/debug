#ifndef __DB_M_PRINT_H__
#define __DB_M_PRINT_H__

#define BASE10 "0123456789"

#include <stdio.h>
#include <unistd.h>

void db_mp_test();
void db_mp_test2();
char *db_mp_iz_in(char *needl, char *hayst);
int	db_mp_strlen(char *str);
void db_mp_write_int(void *buff);
int	db_mp_write_put_base(long long n, char *base);
void db_m_print(void *buff, char *fmt);
int db_mp_atoi(void *buff);





#endif