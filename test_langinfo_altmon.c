#define _GNU_SOURCE
#include <stdio.h>
#include <langinfo.h>
#include <locale.h>

void print_month_names(int offset){
	printf("Result: ");
	for(int m=0; m<12; m++){
		printf("%s", nl_langinfo(offset + m));
		if (m < 11) {
				printf(", ");
		} else {
				printf("\n\n");
		}
	}
}

int main(int argc, char* argv[]){
	printf("Locale: %s\nSet: MON\n", setlocale(LC_TIME, NULL));
	print_month_names(MON_1);
	printf("Locale: %s\nSet: ALTMON\n", setlocale(LC_TIME, NULL));
	print_month_names(ALTMON_1);
	printf("Locale: %s\nSet: MON\n", setlocale(LC_TIME, ""));
	print_month_names(MON_1);
	printf("Locale: %s\nSet: ALTMON\n", setlocale(LC_TIME, NULL));
	print_month_names(ALTMON_1);
	printf("Locale: %s\nSet: MON\n", setlocale(LC_TIME, "cs_CZ"));
	print_month_names(MON_1);
	printf("Locale: %s\nSet: ALTMON\n", setlocale(LC_TIME, NULL));
	print_month_names(ALTMON_1);
}
