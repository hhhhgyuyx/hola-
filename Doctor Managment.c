#include <stdio.h>
#include<string.h>

struct doctor
{
    char name[20];
    char speciality[30];
    char availability [5];
    char contact[11];
};

int main ()
{
    int b,e,nu,f;
    int j ;
    char answer[3];
    int counter=0;
    struct doctor d[100];
    do{
        printf("ENTER 1 TO ADD DOCTOR INFORMATION , 2 TO VIEW DOCTOR INFORMATION , 3 TO DELETE INFORMATION , ANY OTHER TO EXIT MANAGMENT SYSTEM : ");
        scanf("%d",&f);
        if (f==1){
            printf("ENTER NUMBER OF DOCTORS FOR WHICH YOU WANT TO ADD DETAILS : ");
            scanf("%d",&nu);
            for (j = 0 ; j<nu;j++){
                printf("ENTER DETAILS FOR DOCTOR %d : \n",counter+1);
                printf("-----------------------------\n");
                printf("ENTER NAME OF DOCTOR : ");
                scanf("%s",d[counter].name);
                printf("ENTER MOBILE NUMBER OF DOCTOR : ");
                scanf("%s",d[counter].contact);
                printf("ENTER SPECIALITY OF DOCTOR : ");
                scanf("%s",d[counter].speciality);
                printf("ENTER AVAILABILITY OF DOCTOR : ");
                scanf("%s",d[counter].availability);
                counter++;

            }
            printf("DO YOU WANT TO USE MORE ?? \n");
            scanf("%s",answer);

        }
        else if (f==2)
        {
            printf("ENTER NUMBER OF DOCTOR FOR WHICH YOU WANT TO SEE DETAILS : ");
            scanf("%d",&b);
            printf("DETAILS OF DOCTOR %d \n",b);
            printf("\nNAME OF THE DOCTOR : %s \n",d[b-1].name);
            printf("CONTACT OF THE DOCTOR : %s \n",d[b-1].contact);
            printf("SPECIALITY OF THE DOCTOR : %s \n",d[b-1].speciality);
            printf("AVAILABILITY OF THE DOCTOR : %s \n",d[b-1].availability);


            printf("\nDO YOU WANT TO USE MORE ?? \n");
            scanf("%s",answer);
        }

        else if (f==3){
            printf("ENTER DOCTOR FOR WHICH YOU WANT TO DELETE DETAILS : ");
            scanf("%d",&e);
            if (e > 0 && e <= counter) {
                for (j = e - 1; j <= counter - 1; j++) {
                    d[j] = d[j + 1];
                }


                counter--;
                printf("RECORD DELETED SUCCESSFULLY\n");
                printf("\nDO YOU WANT TO USE MORE ?? ");
            }
             else
             {
                 printf("INVALID DOCTOR NUMBER!\n");
                 printf("\nDO YOU WANT TO USE MORE ?? ");
                 scanf("%s",answer);
                 printf()
             }
         }


        else {
            printf("\nEXITING MANAGMENT SYSTEM !! \n");
            printf("STAY SAFE !!\n");
            break;
        }


    }while(strcmp(answer, "no") != 0 && strcmp(answer, "NO") != 0);



    return 0 ;
}
