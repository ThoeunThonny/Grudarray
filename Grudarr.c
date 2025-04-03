#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int arr[30];
    int i,j,size,op;
    printf("======Option Of Array=====\n");
        printf("1.Input\n");
        printf("2.Output\n");
        printf("3.Search\n");
        printf("4.Update\n");
        printf("5.Delete\n");
        printf("6.Add\n");
        printf("7.Sort\n");
        printf("8.Insert\n");
        printf("9.Exit\n");
    do{
        printf("PLese You One Option:");scanf("%d",&op);
        switch(op)
        {
            case 1:{
                printf("===========Create Index Of Areay=========\n");
                printf("Enter Size Of Array :");scanf("%d",&size);
                for(i=0;i<size;i++)
                {
                    printf("Input Number Of Array At Index[%d]:",i);scanf("%d",&arr[i]);
                }
            }break;
            case 2:{
                printf("===========Output Index Of Areay=========\n");
                for(i=0;i<size;i++)
                {
                    printf("Number Of Array at Index[%d]=%d\n",i,arr[i]);
                }
            }break;
            case 3:{
                bool check=true;
                int search;
                printf("Enter Number To Search In Array:");scanf("%d",&search);
                for(i=0;i<size;i++)
                {
                    if(search==arr[i])
                    {
                        printf("Number Of Array At Index[%d]=%d\n",i,arr[i]);
                        printf("=============================\n");
                        printf("||    Search Is Success    ||\n");
                        printf("=============================\n");
                         check=false;
                    }
                    
                }
                if(check)
                    {
                        printf("=============================\n");
                        printf("||   Search Is Not See...   ||\n");
                        printf("=============================\n");
                    }
            }break;
            case 4:{
                int update;
                bool check=true;
                printf("Enter Number To Update Elements of Array:");scanf("%d",&update);
                for(i=0;i<size;i++)
                {
                    if(update==arr[i])
                    {
                        printf("Enter New Number To Uppdat Elements Of Array At Index[%d]:",i);scanf("%d",&arr[i]);
                        printf("========================================\n");
                        printf("||    Update Is Success  At Index[%d]  ||\n",i);
                        printf("========================================\n");
                         check=false;
                    }
                }
                if(check)
                {
                    printf("===========================================\n");
                    printf("||   Search Is Not See You Can't Update  ||\n");
                    printf("===========================================\n");
                }
            }break;
            case 5:{
                int delete;
                bool check=true;
                printf("Plese ENter Number To You Want To Delete From Array:");scanf("%d",&delete);
                for(i=0;i<size;i++)
                {
                    if(delete==arr[i])
                    {
                        for(j=i;j<size-1;j++)
                        {
                            arr[j]=arr[j+1];
                        }
                        size--;
                        printf("========================================\n");
                        printf("||    Delete Is Success  At Index[%d]  ||\n",i);
                        printf("========================================\n");
                        check=false;
                    }
                   
                }
                if(check){
                    printf("===========================================\n");
                    printf("||   Search Is Not See You Can't Delete  ||\n");
                    printf("===========================================\n");
                }
            }break;
            case 6:{
                int add;
                printf("Add New Size of Array:");scanf("%d",&add);
                if(add+size<=30)
                {
                    for(i=size;i<size+add;i++){
                        printf("Ennter Number To Add In Array at Index[%d]:",i);scanf("%d",&arr[i]);
                    }
                    size+=add;
                    printf("=========================================================\n");
                    printf("||    Add Is Success Please You Chose Case 2 To Show   ||\n");
                    printf("=========================================================\n");
                }else{
                    printf("===========================================\n");
                    printf("||   Size Array is Full You Can't Add More  ||\n");
                    printf("===========================================\n");
                }
            }break;
            case 7:{
               
                for(i=0;i<size-1;i++){
                    for(j=i+1; j<size; j++){
                        if(arr[i]>arr[j]){
                            int temp;
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }
                printf("=========================================================\n");
                printf("||    Sort Is Success Please You Chose Case 2 To Show   ||\n");
                printf("=========================================================\n");
               
            }break;
            case 8:{
                int insert,value;
                printf("Enter Number To Insert At Index Of Array[0-%d]:",size);scanf("%d",&insert);
                if(insert<size){
                    printf("Enter Value To Insert In Array at Index[%d]:",insert);scanf("%d",&value);
                    for(i=size-1;i>=insert;i--){
                        arr[i+1]=arr[i];
                    }
                    arr[insert]=value;
                    size++;
                    printf("=========================================================\n");
                    printf("||    Insert Is Success Please You Chose Case 2 To Show   ||\n");
                    printf("=========================================================\n");
                }else{
                    printf("=================================================================\n");
                    printf("||    Your Number Insert Is Bigger Than Size You Can't Insert   ||\n");
                    printf("=================================================================\n");
                }
            }break;
            case 9:{
                printf("===========================================================\n");
                printf("||   Good Luck Everyone Wish You Succes In Your IT Life   ||\n");
                printf("===========================================================\n");
                exit(0);
            }break;
        }
        again:
        printf("Plese Enter To Continue....!\n");
        if(getch()==13){
            system("cls");
        }else{
            goto again;
        }

    }while(op<10);
}