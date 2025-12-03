#include <stdio.h>
struct Book
{
    int book_id;
    char title[30];
    char author[30];
    float price;
};
void printBook(struct Book b)
{
    printf("\nBook ID: %d", b.book_id);
    printf("\nTitle: %s", b.title);
    printf("\nAuthor: %s", b.author);
    printf("\nPrice: %.2f", b.price);
}

int main()
{
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);

    printf("Enter Title: ");
    scanf("%s", b.title);

    printf("Enter Author: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printBook(b);

    return 0;
}
