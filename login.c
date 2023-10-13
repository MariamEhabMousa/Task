#include<stdio.h>
#include<conio.h>
#include<string.h>
// User Authentication 
int main(){
    char username[15];
    char password[10]; 

    printf("\n Enter Your Username :");
    scanf("%s", &username); 
    
    printf("\n Enter Your Password :");
    scanf("%s",password); 

    if (strcmp(username,"Mariam")==0){
        if (strcmp(password,"1234")==0){
        printf("\n Login... Successfull"); 
        }else{
            printf("\n Wrong Password"); 
        }
    }else
    {
        printf("\n User Does't Exit");
    }
    
    getch(); 
    
    return 0; 
}

 
