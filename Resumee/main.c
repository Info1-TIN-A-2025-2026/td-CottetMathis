#include <stdio.h>

int main(int argc, const char *argv[])
{
	puts("Hello");		// Ecrire Hello et retour la ligne automatique

	//printf("Number of seconds: ");

	
	//scanf("%d", &s);		// Récupérer une valeur insérée dans le terminal (généralement %d ou %lf )
							// &... pour assigner la valeur à une variable 

	int i = -42;
    unsigned int u = 42;
    long l = 1234567890;
    long long ll = 1234567890123;

    double d = 2.718281828;
    long double ld = 1.4142135623730950;

    char c = 'A';
    const char *string = "Hello";
    void *ptr = (void*)string;

	 /* ---- ENTIERS ---- */
	puts(" ---- ENTIERS ---- ");
	printf("%%d / %%i : %d\n", i);		// %d ou %i : entier signé (int), positif ou négatif
	printf("%%u       : %u\n", u); 		// %u : entier non signé (unsigned int), seulement >= 0
	printf("%%o       : %o\n", u);		// %o : entier en base 8 (octal)
	printf("%%x       : %x\n", u);		// %x : entier en hexadécimal, lettres minuscules
	printf("%%ld      : %ld\n", l);		// %ld : entier de type long
	printf("%%lld     : %lld\n", ll);	// %lld : entier de type long long


	/* ---- FLOTTANTS ---- */
	puts(" ---- FLOTTANTS ---- ");
	printf("%%f       : %f\n", d);           // %f : double en notation “normale” (décimale)
    printf("%%e       : %e\n", d);           // %e : double en notation scientifique (x.xxxe+yy)
    printf("%%E       : %E\n", d);           // %E : comme %e mais avec E (X.XXXE+YY)
    printf("%%g       : %g\n", d);           // %g : choisit automatiquement entre %f et %e (forme compacte)
    printf("%%G       : %G\n", d);           // %G : comme %g mais avec E pour scientifique
    printf("%%Lf      : %Lf\n", ld);         // %Lf : flottant long double

	/* ---- CARACTÈRES, CHAÎNES, POINTEURS ---- */
	puts(" ---- CARACTÈRES, CHAÎNES, POINTEURS ---- ");
	printf("%%c       : %c\n", c);           // %c : un caractère (char)
    printf("%%s       : %s\n", string);           // %s : chaîne de caractères terminée par '\0'
    printf("%%p       : %p\n", ptr);         // %p : adresse mémoire (pointeur)
    printf("%%%%      : %%\n");              // %% : affiche un seul caractère %

	/* ---- LARGEUR, PRÉCISION, FLAGS ---- */
	puts(" ---- LARGEUR, PRÉCISION, FLAGS ---- ");
	printf("%%10d     : [%10d]\n", i);       // %10d : largeur min 10, aligné à droite, complété avec des espaces
    printf("%%-10d    : [%-10d]\n", i);      // %-10d : largeur min 10, aligné à gauche
    printf("%%010d    : [%010d]\n", i);      // %010d : largeur min 10, complété avec des zéros à gauche
    printf("%%+d      : [%+d]\n", i);        // %+d : affiche toujours le signe (+ ou -)
    printf("%%.2f     : [%.2f]\n", d);       // %.2f : 2 chiffres après la virgule
    printf("%%8.2f    : [%8.2f]\n", d);      // %8.2f : largeur totale 8, dont 2 chiffres après la virgule

	return 0;		// Fin du code retourner 0
}