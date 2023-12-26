#include <stdio.h>

// Function to write data into a file
void writetofile() {
    FILE *fp;
    char data[100];

    
    fp = fopen("data.txt", "w");

   
    printf("Enter data to write into file: ");
    fgets(data, sizeof(data), stdin);
     fprintf(fp, "%s", data);
    fclose(fp);
}

// Function to read data from a file
void readfromfile() {
    FILE *fp;
    char data[100];
   fp = fopen("data.txt", "r");
    fscanf(fp, "%[^\n]", data);
    printf("Data read from file: %s\n", data);
    fclose(fp);
}
// Function to append data to a file
void appendtofile() {
    FILE *fp;
    char data[100];
    fp = fopen("data.txt", "a");
    printf("Enter data to append to file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(fp, "%s", data);

    fclose(fp);
}
int main(){
    writetofile();
    readfromfile();
    appendtofile();
    return 0;
}

