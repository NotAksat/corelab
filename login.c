#include <stdio.h>

bool logged = false;

void taking_login_info(){

    FILE *file = fopen("Logininfo.csv","w");
    if(file == NULL){
        printf("No file found!");
        logged = false;}





    char name[20];
    char password[8];

    printf("Username : ");
    scanf("%19s",&name);
    printf("Password : ");
    scanf("%9s",&password);

    fprintf(file,"%s,%s",name,password);
    fclose(file);

    logged = true;

}
