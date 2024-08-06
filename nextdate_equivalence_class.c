#include <stdio.h>

int check(int day, int month)
{
    return (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11));
}

int isleap(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main()
{
    int day, month, year, tomm_day, tomm_month, tomm_year;
    char flag;

    do
    {
        flag = 'y';
        printf("\nEnter today's date (dd mm yyyy): ");
        scanf("%d%d%d", &day, &month, &year);

        if (day < 1 || day > 31)
        {
            printf("Day must be in the range 1...31\n");
            flag = 'n';
        }
        if (month < 1 || month > 12)
        {
            printf("Month must be in the range 1...12\n");
            flag = 'n';
        }
        else if (check(day, month))
        {
            printf("Invalid day for the month\n");
            flag = 'n';
        }
        if (year <= 1812 || year > 2013)
        {
            printf("Year must be in the range 1812...2013\n");
            flag = 'n';
        }
        if (month == 2)
        {
            if ((isleap(year) && day > 29) || (!isleap(year) && day > 28))
            {
                printf("Invalid date for February\n");
                flag = 'n';
            }
        }
    } while (flag == 'n');

    tomm_day = day + 1;
    tomm_month = month;
    tomm_year = year;

    if ((month == 2 && ((isleap(year) && day == 29) || (!isleap(year) && day == 28))) ||
        (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)) ||
        (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) ||
        (day == 31 && month == 12))
    {
        tomm_day = 1;
        tomm_month = (month % 12) + 1;
        if (month == 12)
        {
            if (year == 2013)
            {
                printf("The next day is out of boundary value of year\n");
            }
            else
            {
                tomm_year = year + 1;
            }
        }
    }

    printf("Next day is: %d %d %d\n", tomm_day, tomm_month, tomm_year);
    return 0;
}
