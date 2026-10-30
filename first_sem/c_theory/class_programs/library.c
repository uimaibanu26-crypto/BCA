#include <stdio.h>
#include <string.h>

// Just a simple structure to hold one book's details
struct Book {
    int id;                 // unique book id
    char name[50];          // title of the book
    char genre[30];         // like Fiction, Science, etc.
    char author[40];        // who wrote it
    int pages;              // number of pages
};

int main() {
    // We'll store up to 50 books for now
    struct Book library[50];
    int n, i;

    printf("How many books do you want to add? ");
    scanf("%d", &n);

    // Taking details for each book
    for(i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i+1);

        printf("Book ID: ");
        scanf("%d", &library[i].id);

        printf("Book Name: ");
        scanf(" %[^\n]", library[i].name);   // reading full name with spaces

        printf("Genre: ");
        scanf(" %[^\n]", library[i].genre);

        printf("Author: ");
        scanf(" %[^\n]", library[i].author);

        printf("Number of pages: ");
        scanf("%d", &library[i].pages);
    }

    // Just printing everything back so we can see it
    printf("\n----- All Books in Library -----\n");
    for(i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);
        printf("ID      : %d\n", library[i].id);
        printf("Name    : %s\n", library[i].name);
        printf("Genre   : %s\n", library[i].genre);
        printf("Author  : %s\n", library[i].author);
        printf("Pages   : %d\n", library[i].pages);
    }

    return 0;
}