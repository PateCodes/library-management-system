#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2. view patrons!\n");
    printf("3.view books!\n");
    printf("4.add new book!\n");
    printf("your action!\n");
    scanf("%d,&action");
    if(action< 1||action >4) {
            printf("invalid action.try again!!");

    }
    return action;
 void execute action(int action) {
     switch(action) {
     case 1:
        printf("adding a new patron\n");
        break;
    case2 :
        printf("list of all patrons\n");
        break;
    case3 :
        printf("list of all books\n");
        break;
   case4 :
       printf("adding a new book\n");
       break;
    default:printf("invalid action.\n");

     }

 int main()
 {
    printf("LIBRARY SYSTEM!\n");
    printf("WELCOMEPATRICK!\n");
    execute action(menu());

 }

    return 0;
}
