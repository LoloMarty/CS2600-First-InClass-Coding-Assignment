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
#include "RestaurantBill.h"


int main(int arc, char(*argv[]))
{
    printf("What was the total cost of your meal?: \n");
    scanf("%f", &totalCost);

    printf("What is the tax percentage in your area?: \n");
    scanf("%f", &userReportedTax);

    printf("What is the tip percentage in your area? \n");
    scanf("%f", &userReportedTip);

    //printf("tC: %f, uRT: %f, uRTi: %f\n", totalCost, userReportedTax, userReportedTip);


    userReportedTax = userReportedTax/100;
    userReportedTip = userReportedTip/100;

    float resultingTax = totalCost*userReportedTax;
    float resultingTip = totalCost*userReportedTip;


    //printf("tC: %f, uRT: %f, uRTi: %f\n", totalCost, userReportedTax, userReportedTip);
    printf("Cost of Meal: $%.2f, Resulting Tax: $%.2f, Resulting Tip: $%.2f\n[TOTAL COST] : $%.2f", totalCost, 
                                                                                                    resultingTax, 
                                                                                                    resultingTip, 
                                                                                                    totalCost+resultingTax+resultingTip);
    

}
