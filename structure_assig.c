#include<stdio.h>
#include<string.h>
int main()
{
    struct eceA
    {
        int roll_num;
        char name[100];
        char gender;
    };

    struct eceA ridhi,hriddhi,garvita,himanshu,sadaf,purnima;

    strcpy(purnima.name,"Purnima Agnihotri");
    purnima.roll_num=52;
    purnima.gender='F';
    printf("Name:%s\n",purnima.name);
    printf("Roll Number:%d\n",purnima.roll_num);
    printf("Gender:%c\n",purnima.gender); 
    printf("\n");


    strcpy(ridhi.name,"Ridhi Sud");
    ridhi.roll_num=24;
    ridhi.gender='F';
    printf("Name:%s\n",ridhi.name); 
    printf("Roll Number:%d\n",ridhi.roll_num);
    printf("Gender:%c\n",ridhi.gender);
    printf("\n");

    strcpy(hriddhi.name,"Hriddhi Srivastava");
    hriddhi.roll_num=39;
    hriddhi.gender='F';
    printf("Name:%s\n",hriddhi.name);
    printf("Roll Number:%d\n",hriddhi.roll_num);
    printf("Gender:%c\n",hriddhi.gender); 
    printf("\n"); 

    strcpy(garvita.name,"Garvita Srivatava");
    garvita.roll_num=26;
    garvita.gender='F';
    printf("Name:%s\n",garvita.name);
    printf("Roll Number:%d\n",garvita.roll_num);
    printf("Gender:%c\n",garvita.gender);  
    printf("\n");

    strcpy(himanshu.name,"Himanshu");
    himanshu.roll_num=1;
    himanshu.gender='M';
    printf("Name:%s\n",himanshu.name);
    printf("Roll Number:%d\n",himanshu.roll_num);
    printf("Gender:%c\n",himanshu.gender); 
    printf("\n");

    strcpy(sadaf.name,"sadaf");
    sadaf.roll_num=37;
    sadaf.gender='F';
    printf("Name:%s\n",sadaf.name);
    printf("Roll Number:%d\n",sadaf.roll_num);
    printf("Gender:%c\n",sadaf.gender); 
    printf("\n");

    
    

    return 0;
    
}