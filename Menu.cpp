#include "Menu.h"

#include <utility>

UserMenu::UserMenu(const User& user, const Database& db)
    : user{user}, db{db} {}

void UserMenu::start() {
    int choice;
    do {
        options();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                user.displayProfile();
                break;
            case 2:
                db.displayMovies();
                break;
            case 3:
                db.displaySeries();
                break;
            case 4:
                db.displayReviews();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);
}

void UserMenu::options() {
    cout << "Options for user " << user.getUsername() << endl;
    cout << "1. Display profile\n";
    cout << "2. See movies\n";
    cout << "3. See series\n";
    cout << "4. See reviews\n";
    cout << "5. Exit\n";
}

AdminMenu::AdminMenu(Admin admin, const Database& db)
    : admin{std::move(admin)}, db{db} {}

void AdminMenu::start() {
    int choice;
    do {
        options();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                admin.displayProfile();
                break;
            case 2:
                db.displayMovies();
                break;
            case 3:
                db.displaySeries();
                break;
            case 4:
                db.displayReviews();
                break;
            case 5:
                db.addMovie(Movie::createMovie());
                break;
            case 6:
                db.addSeries(Series::createSeries());
                break;
            case 7:
                db.addCritic(Critic::createCritic());
                break;
            case 8:
                db.addReviewForCritic();
                break;
            case 9:
                db.flushDB();
                break;
            case 10:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 10);
}

void AdminMenu::options() {
    cout << "Options for admin " << admin.getUsername() << endl;
    cout << "1. Display profile\n";
    cout << "2. See movies\n";
    cout << "3. See series\n";
    cout << "4. See reviews\n";
    cout << "5. Add movie\n";
    cout << "6. Add series\n";
    cout << "7. Add critic\n";
    cout << "8. Add review for critic\n";
    cout << "9. Flush database\n";
    cout << "10. Exit\n";
}
