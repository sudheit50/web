#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define FILE_NAME"library.dat"
typedef struct
{
    int id;
    char title[50];
    int quantity;
}book;
void addbook();
void displayboks();
void searchbook();
void updatequantity();
int main()
{
    int choice;
    while(i)
    {
        printf("\n===library stock management===\n");
         printf("1.add book\n");
          printf("2.display all books\n");
           printf("3.search book by id\n");
            printf("4.update quantity\n");
             printf("5,exit\n");
              printf("enter your choice\n");
              scanf("%d",&choice);
        switch(choice)
        {
            case 1: addbook()  ;break;
              case 2: displaybooks() ;break;
                case 3:searchbook()  ;break;
                  case 4:updatequantity()  ;break;
                    case 5:exit(0)  ;break;
                    default:printf("invalid choice\n");
        }
    }return 0;
}
void addbook()
{
    FILE*fp=fopen(FILE_NAME,"a+");
    if(!fp)
    {
        printf("error opening file\n");
        return;
    }
    book b;
    printf("enter book id:");
    scanf("%d",&b.id);
    printf("enter title:");
    getchar();
    fgets(b.title,sizeof(b.title),stdin);
    b.title[strcspn(b.title,"\n")]='\0':
        printf("enter quantity:");
        scanf("%d",&b.quantity);
        fwrite(&b.sizeof(book),1,fp);
        fclose(fp);
        printf("book added successfully\n
}
