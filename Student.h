// Student.h - Header file for Student class
#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

/**
 * @class Student
 * @brief Represents a student user in the library system.
 */
class Student : public User {
public:
    static const int maxAllowedBooks = 3;         ///< Maximum number of books a student can borrow.
    static const int maxBorrowingPeriod = 15;       ///< Maximum borrowing period in days (set to 1 to test fines quickly).
    static const int finePerDay = 10;               ///< Fine per day for overdue books.
    static const int overdueDaysLimit = 15;         ///< Overdue days limit (keep equal to maxBorrowingPeriod).

    /**
     * @brief Constructs a Student object.
     * @param name Student's name.
     * @param userID Student's unique identifier.
     * @param password Student's password.
     */
    Student(string name, string userID, string password);

    // Override pure virtual functions from User
    int getMaxBorrowingPeriod() override;
    int getMaxAllowedBooks() override;
    int getFinePerDay() override;
    int getOverdueLimit() override;
    bool canBorrowBook(Book* book) override;
    void displayCurrBorrowedBooks() override;

    /**
     * @brief Calculates the fine for a specific book.
     * @param book Pointer to the Book.
     * @return Fine amount for the book.
     */
    int getFineOfBook(Book* book);

    /**
     * @brief Displays the list of overdue books.
     */
    void displayOverdueBooks();

    /**
     * @brief Displays the payment history.
     */
    void displayPaymentHistory();
};

#endif // STUDENT_H
