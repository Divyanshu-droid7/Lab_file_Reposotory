#include <stdio.h>

union Address
{
    char name[30];
    char home_address[50];
    char hostel_address[50];
    char city[20];
    char state[20];
    char zip[10];
};

int main()
{
    union Address a;

    printf("Present Address:\n");

    printf("Name: ");
    scanf("%s", a.name);
    printf("%s\n", a.name);

    printf("Hostel Address: ");
    scanf("%s", a.hostel_address);
    printf("%s\n", a.hostel_address);

    printf("City: ");
    scanf("%s", a.city);
    printf("%s\n", a.city);

    printf("State: ");
    scanf("%s", a.state);
    printf("%s\n", a.state);

    printf("ZIP: ");
    scanf("%s", a.zip);
    printf("%s\n", a.zip);

    return 0;
}
