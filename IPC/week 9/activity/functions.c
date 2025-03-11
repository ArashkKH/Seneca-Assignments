#include <stdio.h>
#include "employee.h"


struct employee getEmpData(){
    struct employee empData;

    printf("\nEnter Employee Id:");
    scanf("%d" , &empData.id);

    printf("\nEnter Employee name:");
    scanf("%30[^\n]%*c" , empData.name);

    printf("\nEnter Employee salary:");
    scanf("%d" , &empData.salary);

    return empData;
}



void showEmployee(struct employee emp){
    printf("\n\nEmployee data is as follows:\n");
    printf("%10s  %10s  %10s\n\n" , "ID" , "NAME" , "SALARY");
    printf("%10d  %10s  %10d\n\n" , emp.id , emp.name , emp.salary);
}
