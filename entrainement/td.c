// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// void test(unsigned int n);

// int main(int argc, const char *argv[]) {     
//     test(atoi(argv[1]));
//     return 0;
// }

// #include <stdio.h>
// void test(const unsigned int N)
// {
// 	for(int k = 0; k < N; k++)
// 	{
// 		for(int i = 0; i < N; i++)
// 			printf("X");
// 		puts("");
// 		printf("%s", k%2 == 0 ? "" : "X");
// 		for (int i = 1; i < N; i++)
// 			printf(".");
// 		printf("%s", k%2 == 0 ? "X" : "");
// 		puts("");
// 	}

// 	for(int i = 0; i < N; i++)
// 		printf("X");
// 	puts("");
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <string.h>
// #include <ctype.h>

// unsigned int test(unsigned long long x);

// unsigned int tref(unsigned long long x) {
//     unsigned int n=0;
//     //printf("%5d - ",x);
//     while(x) {
//         n+=x&1;
//         x>>=1;
//     }
//     //printf("%d\n",n);
//     return n;
// }

// int main() {
//     //srand((unsigned int)time(NULL));
//     srand(42);
//     int global_ok=1;
//     int local_ok=1;
//     for(unsigned long long k=0;k<20;k++) {
//         unsigned long long x = rand()%32767;
//         switch(k) {
//             case 0: x=12; break;
//             case 1: x=15; break;
//             case 2: x=17; break;
//         }
//         global_ok=test(x)!=tref(x) ? 0 : global_ok;
//         local_ok=test(x)!=tref(x) ? 0 : 1;
//         //printf("x=%6llu, %d %d %s\n",x,tref(x), test(x), local_ok?"OK":"NOT OK");
//         printf("x=%6llu, n=%2d %s\n",x,test(x), local_ok?"OK":"NOT OK");
        
//     }
//     printf("%s", global_ok?"OK":"NOT OK");

//     return 0;
// }

// unsigned int test(unsigned long long x) {
// 	unsigned int n = 0;
// 	while(x)
// 	{
// 		n+=x&1;
//         x>>=1;
// 	}

// 	return n;
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// double median(const double a, const double b, const double c);

// double min(const double x, const double y) {
//     return x<y?x:y;
// }
// double max(const double x, const double y) {
//     return x>y?x:y;
// }
// int main1() {
//     double a=10.;
//     double b=38.;
//     double c=42.;
//     double m=0.;
//     int ok=1;
//     ok=median(a,b,c)!=b?0:ok;
//     ok=median(a,c,b)!=b?0:ok;
//     ok=median(b,a,c)!=b?0:ok;
//     ok=median(b,c,a)!=b?0:ok;
//     ok=median(c,a,b)!=b?0:ok;
//     ok=median(c,b,a)!=b?0:ok;
//     printf("%s",ok?"OK":"NOT OK");
//     return 0;
// }
// int main() {
//     double a=10.;
//     double b=38.;
//     double c=42.;
//     double m=0.;
//     int ok=1;
//     double count=0;
//     ok=median(a,b,c)!=b?0:ok;
//     ok=median(a,c,b)!=b?0:ok;
//     ok=median(b,a,c)!=b?0:ok;
//     ok=median(b,c,a)!=b?0:ok;
//     ok=median(c,a,b)!=b?0:ok;
//     ok=median(c,b,a)!=b?0:ok;
//     printf("%s",ok?"OK":"NOT OK");
//     return 0;
// }

// double min(const double x, const double y);
// double max(const double x, const double y);

// double median(const double a, const double b, const double c) {
    
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void test(void);

// int main() {
//     test();
//     return 0;
// }


// #include <stdio.h>
// void test(void) {
//     int result;
// 	int counter = 12;

// 	for (result = 1; counter >= 2; counter--)
// 	{
// 		result = result * counter;
// 	}

// 	printf("%d", result);
//     return;
// }


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int test(const char r);

int main() {
    int ok=1;
    ok=test('a') ? 0 : ok;
    ok=!test('o') ? 0 : ok;
    ok=!test('O') ? 0 : ok;
    ok=!test('y') ? 0 : ok;
    ok=!test('Y') ? 0 : ok;
    ok=test('n') ? 0 : ok;
    printf("%s", ok?"OK":"NOT OK");
    return 0;
}

int test(const char r) {
    if(r == 'o' || r == 'O' || r == 'y' || r == 'Y')
	{
		return 1;
	}
	else{
		return 0;
	}
}
