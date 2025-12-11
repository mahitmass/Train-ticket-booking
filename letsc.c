#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
CODE CONTRIBUTIONS - PART 1
MAHIT: Railway Constants, Station Definitions, and Animated Banner Logic
*/

#define NUMBER_OF__RAJ_STATIONS 60
#define CLASSES_RAJ 3
#define TRAIN_AVAILBLE_RAJ 5
#define COACH_RAJ 12
#define SENIOR_SEATS_RAJ 8
#define LADIES_SEAT_RAJ 9

#define NUMBER_OF_JODH_STATIONS 50
#define CLASSES_JODH 2
#define TRAIN_AVAILBLE_JODH 5
#define COACH_JODH 10
#define SENIOR_SEATS_JODH 6
#define LADIES_SEAT_JODH 6

#define NUMBER_OF__SWAT_STATIONS 40
#define CLASSES_SWAT 3
#define TRAIN_AVAILBLE_SWAT 5
#define COACH_SWAT 8
#define SENIOR_SEATS_SWAT 6
#define LADIES_SEAT_SWAT 4

#define FARE_1_TO_3 2000
#define FARE_4_TO_8 3000
#define FARE_9_TO_14 4000
#define FARE_15_TO_17 5000

// ADDED: File Name Definition
#define FILE_NAME "railway_db.txt"

char *stationsRaj[] = {"New Delhi", "Mathura", "Kota", "Ratlam", "Vadodara",
"Surat", "Mumbai Central"};
char *stationsJodh[] = {"Jodhpur", "Jaipur", "Alwar", "Rewari", "Gurgaon", "Delhi Cantt", "Old Delhi", "Ghaziabad", "Kanpur"};
char *stationsSwat[] = {"New Delhi", "Aligarh", "Kanpur", "Prayagraj", "Varanasi",
"Ballia", "Chhapra", "Muzaffarpur", "Jaynagar"};

#define HEIGHT 5

char *W[HEIGHT] = {
    "#     #",
    "#     #",
    "#  #  #",
    "# # # #",
    "##   ##"};

char *E[HEIGHT] = {
    "#####",
    "#    ",
    "#### ",
    "#    ",
    "#####"};

char *L[HEIGHT] = {
    "#    ",
    "#    ",
    "#    ",
    "#    ",
    "#####"};

char *C[HEIGHT] = {
    " ####",
    "#    ",
    "#    ",
    "#    ",
    " ####"};

char *O[HEIGHT] = {
    "#####",
    "#   #",
    "#   #",
    "#   #",
    "#####"};

char *M[HEIGHT] = {
    "#   #",
    "## ##",
    "# # #",
    "#   #",
    "#   #"};

char *T[HEIGHT] = {
    "#####",
    "  #  ",
    "  #  ",
    "  #  ",
    "  #  "};

char *S[HEIGHT] = {
    "#####",
    "#    ",
    "#####",
    "    #",
    "#####"};

char *R[HEIGHT] = {
    "#### ",
    "#   #",
    "#### ",
    "#  # ",
    "#   #"};

char *V[HEIGHT] = {
    "#   #",
    "#   #",
    "#   #",
    " # # ",
    "  #  "};

char *I[HEIGHT] = {
    "#####",
    "  #  ",
    "  #  ",
    "  #  ",
    "#####"};


void delay(int milliseconds) {
    long pause;
    clock_t now, then;
    pause = milliseconds * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now - then) < pause)
    now = clock();
}

void printLargeWord(char *word) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < strlen(word); j++) {
            switch (word[j]) {
                case 'W': printf("%s ", W[i]); break;
                case 'E': printf("%s ", E[i]); break;
                case 'L': printf("%s ", L[i]); break;
                case 'C': printf("%s ", C[i]); break;
                case 'O': printf("%s ", O[i]); break;
                case 'M': printf("%s ", M[i]); break;
                case 'T': printf("%s ", T[i]); break;
                case 'S': printf("%s ", S[i]); break;
                case 'R': printf("%s ", R[i]); break;
                case 'V': printf("%s ", V[i]); break;
                case 'I': printf("%s ", I[i]); break;
                default: printf(" "); break;
            }
        }
        printf("\n");
        delay(50);
    }
    printf("\n");
    delay(50);
}

void showWelcomeBanner() {
    printf("INITIALISING SERVICE....\n");
    delay(2000);
    printLargeWord("WELCOME");
    char word1[] = "TO";
    char word2[] = "SMST";
    char *space_gap = " ";
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < strlen(word1); j++) {
            switch (word1[j]) {
                case 'W': printf("%s ", W[i]); break;
                case 'E': printf("%s ", E[i]); break;
                case 'L': printf("%s ", L[i]); break;
                case 'C': printf("%s ", C[i]); break;
                case 'O': printf("%s ", O[i]); break;
                case 'M': printf("%s ", M[i]); break;
                case 'T': printf("%s ", T[i]); break;
                case 'S': printf("%s ", S[i]); break;
                case 'R': printf("%s ", R[i]); break;
                case 'V': printf("%s ", V[i]); break;
                case 'I': printf("%s ", I[i]); break;
                default: printf(" "); break;
            }
        }
        printf("%s", space_gap);
        for (int j = 0; j < strlen(word2); j++) {
            switch (word2[j]) {
                case 'W': printf("%s ", W[i]); break;
                case 'E': printf("%s ", E[i]); break;
                case 'L': printf("%s ", L[i]); break;
                case 'C': printf("%s ", C[i]); break;
                case 'O': printf("%s ", O[i]); break;
                case 'M': printf("%s ", M[i]); break;
                case 'T': printf("%s ", T[i]); break;
                case 'S': printf("%s ", S[i]); break;
                case 'R': printf("%s ", R[i]); break;
                case 'V': printf("%s ", V[i]); break;
                case 'I': printf("%s ", I[i]); break;
                default: printf(" "); break;
            }
        }
        printf("\n");
        delay(50);
    }
    printf("\n");
    delay(50);
    printLargeWord("SERVICE");
}

/*
CODE CONTRIBUTIONS - PART 2
SHEETAL: Passenger Details Form
SWAYAM: Booking Logic & Ticket Generation
TANVI: Payment Gateway Integration
*/

struct Ticket {
    int ticketID;
    int isCancelled;
    char name[50];
    int age;
    char gender[20];
    char food[20];
    char trainName[50];
    char source[30];
    char destination[30];
    char travelClass[20];
    int seatNumber;
    int train_no;
    float price_per_ticket;
    float total_amount;
};

struct Ticket allTickets[100];
int ticketCount = 0;

// ADDED: File Handling Functions
void save_data() {
    FILE *fp;
    int i;
    fp = fopen(FILE_NAME, "w"); // "w" for text writing
    if(fp == NULL) {
        printf("Error saving file!\n");
        return;
    }

    fprintf(fp, "%d\n", ticketCount);

    for(i=0; i<ticketCount; i++) {
        fprintf(fp, "%d\n", allTickets[i].ticketID);
        fprintf(fp, "%d\n", allTickets[i].isCancelled);
        fprintf(fp, "%s\n", allTickets[i].name);
        fprintf(fp, "%d\n", allTickets[i].age);
        fprintf(fp, "%s\n", allTickets[i].gender);
        fprintf(fp, "%s\n", allTickets[i].food);
        fprintf(fp, "%s\n", allTickets[i].trainName);
        fprintf(fp, "%s\n", allTickets[i].source);
        fprintf(fp, "%s\n", allTickets[i].destination);
        fprintf(fp, "%s\n", allTickets[i].travelClass);
        fprintf(fp, "%d\n", allTickets[i].seatNumber);
        fprintf(fp, "%d\n", allTickets[i].train_no);
        fprintf(fp, "%f\n", allTickets[i].price_per_ticket);
        fprintf(fp, "%f\n", allTickets[i].total_amount);
    }
    fclose(fp);
}

void load_data() {
    FILE *fp;
    int i;
    fp = fopen(FILE_NAME, "r"); // "r" for reading text

    if(fp != NULL) {
        fscanf(fp, "%d", &ticketCount);

        for(i=0; i<ticketCount; i++) {
            fscanf(fp, "%d", &allTickets[i].ticketID);
            fscanf(fp, "%d", &allTickets[i].isCancelled);
            fscanf(fp, " %[^\n]", allTickets[i].name);
            fscanf(fp, "%d", &allTickets[i].age);
            fscanf(fp, "%s", allTickets[i].gender);
            fscanf(fp, "%s", allTickets[i].food);
            fscanf(fp, " %[^\n]", allTickets[i].trainName);
            fscanf(fp, " %[^\n]", allTickets[i].source);
            fscanf(fp, " %[^\n]", allTickets[i].destination);
            fscanf(fp, " %[^\n]", allTickets[i].travelClass);
            fscanf(fp, "%d", &allTickets[i].seatNumber);
            fscanf(fp, "%d", &allTickets[i].train_no);
            fscanf(fp, "%f", &allTickets[i].price_per_ticket);
            fscanf(fp, "%f", &allTickets[i].total_amount);
        }
        fclose(fp);
    }
}

void payment(float amount) {
    int choice;
    printf("\n-----------------------------------------------------\n");
    printf(" PAYMENT GATEWAY \n");
    printf("-----------------------------------------------------\n");
    printf("Total Amount to Pay: Rs %.2f\n", amount);
    printf("Select Payment Method:\n");
    printf("1. UPI\n2. Debit/Credit Card\n3. Net Banking\n4. Cash\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Processing payment...\n");
    delay(1000);
    printf("Payment Successful!\n");
}

void getPassengerDetails(struct Ticket *t) {
    int genderChoice;
    int foodChoice;
    printf("\n================ PASSENGER DETAILS FORM ================\n");
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t->name);
    do {
        printf("Enter Age: ");
        scanf("%d", &t->age);
        if (t->age <= 0) printf("Invalid age! Please enter a valid positive age.\n");
    } while (t->age <= 0);
    printf("\nSelect Gender:\n1. Male\n2. Female\n3. Third Gender\n");
    do {
        printf("Enter your choice (1-3): ");
        scanf("%d", &genderChoice);
        switch(genderChoice) {
            case 1: strcpy(t->gender, "Male"); break;
            case 2: strcpy(t->gender, "Female"); break;
            case 3: strcpy(t->gender, "Third Gender"); break;
            default: printf("Invalid choice! Please enter between 1 and 3.\n");
        }
    } while (genderChoice < 1 || genderChoice > 3);
    printf("\nSelect Food Preference:\n1. Veg\n2. Non-Veg\n");
    do {
        printf("Enter your choice (1-2): ");
        scanf("%d", &foodChoice);
        switch(foodChoice) {
            case 1: strcpy(t->food, "Veg"); break;
            case 2: strcpy(t->food, "Non-Veg"); break;
            default: printf("Invalid choice! Please enter 1 or 2.\n");
        }
    } while (foodChoice < 1 || foodChoice > 2);
    printf("\nDetails Saved.\n");
}

void RajMain() {
    struct Ticket t;
    int classChoice;
    strcpy(t.trainName, "Rajdhani Express");
    t.train_no = 12951;
    printf("\n--- Stations on this Route ---\n");
    for(int i=0; i<7; i++) {
        printf("%d. %s", i+1, stationsRaj[i]);
        if (i < 6) printf(" -> ");
    }
    printf("\n");
    printf("\nEnter Source Station: ");
    scanf(" %[^\n]", t.source);
    printf("Enter Destination Station: ");
    scanf(" %[^\n]", t.destination);
    getPassengerDetails(&t);
    printf("\nSelect Class:\n");
    printf("1. Sleeper (Rs %d)\n", FARE_1_TO_3);
    printf("2. AC 3-Tier (Rs %d)\n", FARE_4_TO_8);
    printf("3. AC 2-Tier (Rs %d)\n", FARE_9_TO_14);
    printf("Enter choice: ");
    scanf("%d", &classChoice);
    if (classChoice == 1) {
        strcpy(t.travelClass, "Sleeper");
        t.price_per_ticket = FARE_1_TO_3;
    }
    else if (classChoice == 2) {
        strcpy(t.travelClass, "AC 3-Tier");
        t.price_per_ticket = FARE_4_TO_8;
    }
    else {
        strcpy(t.travelClass, "AC 2-Tier");
        t.price_per_ticket = FARE_9_TO_14;
    }
    t.seatNumber = (rand() % 100) + 1;
    t.total_amount = t.price_per_ticket;
    t.ticketID = 1000 + ticketCount + 1;
    t.isCancelled = 0;
    payment(t.total_amount);
    allTickets[ticketCount] = t;
    ticketCount++;

    save_data(); // ADDED: Save to file

    printf("\n=================================================\n");
    printf(" BOOKING CONFIRMED \n");
    printf("=================================================\n");
    printf(" TICKET NUMBER : %d (Save this!) \n", t.ticketID);
    printf(" Name : %s\n", t.name);
    printf(" Train : %s\n", t.trainName);
    printf(" Seat : %d\n", t.seatNumber);
    printf("=================================================\n");
}

void JodhLineMain() {
    struct Ticket t;
    int classChoice;
    strcpy(t.trainName, "Jodhpur Express");
    t.train_no = 12462;
    printf("\n--- Stations on this Route ---\n");
    for(int i=0; i<9; i++) {
        printf("%d. %s", i+1, stationsJodh[i]);
        if (i < 8) printf(" -> ");
    }
    printf("\n");
    printf("\nEnter Source Station: ");
    scanf(" %[^\n]", t.source);
    printf("Enter Destination Station: ");
    scanf(" %[^\n]", t.destination);
    getPassengerDetails(&t);
    printf("\nSelect Class:\n");
    printf("1. Sleeper (Rs %d)\n", FARE_1_TO_3);
    printf("2. AC 3-Tier (Rs %d)\n", FARE_4_TO_8);
    printf("3. AC 2-Tier (Rs %d)\n", FARE_9_TO_14);
    printf("Enter choice: ");
    scanf("%d", &classChoice);
    if (classChoice == 1) {
        strcpy(t.travelClass, "Sleeper");
        t.price_per_ticket = FARE_1_TO_3;
    } else if (classChoice == 2) {
        strcpy(t.travelClass, "AC 3-Tier");
        t.price_per_ticket = FARE_4_TO_8;
    } else {
        strcpy(t.travelClass, "AC 2-Tier");
        t.price_per_ticket = FARE_9_TO_14;
    }
    t.seatNumber = (rand() % 100) + 1;
    t.total_amount = t.price_per_ticket;
    t.ticketID = 1000 + ticketCount + 1;
    t.isCancelled = 0;
    payment(t.total_amount);
    allTickets[ticketCount] = t;
    ticketCount++;

    save_data(); // ADDED: Save to file

    printf("\n=================================================\n");
    printf(" BOOKING CONFIRMED \n");
    printf("=================================================\n");
    printf(" TICKET NUMBER : %d (Save this!) \n", t.ticketID);
    printf(" Name : %s\n", t.name);
    printf(" Train : %s\n", t.trainName);
    printf(" Seat : %d\n", t.seatNumber);
    printf("=================================================\n");
}

void SwatLineMain() {
    struct Ticket t;
    int classChoice;
    strcpy(t.trainName, "Swatantrata Express");
    t.train_no = 12562;
    printf("\n--- Stations on this Route ---\n");
    for(int i=0; i<9; i++) {
        printf("%d. %s", i+1, stationsSwat[i]);
        if (i < 8) printf(" -> ");
    }
    printf("\n");
    printf("\nEnter Source Station: ");
    scanf(" %[^\n]", t.source);
    printf("Enter Destination Station: ");
    scanf(" %[^\n]", t.destination);
    getPassengerDetails(&t);
    printf("\nSelect Class:\n");
    printf("1. Sleeper (Rs %d)\n", FARE_1_TO_3);
    printf("2. AC 3-Tier (Rs %d)\n", FARE_4_TO_8);
    printf("3. AC 2-Tier (Rs %d)\n", FARE_9_TO_14);
    printf("Enter choice: ");
    scanf("%d", &classChoice);
    if (classChoice == 1) { strcpy(t.travelClass, "Sleeper"); t.price_per_ticket =
    FARE_1_TO_3; }
    else if (classChoice == 2) { strcpy(t.travelClass, "AC 3-Tier"); t.price_per_ticket =
    FARE_4_TO_8; }
    else { strcpy(t.travelClass, "AC 2-Tier"); t.price_per_ticket = FARE_9_TO_14; }
    t.seatNumber = (rand() % 100) + 1;
    t.total_amount = t.price_per_ticket;
    t.ticketID = 1000 + ticketCount + 1;
    t.isCancelled = 0;
    payment(t.total_amount);
    allTickets[ticketCount] = t;
    ticketCount++;

    save_data(); // ADDED: Save to file

    printf("\n=================================================\n");
    printf(" BOOKING CONFIRMED \n");
    printf("=================================================\n");
    printf(" TICKET NUMBER : %d (Save this!) \n", t.ticketID);
    printf(" Name : %s\n", t.name);
    printf(" Train : %s\n", t.trainName);
    printf(" Seat : %d\n", t.seatNumber);
    printf("=================================================\n");
}

void modifyTicket() {
    int id;
    int i;
    int foundIndex = -1;
    printf("\n--- Modify / Cancel Booking ---\n");
    printf("Enter your Ticket Number: ");
    scanf("%d", &id);
    for(i = 0; i < ticketCount; i++) {
        if(allTickets[i].ticketID == id) {
            foundIndex = i;
            break;
        }
    }
    if(foundIndex == -1) {
        printf("Ticket not found!\n");
        return;
    }
    if(allTickets[foundIndex].isCancelled) {
        printf("This ticket is already cancelled.\n");
        return;
    }
    printf("\nTicket Found for %s (%s)\n", allTickets[foundIndex].name,
    allTickets[foundIndex].trainName);
    printf("1. Change Passenger Name\n");
    printf("2. Cancel Ticket\n");
    printf("3. Back\n");
    int choice;
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter new name: ");
            scanf(" %[^\n]", allTickets[foundIndex].name);
            printf("Name updated successfully!\n");
            save_data(); // ADDED: Save changes
            break;
        case 2:
            printf("Are you sure you want to cancel? (1=Yes, 0=No): ");
            int confirm;
            scanf("%d", &confirm);
            if(confirm == 1) {
                allTickets[foundIndex].isCancelled = 1;
                printf("Ticket Cancelled. Refund initiated.\n");
                save_data(); // ADDED: Save changes
            }
            break;
        default:
            break;
    }
}

int main() {
    srand(time(0));
    load_data(); // ADDED: Load previous tickets on startup

    showWelcomeBanner();
    int choice;
    while(1) {
        printf("\n==== Integrated Train Management System ====\n");
        printf("1. Book Train Ticket\n");
        printf("2. Modify / Cancel Ticket\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
            {
                int trainChoice;
                printf("\n========== Train Ticket Booking System ==========\n");
                printf("1. Rajdhani Express\n");
                printf("2. Jodhpur Express\n");
                printf("3. Swatantrata Express\n");
                printf("Enter your choice (1-3): ");
                scanf("%d", &trainChoice);
                if (trainChoice == 1) {
                    RajMain();
                } else if (trainChoice == 2) {
                    JodhLineMain();
                } else if (trainChoice == 3) {
                    SwatLineMain();
                } else {
                    printf("Invalid Train Choice.\n");
                }
            }
            break;
            case 2:
                modifyTicket();
                break;
            case 3:
                save_data(); // ADDED: Save before exit
                printf("Exiting... Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
