#include <stdio.h>
#include <math.h>

#define MS_TO_KMH 3.6

int main(int argc, const char *argv[])
{
	double const MASSE_T_LANCEUR_DEC = 750;  // 750 tonnes
	double const MASSE_T_VIDE = 90; // 90 tonnes
	double const VE = 4000; // 4000 m/s
	double const CONSO = 4; // 4 T/s

	int t = 0;
	double masse_lanceur = MASSE_T_LANCEUR_DEC;
	double vitesse_lanceur_m_p_s = 0;
	double vitesse_lanceur_km_p_h = 0;
	double masse_conso = 0;
	double altitude_lanceur = 0;

	puts("Temps | Masse lanceur | Vitesse(m/s) | Vitesse(km/h) | Masse carb. conso | Altitude");
	puts("-----------------------------------------------------------------------------------");

	while (masse_lanceur >= MASSE_T_VIDE)
	{
		if (t > 0)
		{
			masse_conso += CONSO; // tonnes consommées pendant 1 seconde
        }

		masse_lanceur = MASSE_T_LANCEUR_DEC - masse_conso;

		double nouvelle_vitesse = VE * log(MASSE_T_LANCEUR_DEC / masse_lanceur);

		altitude_lanceur += nouvelle_vitesse;

		vitesse_lanceur_m_p_s = nouvelle_vitesse;
        vitesse_lanceur_km_p_h = vitesse_lanceur_m_p_s * MS_TO_KMH;

		if (t == 1)
        {
            printf(" %4d | %13.2lf | %12.2lf | %13.2lf | %17.2lf | %7.2lf\n", t, masse_lanceur, vitesse_lanceur_m_p_s, vitesse_lanceur_km_p_h, masse_conso, altitude_lanceur/1000);
        }

		if (t % 10 == 0)
        {
            printf(" %4d | %13.2lf | %12.2lf | %13.2lf | %17.2lf | %7.2lf\n", t, masse_lanceur, vitesse_lanceur_m_p_s, vitesse_lanceur_km_p_h, masse_conso, altitude_lanceur/1000);
        }

		if (t == 165)
        {
            printf(" %4d | %13.2lf | %12.2lf | %13.2lf | %17.2lf | %7.2lf\n", t, masse_lanceur, vitesse_lanceur_m_p_s, vitesse_lanceur_km_p_h, masse_conso, altitude_lanceur/1000);
        }

		t++;
	}
	
	return 0;
}