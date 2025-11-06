//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    int dd, yyyy;
    char mm[4];
    
    
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/04/%d", &dd, &yyyy);
    
   
    snprintf(mm, sizeof(mm), "Apr");
    
    
    printf("Date in dd-Apr-yyyy format: %02d-%s-%d\n", dd, mm, yyyy);
    
    return 0;
}