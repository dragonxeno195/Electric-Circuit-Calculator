#include <stdio.h>
/*P= I * V = V^2 / R = I^2 * R

I=V(T)/ R(T)
*/

int main(){
    float I, V, R, P, Rt;
    char option;

    printf(" What do you want to find?\n1, Power, \n2, Currenty,\n3, Power dissipated,\n4, Voltage Drop,\n ");
    scanf("%c" , &option);
    switch(option)
{
        case '1': //Find the Power for Total circuit [I * V = P]
            printf("What is the current?");
            scanf("%f" , &I );

            printf("What is the Voltage?");
            scanf("%f", &V);

            printf("%.2lf mA * %.2lf V = %.2lf w", I, V, I * V);
            break;

        case '2': //Find the Amps/ Current of the Circuit [V(t) / R(t) = I]

            printf("What is the Voltage?");
            scanf("%f", &V);

            printf("What is the Total Restance?");
            scanf("%f" , &R );

            printf("%.2f V / %.2f K omh = %.2f mA", V, R, V / R);
            break;

        case '3': //Find the Power dissipated for each resistor [P= I^2 * R]
            printf("What is the current?");
            scanf("%f", &I);

            printf("What is the Restance of the resistor?");
            scanf("%f", &R);

            printf("%.2f * %.2f * %.2f = %.2f mW", I , I , R , I*I * R  );
            break;

        case '4'://Find the Voltage drop for each resistor [V(Rn) = (Rn/ Rt) * Vt
           printf("What is the Restance Total?");
           scanf("%f", &Rt);

           printf("What is the Restance of the resistor?");
           scanf("%f", &R);

           printf("What is the Voltage total?");
           scanf("%f", &V);

           printf("(%.2f / %.2f) * %.2f = %.2f V", R, Rt, V, (R / Rt) * V);
           break;
        }

    return 0;
    }
