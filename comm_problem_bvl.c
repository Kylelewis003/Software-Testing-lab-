#include <stdio.h>

int main() {
    int locks, stocks, barrels;
    int tlocks = 0, tstocks = 0, tbarrels = 0;
    float lprice = 45.0, sprice = 30.0, bprice = 25.0;
    float sales, comm;

    printf("\nEnter the number of locks. Enter -1 to exit:\n");
    scanf("%d", &locks);

    while (locks != -1) {
        int c1 = (locks <= 0 || locks > 70);

        if (c1) {
            printf("Locks should be between 1 and 70.\n");
        } else {
            tlocks += locks;
            printf("Total locks: %d\n", tlocks);
        }

        printf("Enter the number of stocks and barrels:\n");
        scanf("%d %d", &stocks, &barrels);

        int c2 = (stocks <= 0 || stocks > 80);
        int c3 = (barrels <= 0 || barrels > 90);

        if (c2) {
            printf("Stocks should be between 1 and 80.\n");
        } else {
            tstocks += stocks;
            printf("Total stocks: %d\n", tstocks);
        }

        if (c3) {
            printf("Barrels should be between 1 and 90.\n");
        } else {
            tbarrels += barrels;
            printf("Total barrels: %d\n", tbarrels);
        }

        printf("\nEnter the number of locks. Enter -1 to exit:\n");
        scanf("%d", &locks);
    }

    printf("\nTotal locks: %d\nTotal stocks: %d\nTotal barrels: %d\n", tlocks, tstocks, tbarrels);

    sales = lprice * tlocks + sprice * tstocks + bprice * tbarrels;
    printf("Total sales: %.2f\n", sales);

    if (sales > 0) {
        if (sales > 1800.0) {
            comm = 0.10 * 1000.0 + 0.15 * 800 + 0.20 * (sales - 1800.0);
        } else if (sales > 1000.0) {
            comm = 0.10 * 1000.0 + 0.15 * (sales - 1000.0);
        } else {
            comm = 0.10 * sales;
        }
        printf("Commission: %.2f\n", comm);
    } else {
        printf("No sales, no commission.\n");
    }

    return 0;
}

