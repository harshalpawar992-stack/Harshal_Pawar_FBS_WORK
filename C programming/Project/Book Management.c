#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct book
{
    int bookid;
    char bookname[20];
    char bookauthorname[50];
    char bookcategory[40];
    int bookprice;
    int bookrating;
} book;
int size = 4;
/* ================= DISPLAY BOOK ====================== */
void displaybook(book *barr, int size)
{
    printf("\n");
    printf("id      name         authorname         category       price  rating\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", barr[i].bookid);
        printf("%-10s\t", barr[i].bookname);
        printf("%-15s\t", barr[i].bookauthorname);
        printf("%-15s\t", barr[i].bookcategory);
        printf("%d\t", barr[i].bookprice);
        printf("%d\n", barr[i].bookrating);
    }
}
/* ================= SEARCH BY BOOK ID ================= */
int searchBybookid(book *barr, int size, int bookid)
{
    for(int i = 0; i < size; i++)
    {
        if(barr[i].bookid == bookid)
            return i; 
    }
    return -1;
}
/* ================= SEARCH BY BOOK NAME ================= */
int searchbybookname(book *barr, int size, char bookname[])
{
    for(int i = 0; i < size; i++)
    {
        if(strcmp(barr[i].bookname, bookname) == 0)
        {
            return i;
        }
    }
    return -1;
}
/* ================= ADD BOOK ================= */
void addbook(book **barr, int *currindex)
{
    if(*currindex >= size)
    {
        printf("\nArray full and reallocation started...\n");
        int newsize = size * 2;
        *barr = (book*)realloc(*barr, sizeof(book) * newsize);
        size = newsize;
        printf("Reallocation successful\n");
    }
    do
   {
     printf("Enter book id: ");
     scanf("%d", &(*barr)[*currindex].bookid);

     if((*barr)[*currindex].bookid < 0)
     {
        printf("Book ID cannot be negative\n");
     }
    } while((*barr)[*currindex].bookid < 0);

    printf("Enter book name: ");
    scanf("%s", (*barr)[*currindex].bookname);

    printf("Enter author name: ");
    scanf("%s", (*barr)[*currindex].bookauthorname);

    printf("Enter category: ");
    scanf("%s", (*barr)[*currindex].bookcategory);
    do
    {
      printf("Enter price: ");
      scanf("%d", &(*barr)[*currindex].bookprice);
     if((*barr)[*currindex].bookprice < 0)
     {
        printf("Price cannot be negative\n");
     }
    } while((*barr)[*currindex].bookprice < 0);
     
	do
    {
     printf("Enter rating: ");
     scanf("%d", &(*barr)[*currindex].bookrating);

     if((*barr)[*currindex].bookrating < 1 ||
       (*barr)[*currindex].bookrating > 5)
     {
        printf("Rating must be between 1 and 5\n");
     }
   } while((*barr)[*currindex].bookrating < 1 || (*barr)[*currindex].bookrating > 5);
    (*currindex)++;
    printf("\nBook added successfully\n");
}
/* ================= DELETE BOOK ================= */
void deletebookBybookid(book *barr, int *currindex, int bookid)
{
    int index = searchBybookid(barr, *currindex, bookid);
    if(index != -1)
    {
        for(int i = index; i < *currindex - 1; i++)
        {
            barr[i] = barr[i + 1];
        }
        (*currindex)--;
        printf("\nDeleted successfully\n");
    }
    else
    {
        printf("\nBook not found\n");
    }
}
/* ================= UPDATE BOOK ================= */
void updatebook(book *barr, int currindex, int bookid)
{
    int index = searchBybookid(barr, currindex, bookid);
    if(index != -1)
    {
        while(1)
        {
            int subchoice;
            printf("\n");
            printf("Enter 1 to update book name\n");
            printf("Enter 2 to update author name\n");
            printf("Enter 3 to update category\n");
            printf("Enter 4 to update price\n");
            printf("Enter 5 to update rating\n");
            printf("Enter 6 to exit\n");
            printf("Enter your choice: ");
            scanf("%d", &subchoice);
            if(subchoice == 1)
            {
                printf("Enter new book name: ");
                char str[20];
                scanf("%s", str);
                strcpy(barr[index].bookname, str);
                printf("Book name updated successfully\n");
            }
            else if(subchoice == 2)
            {
                printf("Enter new author name: ");
                char str[50];
                scanf("%s", str);
                strcpy(barr[index].bookauthorname, str);
                printf("Author name updated successfully\n");
            }
            else if(subchoice == 3)
            {
                printf("Enter new category: ");
                char str[40];
                scanf("%s", str);
                strcpy(barr[index].bookcategory, str);
                printf("Category updated successfully\n");
            }
            else if(subchoice == 4)
            {
                printf("Enter new price: ");
                int bookprice;
                scanf("%d", &bookprice);
                barr[index].bookprice = bookprice;
                printf("Price updated successfully\n");
            }
            else if(subchoice == 5)
            {
                printf("Enter new rating: ");
                int bookrating;
                scanf("%d", &bookrating);
                barr[index].bookrating = bookrating;
                printf("Rating updated successfully\n");
            }
            else if(subchoice == 6)
            {
                break;
            }
            else
            {
                printf("Invalid choice\n");
            }
        }
    }
    else
    {
        printf("\nRecord not found\n");
    }
}
/* ================= STORE BOOK ================= */
void storebook(book *barr, int size)
{
    printf("\nEnter book details\n");
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Enter book id: ");
        scanf("%d", &barr[i].bookid);

        printf("Enter book name: ");
        scanf("%s", barr[i].bookname);

        printf("Enter author name: ");
        scanf("%s", barr[i].bookauthorname);

        printf("Enter category: ");
        scanf("%s", barr[i].bookcategory);

        printf("Enter price: ");
        scanf("%d", &barr[i].bookprice);

        printf("Enter rating: ");
        scanf("%d", &barr[i].bookrating);
    }
}
/* ================= HARD CODED BOOK ================= */
void storeHardCoded(book *barr, int *currindex)
{
    barr[0].bookid = 101;
    strcpy(barr[0].bookname, "dreams");
    strcpy(barr[0].bookauthorname, "emma");
    strcpy(barr[0].bookcategory, "motivational");
    barr[0].bookprice = 100;
    barr[0].bookrating = 5;

    barr[1].bookid = 102;
    strcpy(barr[1].bookname, "believe");
    strcpy(barr[1].bookauthorname, "sarah");
    strcpy(barr[1].bookcategory, "self-help");
    barr[1].bookprice = 200;
    barr[1].bookrating = 3;

    barr[2].bookid = 103;
    strcpy(barr[2].bookname, "soul");
    strcpy(barr[2].bookauthorname, "ethan");
    strcpy(barr[2].bookcategory, "Spiritual");
    barr[2].bookprice = 400;
    barr[2].bookrating = 2;
    
    barr[3].bookid = 104;
    strcpy(barr[3].bookname, "Wings of Fire");
    strcpy(barr[3].bookauthorname, "Dr.Abdul Kalam");
    strcpy(barr[3].bookcategory, "Biography");
    barr[3].bookprice = 500;
    barr[3].bookrating = 4;
    
    *currindex = 4;
}
/* ================= MAIN ================= */
int main()
{
    book *barr = (book*)malloc(sizeof(book) * size);
    int currindex;
    storeHardCoded(barr, &currindex);
    int exit;
    do
    {
        printf("\n");
        printf("Enter 1 to display\n");
        printf("Enter 2 to search\n");
        printf("Enter 3 to add book\n");
        printf("Enter 4 to delete book\n");
        printf("Enter 5 to update book\n");
        printf("Enter 6 to search by book name\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            /* ============ DISPLAY ============ */
            case 1:
            {
                printf("\nBook details are:\n");
                displaybook(barr, currindex);
                break;
            }
            /* ============ SEARCH ============ */
            case 2:
            {
                printf("\n");
                printf("Enter 1 to search by book id\n");
                printf("Enter 2 to search by book name\n");
                int subchoice;
                printf("Enter your choice: ");
                scanf("%d", &subchoice);
                if(subchoice == 1)
                {
                    int bookid;
                    printf("Enter bookid you want to search: ");
                    scanf("%d", &bookid);
                    int index = searchBybookid(barr, currindex, bookid);
                    if(index != -1)
                {
                    printf("\nBook ID       : %d", barr[index].bookid);
                    printf("\nBook Name     : %s", barr[index].bookname);
                    printf("\nAuthor Name   : %s", barr[index].bookauthorname);
                    printf("\nCategory      : %s", barr[index].bookcategory);
                    printf("\nPrice         : %d", barr[index].bookprice);
                    printf("\nRating        : %d\n", barr[index].bookrating);
                }
                    else
                    {
                        printf("\nBook not found\n");
                    }
                }
                else if(subchoice == 2)
                {
                    char bookname[20];
                    printf("Enter name you want to search: ");
                    scanf("%s", bookname);
                    int index = searchbybookname(barr, currindex, bookname);
                    if(index != -1)
                   {  
                     printf("\nBook ID       : %d", barr[index].bookid);
                     printf("\nBook Name     : %s", barr[index].bookname);
                     printf("\nAuthor Name   : %s", barr[index].bookauthorname);
                     printf("\nCategory      : %s", barr[index].bookcategory);
                     printf("\nPrice         : %d", barr[index].bookprice);
                     printf("\nRating        : %d\n", barr[index].bookrating);
                    }
                    else
                    {
                     printf("\nBook not found\n");
                    }
                }
                break;
            }
            /* ============ ADD BOOK ============ */
            case 3:
            {
                addbook(&barr, &currindex);
                break;
            }
            /* ============ DELETE BOOK ============ */
            case 4:
            {
                int bookid;
                printf("Enter bookid you want to delete: ");
                scanf("%d", &bookid);
                deletebookBybookid(barr,&currindex,bookid);
                break;
            }
            /* ============ UPDATE BOOK ============ */
            case 5:
            {
                int bookid;
                printf("Enter bookid of book you want to update: ");
                scanf("%d", &bookid);
                updatebook(barr,currindex,bookid);
                break;
            }
            /* ============ SEARCH BY NAME ============ */
            case 6:
            {
                char bookname[20];
                printf("Enter book name you want to search: ");
                scanf("%s", bookname);
                int index = searchbybookname(barr,currindex,bookname);
                if(index != -1)
                {
                    printf("\n%s found at %d index\n",barr[index].bookname,index);
                }
                else
                {
                    printf("\nBook not found\n");
                }
                break;
            }
            default:
            {
                printf("\nInvalid choice\n");
            }
        }
        printf("\nDo you want to continue 1/0: ");
        scanf("%d", &exit);
    } while(exit == 1);
    free(barr);
    return 0;
}