#include <stdio.h>
#include "seatbelt.h"

void checkSeatbeltStatus(int speed) {
    int seatbeltFastened;
// USER INPUT
    printf("Is the seatbelt fastened? (1 = yes, 0 = no): ");
    scanf("%d", &seatbeltFastened);
// SEATBELT CHECK
    if (speed > 10 && !seatbeltFastened) {
        alertSeatbelt();
    }
}
// ALERT FUNCTION
void alertSeatbelt() {
    printf("⚠️ Seatbelt not fastened! Please buckle up.\n");
} 
