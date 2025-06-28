#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char *fileName = "hotel_data.txt";

struct Customer {
    int id;
    char firstname[50];
    char lastname[50];
    char gender[10];
    char checkin[12];
    char checkout[12];
    char contactNumber[12];
    char aadhar[15];
    char payment[6];
};

void addRecord();
void viewRecords();
void searchRecord();
void modifyRecord();
void deleteRecord();

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    int choice;
    printf("\nHotel Management System\n");
    printf("1. Add Record\n");
    printf("2. View Records\n");
    printf("3. Search Record\n");
    printf("4. Modify Record\n");
    printf("5. Delete Record\n");
    printf("6. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                searchRecord();
                break;
            case 4:
                modifyRecord();
                break;
            case 5:
                deleteRecord();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addRecord() {
    struct Customer customer;
    FILE *file = fopen(fileName, "a+");

    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    int lastId = 100;
    struct Customer temp;
    while (fscanf(file, "%d", &temp.id) == 1) {
        fscanf(file, "%*[^\n]");
        lastId = temp.id;
    }

    customer.id = lastId + 1;

    printf("Enter First Name: ");
    scanf(" %s", customer.firstname);
    printf("Enter Last Name: ");
    scanf(" %s", customer.lastname);
    printf("Enter Gender: ");
    scanf(" %s", customer.gender);
    printf("Enter Check In date (DD/MM/YYYY): ");
    scanf(" %s", customer.checkin);
    printf("Enter Check Out date (DD/MM/YYYY): ");
    scanf(" %s", customer.checkout);
    printf("Enter Contact Number: ");
    scanf(" %s", customer.contactNumber);
    printf("Enter Aadhar Card Number: ");
    scanf(" %s", customer.aadhar);
    printf("Enter Payment Mode (Card, Cash, UPI): ");
    scanf(" %s", customer.payment);

    fprintf(file, "%d %s %s %s %s %s %s %s %s\n", customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment);

    fclose(file);
    printf("Record added successfully with ID: %d\n\n", customer.id);
}

void viewRecords() {
    struct Customer customer;
    FILE *file = fopen(fileName, "r");

    if (!file) {
        printf("Error opening file or no records found!\n");
        return;
    }

    printf("\nCustomer Records:\n");
    printf("ID   First Name     Last Name      Gender         Check In          Check Out         Mobile No.         Aadhar No.      Mode Of Payment\n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n");

    while (fscanf(file, "%d %s %s %s %s %s %s %s %s", &customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment) == 9) {
        printf("%-4d %-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n", customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment);
    }

    fclose(file);
}

void searchRecord() {
    struct Customer customer;
    int searchId, choice, found = 0;
    char fname[50], lname[50];
    FILE *file = fopen(fileName, "r");

    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    printf("Search by:\n1. ID\n2. Name\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the ID to search: ");
        scanf("%d", &searchId);
        while (fscanf(file, "%d %s %s %s %s %s %s %s %s", &customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment) == 9) {
            if (customer.id == searchId) {
                printf("\nRecord Found:\n");
                printf("ID: %d\nFirst Name: %s\nLast Name: %s\nGender: %s\nCheck In: %s\nCheck Out: %s\nMobile Number: %s\nAadhar Number: %s\nMode of Payment: %s\n\n",
                       customer.id, customer.firstname, customer.lastname, customer.gender, customer.checkin, customer.checkout, customer.contactNumber,customer.aadhar, customer.payment);
                found = 1;
                break;
            }
        }
    } else if (choice == 2) {
        printf("Enter the first name to search: ");
        scanf("%s", fname);
        printf("Enter the last name to search: ");
        scanf("%s", lname);
        toLowerCase(fname);
        toLowerCase(lname);

        while (fscanf(file, "%d %s %s %s %s %s %s %s %s", &customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment) == 9) {
            char tempFname[50], tempLname[50];
            strcpy(tempFname, customer.firstname);
            strcpy(tempLname, customer.lastname);
            toLowerCase(tempFname);
            toLowerCase(tempLname);

            if (strcmp(tempFname, fname) == 0 && strcmp(tempLname, lname) == 0) {
                printf("\nRecord Found:\n");
                printf("ID: %d\nFirst Name: %s\nLast Name: %s\nGender: %s\nCheck In: %s\nCheck Out: %s\nMobile Number: %s\nAadhar Number: %s\nMode of Payment: %s\n\n",
                       customer.id, customer.firstname, customer.lastname, customer.gender, customer.checkin, customer.checkout, customer.contactNumber,customer.aadhar, customer.payment);
                found = 1;
                break;
            }
        }
    } else {
        printf("Invalid choice!\n");
    }

    if (!found) {
        printf("Record not found!\n\n");
    }

    fclose(file);
}

void modifyRecord() {
    struct Customer customer;
    int searchId, choice, found = 0;
    char fname[50], lname[50];
    FILE *file = fopen(fileName, "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (!file || !tempFile) {
        printf("Error opening file!\n");
        return;
    }

    printf("Modify by:\n1. ID\n2. Name\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the ID of the record to modify: ");
        scanf("%d", &searchId);

        while (fscanf(file, "%d %s %s %s %s %s %s %s %s", &customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment) == 9) {
            if (customer.id == searchId) {
                printf("Enter First Name: ");
                scanf("%s", customer.firstname);
                printf("Enter Last Name: ");
                scanf("%s", customer.lastname);
                printf("Enter Gender: ");
                scanf("%s", customer.gender);
                printf("Enter Check In date (DD/MM/YYYY): ");
                scanf("%s", customer.checkin);
                printf("Enter Check Out date (DD/MM/YYYY): ");
                scanf("%s", customer.checkout);
                printf("Enter Contact Number: ");
                scanf("%s", customer.contactNumber);
                printf("Enter Aadhar Card Number: ");
                scanf("%s", customer.aadhar);
                printf("Enter Payment Mode (Card, Cash, UPI): ");
                scanf("%s", customer.payment);
                found = 1;
            }
            fprintf(tempFile, "%d %s %s %s %s %s %s %s %s\n", customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment);
        }
    } else if (choice == 2) {
        printf("Enter the first name of the record to modify: ");
        scanf("%s", fname);
        printf("Enter the last name of the record to modify: ");
        scanf("%s", lname);
        toLowerCase(fname);
        toLowerCase(lname);

        while (fscanf(file, "%d %s %s %s %s %s %s %s %s", &customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment) == 9) {
            char tempFname[50], tempLname[50];
            strcpy(tempFname, customer.firstname);
            strcpy(tempLname, customer.lastname);
            toLowerCase(tempFname);
            toLowerCase(tempLname);

            if (strcmp(tempFname, fname) == 0 && strcmp(tempLname, lname) == 0) {
                printf("Enter First Name: ");
                scanf("%s", customer.firstname);
                printf("Enter Last Name: ");
                scanf("%s", customer.lastname);
                printf("Enter Gender: ");
                scanf("%s", customer.gender);
                printf("Enter Check In date (DD/MM/YYYY): ");
                scanf("%s", customer.checkin);
                printf("Enter Check Out date (DD/MM/YYYY): ");
                scanf("%s", customer.checkout);
                printf("Enter Contact Number: ");
                scanf("%s", customer.contactNumber);
                printf("Enter Aadhar Card Number: ");
                scanf("%s", customer.aadhar);
                printf("Enter Payment Mode (Card, Cash, UPI): ");
                scanf("%s", customer.payment);
                found = 1;
            }
            fprintf(tempFile, "%d %s %s %s %s %s %s %s %s\n", customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment);
        }
    } else {
        printf("Invalid choice!\n");
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(fileName);
        rename("temp.txt", fileName);
        printf("Record modified successfully!\n\n");
    } else {
        remove("temp.txt");
        printf("Record not found!\n\n");
    }
}

void deleteRecord() {
    struct Customer customer;
    int id, found = 0;
    FILE *file = fopen(fileName, "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (!file || !tempFile) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter the ID number you want to delete: ");
    scanf("%d", &id);

    while (fscanf(file, "%d %s %s %s %s %s %s %s %s", &customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment) == 9) {
        if (customer.id != id) {
            fprintf(tempFile, "%d %s %s %s %s %s %s %s %s\n", customer.id, customer.firstname, customer.lastname, customer.gender,customer.checkin, customer.checkout, customer.contactNumber, customer.aadhar, customer.payment);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(fileName);
    rename("temp.txt", fileName);

    if (found) {
        printf("Record deleted successfully!\n\n");
    } else {
        printf("Record not found!\n\n");
    }
}
