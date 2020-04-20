#include "db_m_print.h"

void db_m_print(void *buff, char *fmt)
{
    int i;
    int count;
    char *fmt_ptr;
    void *temp;
    void *src;
    if (fmt_ptr = db_mp_iz_in("-c", fmt))
    {
        temp = buff;
        i = 0;
        if (*fmt_ptr == ' ')
            fmt_ptr++;
        // if ((count = db_mp_atoi(fmt_ptr)) < 1)
        //     count = 1;
        printf("%s\n", fmt_ptr);
        count = db_mp_atoi(fmt_ptr);
        printf("%d\n", count);
        while (i < count)
        {
            db_mp_write_int(temp);
            temp = temp + 4;
            i++;
            if (i < count)
                write(1, "|", 1);
        }
    }
    if (fmt_ptr = db_iz_in(-))
}