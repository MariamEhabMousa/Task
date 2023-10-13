#include<stdio.h>

struct regist
{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20]; 
};
register()
{
    FILE *log; 
    log=fopen("login12.txt", "w"); 
    struct login l; 
    printf("Enter First name :"); scanf("%s", l.fname); 
    printf("Enter Last name :"); scanf("%s",l.lname); 
    printf("Enter Username :"); scanf("%s",l.username); 
    printf("Enter Password :"); scanf("%s",l.password); 
    fwrite(&l,sizeof(l),l,log); 
    fclose(log); 

    printf("\n\n Your Username Is Your UserId\n");
    printf("Now Login With UserId and Password\n");
    printf("\n Press any Key To Continue......."); 
    getc(); 
    system("CLS"); 
    login(); 
}
login()
{
    char username[200];
    char password[20]; 
    FILE *log; 
    log=fopen("login12.txt","r");
    struct login l; 

    printf("UserId :"); 
    scanf("%s", &username);
    printf("Password :");
    scanf("%s", &password);  
    while (fread(&l,sizeof(l),l,log))
    {
        if(strcmp(username,l.usrename)==0 && strcmp(password,l.password)==0)
        {
            printf("Login Successfull \n"); 
        }
        else{
            printf("Please Enter Correct UserId and Password");
        }
    }
    fclose(log); 
}
main ()
{
    int cho; 
    printf("Press '1' For Register \n Press '2' For Login "); 
    scanf("%d",&cho);
    if (cho==1)
    {
        system("CLS"); 
        register(); 

    } 
    else if (cho==2)
    {
        system("CLS");
        login(); 
    }
    
}

