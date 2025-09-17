/*
    Telephone Directory Console Application

    Semester - Spring-2024
    Section - 08
    Course - Data Structure
    Course Code - CSE207

    Group Members:
    - Nasibul Sazid(2022-3-60-014)
    - Hesney Hasin(2022-3-60-038)
    - Anika Tahseen(2022-3-60-037)
    - Arnab Barman(2022-3-60-010)

    Course Instructor:
    ~ Dr. Md. Atiqur Rahman
    ~ Assistant Professor,Department of CSE.
    ~ East West University
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char selected_menu = '0';
int totalContact = 0; 

struct Contacts {   
    char fullname[50];
    char address[100];
    char phoneNo[12];
    struct Contacts* next;
};

char fname[50];
char add[100];
char phNo[12];

struct Contacts* root = NULL;  

void addContact();
bool verifyNumber(struct Contacts *_root, char *_phNo);
bool verifyName(struct Contacts *_root, char *_fName);

void deleteContact(struct Contacts *_root);
void deleteByNumber(struct Contacts *_numAdd);
void deleteByName(struct Contacts *_numAdd);

void searchContacts();
void searchByName(struct Contacts *_root);
void searchByNumber(struct Contacts *_root);

void showContacts(struct Contacts *_root);

void modifyContacts(struct Contacts *_root);
void modifyName(struct Contacts *_add);
void modifyAddress(struct Contacts *_add);
void modifyPhoneNo(struct Contacts *_add);


int menu();

int main() {    
    printf("\nWELCOME TO TELEPHONE DIRECTORY\n\n");
    for(;;) {
        menu();
    }
}


int menu() {    
    printf("1. Add new contact.\n");
    printf("2. Show contact list.\n");
    printf("3. Search a contact.\n");
    printf("4. Delete a contact.\n");
    printf("5. Modify a contact.\n");
    printf("Q. Exit.\n");
    printf("\nEnter operation: ");

    scanf("%c", &selected_menu);
    fflush(stdin);

    switch(selected_menu) {
        case '1' :
            system("cls");
            addContact();
            system("cls");
            printf("Contact Added Successfully.\n\n");

            break;
        case '2' : 
            system("cls");
            showContacts(root);

            break;
        
        case '3' : 
            system("cls");
            searchContacts();

            break;
        
        case '4' :
            system("cls"); 
            deleteContact(root);
            system("cls");
            printf("Contact Deleted Successfully.\n\n");

            break;
        
        case '5' :
            system("cls");
            modifyContacts(root);
            break;

        case 'Q' :
        case 'q' :
            system("cls");
            printf("THANK YOU FOR USING OUR PROGRAM\n\n");
            printf("Program Terminated.\n\n");
            exit(0);

            break;
        
        default :
            system("cls");
            printf("Wrong Input!! Redirecting to Menu!!\n\n");
    }
}

void addContact() {
    struct Contacts *newContact = (struct Contacts *)malloc(sizeof(struct Contacts));
    printf("\nAdding a new contact.\n\n");

    bool nameCheker;
    do {
        nameCheker = verifyName(root, fname);

        if(nameCheker) {
            printf("\nThis name already exists. Provide another name.\n\n");
        }
    } while(nameCheker);

    printf("\nEnter Address: ");
    fgets(add, 100, stdin);
    fflush(stdin);

    bool numchecker;
    do {
        numchecker = verifyNumber(root, phNo);

        if(numchecker) {
            printf("\nThis number already exists. Provide another number.\n\n");
        }
    } while(numchecker);

    ++totalContact;

    strcpy(newContact->fullname, fname);
    strcpy(newContact->address, add);
    strcpy(newContact->phoneNo, phNo);
    newContact->next = NULL;

    if(root == NULL) {
        root = newContact;
    }
    else {
        struct Contacts *temp = root;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newContact;
    }
}

void showContacts(struct Contacts *_root) {
    printf("\nTotal Contacts:  %d\n\n", totalContact);
    int i = 1;
    while(_root) {
        printf("%d. ", i);
        printf(_root->fullname);
        printf("    ");
        printf(_root->address);
        printf("    ");
        printf(_root->phoneNo);
        printf("\n");

        _root = _root->next;
        i++;
    }

    printf("\n\n");
}

void searchContacts() {
    printf("1. Search By Name.\n");
    printf("2. Search By Number.\n");
    printf("M. Menu\n");
    printf("\nEnter operation: ");
    scanf("%c", &selected_menu);
    fflush(stdin);

    switch (selected_menu) {
        case '1' :
            system("cls");
            searchByName(root);
            
            break;
        
        case '2' :
            system("cls");
            searchByNumber(root);

            break;
        
        case 'M' :
        case 'm' :
            system("cls");
            break;
        
        default :
            system("cls");
            printf("Wrong Input!! Redirecting to Search Menu!!\n\n");
            searchContacts(root);
    }
}

void searchByName(struct Contacts *_root) {
    bool found = false;

    char keyName[50];
    printf("Enter name to search: ");
    fgets(keyName, 50, stdin);
    fflush(stdin);

    while(_root) {
        if(!strcmp(_root->fullname, keyName)) {
            printf(_root->fullname);
            printf("    ");
            printf(_root->address);
            printf("    ");
            printf(_root->phoneNo);
            found = true;
        }
        break;
        _root = _root->next;
    }

    if(!found) {
        printf("\nContact Not Found.\n\n");
    }
    else printf("\n\n");
}

void searchByNumber(struct Contacts *_root) {
    bool found = false;
    char keyName[12];
    printf("Enter number to search: ");
    fgets(keyName, 12, stdin);
    fflush(stdin);

    while(_root) {
        if(!strcmp(_root->phoneNo, keyName)) {
            printf(_root->fullname);
            printf("    ");
            printf(_root->address);
            printf("    ");
            printf(_root->phoneNo);
            found = true;
        }
        break;
        _root = _root->next;
    }

    if(!found) {
        printf("\nContact Not Found.\n\n");
    }
    else printf("\n\n");
}

void deleteContact(struct Contacts *_root) {
    printf("1. Delete By Name.\n");
    printf("2. Delete By Number.\n");
    printf("M. Menu\n");
    printf("\nEnter operation: ");
    scanf("%c", &selected_menu);
    fflush(stdin);

    switch (selected_menu) {
        case '1' :
            system("cls");
            deleteByName(root);
            
            break;
        
        case '2' :
            system("cls");
            deleteByNumber(root);

            break;
        
        case 'M' :
        case 'm' :
            system("cls");
            break;
        
        default :
            system("cls");
            printf("Wrong Input!! Redirecting to Search Menu!!\n\n");
            searchContacts(root);
    }
}

bool verifyNumber(struct Contacts *_root, char *_phNo) {
    printf("\nEnter contact Number: ");
    fgets(_phNo, 12, stdin);
    fflush(stdin);

    while(_root != NULL) {
        if(strcmp(_phNo, _root->phoneNo) == 0) {
            return true;
        }
        _root = _root->next;
    }
    
    return false;
}

bool verifyName(struct Contacts *_root, char *_fName) {
    printf("\nEnter First Name: ");
    fgets(_fName, 50, stdin);
    fflush(stdin);

    while(_root != NULL) {
        if(strcmp(_fName, _root->fullname) == 0) {
            return true;
        }
        _root = _root->next;
    }
    
    return false;
}

void deleteByName(struct Contacts *_nameAdd) {
    char keyName[50];
    printf("Enter number to delete: ");
    fgets(keyName, 50, stdin);
    fflush(stdin);

    if(!strcmp(_nameAdd->fullname, keyName)) {
        struct Contacts *temp;
        temp = root;
        root = root->next;
        free(temp);
        --totalContact; 
    }
    else {
        struct Contacts *hunter, *trailer;
        hunter = _nameAdd;

        while(hunter) {
            if(strcmp(hunter->fullname, keyName) == 0) {
                break;
            }
            trailer = hunter;
            hunter = hunter->next;
        }
        trailer->next = hunter->next;
        free(hunter);
        --totalContact;
    }
}

void deleteByNumber(struct Contacts *_numAdd) {
    char keyNum[12];
    printf("Enter number to delete: ");
    fgets(keyNum, 12, stdin);
    fflush(stdin);

    if(!strcmp(_numAdd->phoneNo, keyNum)) {
        struct Contacts *temp;
        temp = root;
        root = root->next;
        free(temp);
        --totalContact; 
    }
    else {
        struct Contacts *hunter, *trailer;
        hunter = _numAdd;

        while(hunter) {
            if(strcmp(hunter->phoneNo, keyNum) == 0) {
                break;
            }
            trailer = hunter;
            hunter = hunter->next;
        }
        trailer->next = hunter->next;
        free(hunter);
        --totalContact;
    }
}

void modifyContacts(struct Contacts *_root) {
    bool found = false;

    char keyName[50];
    printf("Enter name to modify: ");
    fgets(keyName, 50, stdin);
    fflush(stdin);

    while(_root) {
        if(!strcmp(_root->fullname, keyName)) {
            found = true;
            printf("\nContact found!! Select data to modify: \n");
            printf("1. Modify name.\n");
            printf("2. Modify address.\n");
            printf("3. Modify phone number.\n");
            printf("M. menu\n");
            
            scanf("%c", &selected_menu);
            fflush(stdin);
            switch(selected_menu) {
                case '1' :
                    modifyName(_root);

                    break;
                case '2' :
                    modifyAddress(_root);

                    break;

                case '3' :
                    modifyPhoneNo(_root);
                    break;
                
                case 'M' :
                case 'm' :
                    system("cls");
                    menu();
                    break;
                default :
                    printf("Invalid input!! Redirecting to modification panel!!");
                    modifyContacts(root);
            }
        }    
        _root = _root->next;
    }

    if(!found) {
        printf("\nContact Not Found.\n\n");
    }
    else printf("\n\n");

}

void modifyName(struct Contacts *_add) {
    bool nameCheker;
    do {
        nameCheker = verifyName(root, fname);

        if(nameCheker) {
            printf("\nThis name already exists. Provide another name.\n");
        }
    } while(nameCheker);

    strcpy(_add->fullname, fname);
    printf("\nName modified successfully.\n");
}

void modifyAddress(struct Contacts *_add) {

    printf("\nEnter Address: ");
    fgets(add, 100, stdin);
    fflush(stdin);

    strcpy(_add->address, add);
    printf("\nAddress modified successfully.\n");
}

void modifyPhoneNo(struct Contacts *_add) {
    bool numchecker;
    do {
        numchecker = verifyNumber(root, phNo);

        if(numchecker) {
            printf("\nThis number already exists. Provide another number.\n");
        }
    } while(numchecker);

    strcpy(_add->phoneNo, phNo);
    printf("\nPhone number modified successfully.\n");
}