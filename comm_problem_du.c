#include <stdio.h>

int main()
{
    int locks, stocks, barrels, tlocks, tstocks, tbarrels;
    float lprice, sprice, bprice, lsales, ssales, bsales, sales, comm;
    lprice = 45.0;
    sprice = 30.0;
    bprice = 25.0;
    tlocks = 0;
    tstocks = 0;
    tbarrels = 0;
    printf("Enter the number of locks or enter -1 to exit : \n");
    scanf("%d", &locks);
    while (locks != -1)
    {
        printf("Enter the number of stocks and barrels: \n");
        scanf("%d%d", &stocks, &barrels);
        tlocks += locks;
        tstocks += stocks;
        tbarrels += barrels;
        printf("Enter the number of locks or enter -1 to exit : \n");
        scanf("%d", &locks);
    }
    printf("\nTotal locks : %d\n", tlocks);
    printf("Total stocks : %d\n", tstocks);
    printf("Total barrels: %d\n", tbarrels);
    lsales = lprice * tlocks;
    ssales = sprice * tstocks;
    bsales = bprice * tbarrels;
    sales = lsales + ssales + bsales;
    printf("Sales : %f\n", sales);
    if (sales > 1800.0)
    {
        comm = 0.10 * 1000.0;
        comm += (0.15 * 800);
        comm += (0.20 * (sales - 1800.0));
    }
    else if (sales > 1000)
    {
        comm = 0.10 * 1000.0;
        comm += (0.15 * (sales - 1000.0));
    }
    else
    {
        comm = 0.10 * sales;
    }
    printf("The commission is : %f\n", comm);
}