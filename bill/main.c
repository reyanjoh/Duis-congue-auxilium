#include <stdio.h>
#include <stdbool.h>




bool userIDlogIn(int customerID){

    return true;
    
    if(customerID){
        return false;
    }
    // return true;
}


float determineChargeAndUnit(float unitConsumed) {
    
    if(unitConsumed > 199 && unitConsumed < 250){
        return 1.50;
    }else if(unitConsumed >= 250 && unitConsumed < 450){
        return 1.60;
    }else if(unitConsumed >= 450 && unitConsumed < 600){
        return 1.85;
    }else if(unitConsumed > 600){
        return 2.00;
    }else {
        return 0;
    }
}


float calculateUnitCharge(float unitConsumed, float charge){
    return unitConsumed*charge;
}

float surCharge(float charge ){
    return (charge*.10);
}

float totalCustomerBull(float surChargeValue, float initalBill){
    return surChargeValue+initalBill;
}



int main() {
    int customerID;
    
    float unitConsumed = 0;
    float unitCharges;
    float surChargeValue = 0;
  
    float initalBill;
    float CustomerTotalBIll;
    
    
    printf("User ID: ");
    scanf("%d", &customerID);
        
    
    if(!userIDlogIn(customerID)){
        printf("Acess denied. . .");
    }else{
        
        while(unitConsumed<200){
            
            printf("Input Units: ");
            scanf(" %f", &unitConsumed);
        
        }
        
        unitCharges = determineChargeAndUnit(unitConsumed);
        initalBill = calculateUnitCharge(unitConsumed, unitCharges);
        
        if(initalBill > 400){
            
            surChargeValue = surCharge(initalBill);
            
            printf("%.2f", surChargeValue);
        }else if(initalBill < 100){
            printf("minimum bill should be P100");
        }
        // else{
        //     CustomerTotalBIll = totalCustomerBull(surChargeValue, initalBill);
        // }
        
            CustomerTotalBIll = totalCustomerBull(surChargeValue, initalBill);
            printf("\nCustomer ID: %d", customerID);
            printf("\nUnit Consumed: %.2f", unitConsumed);
            printf("\nUnit Charges ₱: %.2f", unitCharges);
            printf("\nSurcharge ₱: %.2f", surChargeValue);
            printf("\nTotalBIll ₱: %.2f", CustomerTotalBIll);
    }

    return 0;
}
