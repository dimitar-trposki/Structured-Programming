#include <stdio.h>

int main() {
    int prvBroj, vtorBroj, tretBroj, chetvrtBroj, pettiBroj;
    scanf("%d%d%d%d%d", &prvBroj, &vtorBroj, &tretBroj, &chetvrtBroj, &pettiBroj);
    printf("%.2f", (float) (prvBroj + vtorBroj + tretBroj + chetvrtBroj + pettiBroj) / 5);
    return 0;
}
