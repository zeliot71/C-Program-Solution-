#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX_MOVIES 10
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 100
#define MAX_MOBILE_LENGTH 15
FILE *fp2;


struct user
{
    char username[100], password[100];
};
// Structure to store movie information
struct Movie {
    int id;
    char name[MAX_NAME_LENGTH];
    char genre[MAX_NAME_LENGTH];
    double price;
};

// Structure to store booking information
struct Booking {
    char name[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char mobile[MAX_MOBILE_LENGTH];
    int ticketCount;
    double totalPrice;
};

int movieCount = 0;
struct Movie movies[MAX_MOVIES];

// Function to add a new movie
void addMovie() {
    system("cls");
    if (movieCount >= MAX_MOVIES) {
        printf("Maximum number of movies reached!\n");
        return;
    }

    printf("Enter movie name: ");
    scanf("%s", movies[movieCount].name);

    printf("Enter movie genre: ");
    scanf("%s", movies[movieCount].genre);

    printf("Enter movie price: ");
    scanf("%lf", &movies[movieCount].price);

    movies[movieCount].id = movieCount + 1;
    movieCount++;
    printf("Movie added successfully!\n");
}

// Function to display movie list
void displayMovies() {
    system("cls");
    if (movieCount == 0) {
        printf("No movies available.\n");
        return;
    }

    printf("\n======================= Movie List ========================\n");
    printf("%-5s%-30s%-20s%-10s\n", "ID", "Name", "Genre", "Price");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < movieCount; i++) {
        printf("%-5d%-30s%-20s$%.2lf\n", movies[i].id, movies[i].name, movies[i].genre, movies[i].price);
    }

    printf("============================================================\n");
}

void displayMovies2() {
     system("cls");
    if (movieCount == 0) {
        printf("No movies available.\n");
        return;
    }

    printf("\n======================= Movie List ========================\n");
    printf("%-5s%-30s%-20s%-10s\n", "ID", "Name", "Genre", "Price");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < movieCount; i++) {
        printf("%-5d%-30s%-20s$%.2lf\n", movies[i].id, movies[i].name, movies[i].genre, movies[i].price);
    }

    printf("============================================================\n");
}

// Function to calculate ticket price
double calculateTicketPrice(double moviePrice, int ticketCount) {
    return moviePrice * ticketCount;
}

// Function to generate a creative bill
void generateBill(struct Booking booking, struct Movie movie) {
    system("cls");
    printf("\n==================== Movie Ticket Booking Receipt ====================\n");
    printf("Movie: %s\n", movie.name);
    printf("Genre: %s\n", movie.genre);
    printf("Price per Ticket: $%.2lf\n", movie.price);
    printf("Number of Tickets: %d\n", booking.ticketCount);
    printf("Total Amount: $%.2lf\n", booking.totalPrice);
    printf("Booking Name: %s\n", booking.name);
    printf("Email: %s\n", booking.email);
    printf("Mobile Number: %s\n", booking.mobile);
    printf("=======================================================================\n");
}

int main() {
    int choice;
    struct Booking booking;
    int selectedMovie; // Declare selectedMovie here
    struct user admin;
    char un[100], up[100];
      fp2 = fopen("login.txt", "r+");
            if (fp2 == NULL)
            {
                    printf("Error opening file\n");
                    return 1;
            }
            int i = 0;
            while (fscanf(fp2, "%s %s", admin.username, admin.password) != EOF)
            {
                    i++;
            }
            fclose(fp2);

    printf("Please Enter User Name: ");
    fgets(un, sizeof(un), stdin);
    un[strcspn(un, "\n")] = '\0';

    printf("Please Enter Password: ");
    fgets(up, sizeof(up), stdin);
    up[strcspn(up, "\n")] = '\0';

   if (strcmp(un, admin.username) == 0 && strcmp(up, admin.password) == 0)
    {
        printf("Login Successful!\n\n");
        system("cls");

    while (1) {

        printf("\n==================== Ticket Booking System ====================\n");
        printf("1. Add Movie\n");
        printf("2. View Movie List\n");
        printf("3. Book Tickets\n");
        printf("4. Generate Bill\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie();
                break;
            case 2:
                displayMovies2();
                break;
            case 3:
                if (movieCount == 0) {
                    printf("No movies available for booking.\n");
                } else {
                    displayMovies();
                    printf("Enter the movie ID to book tickets: ");
                    scanf("%d", &selectedMovie);

                    if (selectedMovie >= 1 && selectedMovie <= movieCount) {
                        printf("Enter your name: ");
                        scanf("%s", booking.name);

                        printf("Enter your email: ");
                        scanf("%s", booking.email);

                        printf("Enter your mobile number: ");
                        scanf("%s", booking.mobile);

                        printf("Enter the number of tickets: ");
                        scanf("%d", &booking.ticketCount);

                        booking.totalPrice = calculateTicketPrice(movies[selectedMovie - 1].price, booking.ticketCount);
                        printf("Total Amount: $%.2lf\n", booking.totalPrice);

                        // Additional steps like confirming the booking and saving it can be added here.
                    } else {
                        printf("Invalid movie ID.\n");
                    }
                }
                break;
            case 4:
                if (booking.totalPrice > 0) {
                    generateBill(booking, movies[selectedMovie - 1]);
                    printf("Bill generated successfully!\n");
                } else {
                    printf("No booking made yet. Please book tickets first.\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
else
{
    printf("Invalid Username or Password! Try again..");
}
}

