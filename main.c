/*
COUNTY LIBRARY MANAGEMENT SYSTEM
By patrick mwania
Feb 2022
MIT license
C89 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

int Menu()
{
    int action;
    printf("select an action below\n");
    printf("1. add new patron /n");
    printf("2. view all patrons/n");
    printf("3. view all books/ n");
    printf("4. add new book /n");
    printf(" your action:");
    scanf("%d",&action);

    return action;

}
int main(){

    printf("COUNTY LIBRARY STSTEM\n");
    printf("welcome  Mr.patrick\n");
    printf("you selected action %d",Menu());

    return 0;
}


