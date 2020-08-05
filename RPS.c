//Update Branch
#include <stdio.h>
#include <conio.h>
void Welcome(void);
int display(void);
int computer(void);

void Welcome(void)
{
    char name[10];
    printf("\n\n\n\t\t\t****R O C K  ||  P A P E R  ||  S C I S S O R****");
    printf("\nWelcome,Enter your first name:");
    scanf("%s", &name);
    printf("\nHope you will like our game %s\n", name);
}
int display(void)
{
    char ch;
    printf("\n\n  R--ROCK  P--PAPER S--SCISSOR  !!!press E to exit!!!!");
    printf("\n Enter Your Choice First Capital Letter :");
    scanf("%s", &ch);
    if (ch == 'R' || ch == 'r')
        return (1);
    if (ch == 'P' || ch == 'p')
        return (2);
    if (ch == 'S' || ch == 's')
        return (3);
    if (ch == 'E' || ch == 'e')
        return (4);
}
int computer(void)
{
    static int count = 1;
    while (1)
    {
        count = count + 1;
        if (count % 2 == 0)
            return (1);
        else if (count == 3 || count == 7 || count == 11 || count == 17 || count == 21 || count == 27 || count == 31 || count == 37 || count == 41 || count == 51)
            return (2);
        else
            return (3);
    }
    count = count + 1;
}
int main()
{
    int comp, e = 2;
    int choice;
    system("CLS");
    Welcome();
    system("PAUSE");
    while (1)
    {
        system("CLS");
        choice = display();
        switch (choice)
        {
        case 1:
            comp = computer();
            if (choice == comp)
                printf("\nDraw\n");
            else if (comp == 2) //1-rock 2-paper 3-scissor
                printf("\nCONGRATULATIONS!!!You won\n");
            else
            {
                printf("\nAlas!!You lost\n");
            }

            break;
        case 2:
            comp = computer();
            if (choice == comp)
                printf("\nDraw\n");
            else if (comp == 1) //1-rock 2-paper 3-scissor
                printf("\nCONGRATULATIONS!!!You won\n");
            else
            {
                printf("\nAlas!!You lost\n");
            }
            break;
        case 3:
            comp = computer();
            if (choice == comp)
                printf("\nDraw\n");
            else if (comp == 2) //1-rock 2-paper 3-scissor
                printf("\nCONGRATULATIONS!!!You won\n");
            else
            {
                printf("\nAlas!!You lost\n");
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid input!!!\n");
            break;
        }
        system("PAUSE");
    }
}
