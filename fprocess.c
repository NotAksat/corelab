#include <stdio.h>



void cal(){
    int choice;
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("Enter your choice ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            c = a+b;
            printf("%d \n ",c,);
            break;
        case 2:
            c = a-b;
            printf("%d \n ",c);
            break;
    }
}


void take_user_input(){
    int user_input;
    
    printf("1) cal \n 2) List \n");
    scanf("%d",&user_input);

    if (user_input == 1){
        cal();
    }

}

