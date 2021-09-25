//create a totalCost variable to hold the cost of the meal
//create a userReportedTax variable to store the tax percentage of the area as reported by the user
//create a userReportedTip variable to store the percentage of the tip value as reported by the user 

//ask the user for the cost of the meal and store it in that totalCost variable 
//ask the user for the tax in their area and store it in the userReportedTax variable
//as kthe user for the tip percentage of the area and store it in the userReportedTip variable 

//print out the cost of the meal
//print out the calculated tax 
//print out the calculated tip

#include <stdio.h>
#include <stdlib.h>
#include "RestaurantBill.h"

int main(int arc, char(*argv[]))
{

    int random = rand()%4;

    if (random == 1)
    {
        totalCost = 9.95;
    }
    if (random == 1)
    {
        totalCost = 4.55;
    }
    if (random == 1)
    {
        totalCost = 13.25;
    }
    if (random == 1)
    {
        totalCost = 22.35;
    }

    userReportedTax = atoi(argv[1]);
    userReportedTip  = atoi(argv[2]);

    //printf("tC: %f, uRT: %f, uRTi: %f\n", totalCost, userReportedTax, userReportedTip);


    userReportedTax = userReportedTax/100;
    userReportedTip = userReportedTip/100;

    float resultingTax = totalCost*userReportedTax;
    float resultingTip = totalCost*userReportedTip;


    //printf("tC: %f, uRT: %f, uRTi: %f\n", totalCost, userReportedTax, userReportedTip);
    printf("\nCost of Meal: $%.2f, Resulting Tax: $%.2f, Resulting Tip: $%.2f\n[TOTAL COST] : $%.2f\n", totalCost, 
                                                                                                    resultingTax, 
                                                                                                    resultingTip, 
                                                                                                    totalCost+resultingTax+resultingTip);
    

}
