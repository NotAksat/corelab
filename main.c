#include<stdio.h>
#include"login.c"
#include"fprocess.c"


int main(){
    taking_login_info();

    if (logged == true)
    {
        printf("Logged in \n");
        take_user_input();
        
    }
    return 0;
}
