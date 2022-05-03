#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id_number;
    char* first_name;
    char* last_name;
    int hourly_pay_rate;
};

int id_verif(int id, int num_emp, struct Employee tab)
{
    int i=0;
    for(i=0;i<num_emp;i++)
    {
        if(id == tab[i].id_number)
            return 1;
    }
    return 0;
}
void managerTag()
{
    printf("Hello Manager\n");
    printf("\n");
    printf("Registering Employees:\n");
}

int menu_employee()
{
    int operation=0;
     do
     {
            printf("*********************************************************\n");
            printf("*                   MENU                                *\n");
            printf("*********************************************************\n");
            printf("\n");
            printf("CHOOSE A NUMBER FROM 1 TO 3 FOR A SEARCH TO BE CARRIED\n");
            printf("\n");
            printf("1 : ID NUMBER\n");
            printf("2 : Last Name\n");
            printf("3 : Hourly Pay\n");
            scanf("%d",&operation);
     }while(operation!=1||operation!=2||operation!=3);

     return operation;

}

void search_ln_pr(struct Employee tab, int size,int style , char* val_search)
{
    int i=0,j=0;
    int tab1[5];
    for(j=0;j<size;j++)
    {
        tab1[j]=-1;
    }
     //search-display using LAST NAME
    if(style == 2)
    {
        j=0;
        for(i=0,i<size,i++)
        {
            if(tab[i].last_name == val_search)
            {
                while(j<size)
                {
                    tab1[j]=i;
                    j=j+1;
                }
            }
        }

    }

    //search-display using PAY RATE
    if(style == 3)
    {
         j=0;
        for(i=0,i<size,i++)
        {
            if(tab[i].hourly_pay_rate == val_search)
            {
                while(j<size)
                {
                    tab1[j]=i;
                    j=j+1;
                }
            }
        }

    }

    i=0;
    while(i<size && tab1[i]!=-1)
    {
         printf("EMPLOYEE(S) FOUND\n");
                printf("ID Number: ");
                printf("%d",tab[tab1[i]].id_number);
                printf("\n First Name: ");
                printf("%d",tab[tab1[i]].first_name);
                printf("\n Last Name: ");
                printf("%d",tab[tab1[i]].last_name);
                printf("\n Hourly Pay Rate: ");
                printf("%d",tab[tab1[i]].hourly_pay_rate);
    }
    if(tab1[0]== -1)
    {
        printf("*** NO MATCH FOUND ***");
    }
}

void search_id(struct Employee tab, int size, int val_search)
{
    int i=0;
    //search-display using ID NUMBER
        for(i=0;i<size;i++)
        {
            if(tab[i].id_number==val_search)
            {
                printf("EMPLOYEE FOUND\n");
                printf("ID Number: ");
                printf("%d",tab[i].id_number);
                printf("\n First Name: ");
                printf("%d",tab[i].first_name);
                printf("\n Last Name: ");
                printf("%d",tab[i].last_name);
                printf("\n Hourly Pay Rate: ");
                printf("%d",tab[i].hourly_pay_rate);
                return;
            }
        }

        printf("*** NO MATCH FOUND ***");

}

int main()
{
    struct Employee employee_array[5];
    int i=0;
    int t,id_s;
    string st_s;

    for(i=0;i<5;i++)
    {
        system("cls");
        managerTag();
        printf("Enter employee %d ID Number:\n",i+1);
        scanf("%d",employee_array[i].id_number);

        if(i!=0)
        {
            bol = id_verif(employee_array[i].id_number,i+1,employee_array);
            while(bol == 1)
            {
                print("ID Number already existing, Enter a new ID Number.\n");
            }
        }

        printf("Enter employee %d First Name:\n",i+1);
        scanf("%s",employee_array[i].first_name);

        printf("Enter employee %d ID Last Name:\n",i+1);
        scanf("%s",employee_array[i].id_number);

        printf("Enter employee %d Hourly Pay Rate:\n",i+1);
        scanf("%d",employee_array[i].id_number);

    }

    system("cls");
    t = menu_employee();

    if(t == 1)
    {
        printf("Enter the id you need to search:\n");
        scanf("%d",&id_s);
        search_id(employe_array,5,id_s);
    }else
    {
        printf("Enter the string you need to search:\n");
        scanf("%c",&st_s);
        search_ln_pr(employee_array,5,t,st_s);
    }



    return 0;
}
