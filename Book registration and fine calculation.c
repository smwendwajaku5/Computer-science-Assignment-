//program to calculate book registration
/*
//program to calculate book registration
Author :Stephen mwendwa 
Date:
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int , bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;
    

    // Overdue fine calculation
    printf("Enter book ID, due date, and return date: ");
    scanf("%d %d %d", &bookID, &dueDate, &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue 8<14) {
        fineRate = 50;
    } else (daysOverdue =>15) {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: %.2f Ksh per day\n", fineRate);
    printf("Fine Amount: %.2f Ksh\n", fineAmount);

    return 0;
    }
