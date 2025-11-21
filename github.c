#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_RECORDS 100

// Structure to hold taxpayer info
typedef struct {
    char name[MAX_NAME_LEN];
    double income;
    double tax;
    double netIncome;
} TaxPayer;

// Function to calculate tax based on slabs
double calculateTax(double income) {
    double tax = 0.0;

    if (income <= 250000) {
        tax = 0.0;  // No tax
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    } else {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }

    return tax;
}

// Function to add taxpayer record
void addTaxPayer(TaxPayer records[], int *count) {
    if (*count >= MAX_RECORDS) {
        printf("Record limit reached!\n");
        return;
    }

    TaxPayer tp;
    printf("Enter name: ");
    scanf("%s", tp.name);
    printf("Enter annual income: ");
    scanf("%lf", &tp.income);

    tp.tax = calculateTax(tp.income);
    tp.netIncome = tp.income - tp.tax;

    records[*count] = tp;
    (*count)++;

    printf("Record added successfully!\n\n");
}

// Function to display all records
void displayRecords(TaxPayer records[], int count) {
    printf("\n--- Taxpayer Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", records[i].name);
        printf("Income: %.2f\n", records[i].income);
        printf("Tax: %.2f\n", records[i].tax);
        printf("Net Income: %.2f\n", records[i].netIncome);
        printf("-------------------------\n");
    }
}

int main() {
    TaxPayer records[MAX_RECORDS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nTax Management System\n");
        printf("1. Add Taxpayer\n");
        printf("2. Display Records\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTaxPayer(records, &count);
                break;
            case 2:
                displayRecords(records, count);
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
 