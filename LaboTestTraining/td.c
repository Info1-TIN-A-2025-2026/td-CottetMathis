#include <stdio.h>
#include <math.h>

int main(void)
{
    double dist_km = 0;
    double dist_m = 0;
    double ecart = 0;
    double t = 0;
    double vitesse_a = 0;
    double vitesse_b = 0;
    double distance_a = 0;
    double distance_b = 0;
    double v_sum = 0;
    double t_apres_recontre = 0;
    double t_rencontre = 0;
    double p_a_rencontre = 0;
    double p_b_rencontre = 0;

    const double ACCELERATION_A = 1.33; // m/s^2
    const double ACCELERATION_B = 0.52; // m/s^2
    const char DUREE_ACCEL_A = 10;      // secondes
    const char DUREE_ACCEL_B = 20;      // secondes

    printf("Distance entre gares D (km) : \n");
    scanf("%lf", &dist_km);

    dist_m = dist_km * 1000;

    printf("  t        pA(m)    vA(m/s)        pB(m)    vB(m/s)     ecart(m)\n");

    for (t = 0; (dist_m - distance_a) > distance_b; t++)
    {
        if (t <= DUREE_ACCEL_A)
        {
            vitesse_a = ACCELERATION_A * t;
            distance_a = 0.5 * ACCELERATION_A * t * t;
        }
        else
        {
            vitesse_a = ACCELERATION_A * DUREE_ACCEL_A;
            distance_a = 0.5 * ACCELERATION_A * DUREE_ACCEL_A * DUREE_ACCEL_A + vitesse_a * (t - DUREE_ACCEL_A);
        }

        if (t <= DUREE_ACCEL_B)
        {
            vitesse_b = ACCELERATION_B * t;
            distance_b = 0.5 * ACCELERATION_B * t * t;
        }
        else
        {
            vitesse_b = ACCELERATION_B * DUREE_ACCEL_B;
            distance_b = 0.5 * ACCELERATION_B * DUREE_ACCEL_B * DUREE_ACCEL_B + vitesse_b * (t - DUREE_ACCEL_B);
        }

        ecart = dist_m - distance_a - distance_b;

        printf("%3.0lf %12.1lf %10.2lf %12.1lf %10.2lf %12.1lf\n", t, distance_a, vitesse_a, distance_b, vitesse_b, ecart);
    }

    v_sum = vitesse_a + vitesse_b; // Somme des vitesses

    t_apres_recontre = ecart / v_sum; // Temps écoulé après la rencontre

    t_rencontre = t - 1 + t_apres_recontre; // Temps exact de la rencontre

    p_a_rencontre = distance_a + vitesse_a * t_apres_recontre;
    p_b_rencontre = distance_b + vitesse_b * t_apres_recontre;

    printf("\n=== RENCONTRE ===\n");
    printf("t = %.3lf s\n", t_rencontre);
    printf("Positions: pA = %.2lf m, pB = %.2lf m\n", p_a_rencontre, p_b_rencontre);
    // printf("\n=== RENCONTRE ===\n");
    // printf("t = %.3lf\n", t);
    // printf ("Positions: pA = %.2lf m, pB = %.2lf m\n", t, t);

    return 0;
}