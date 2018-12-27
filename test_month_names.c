#include <stdio.h>
#include <time.h>
#include <locale.h>

void print_format_string_and_month_names(char* fmt){
	time_t t;
	struct tm *tm;
	char res[200];
	printf("Format string: %s\nResult: ", fmt);
	t = time(NULL);
	tm = localtime(&t);
	for(int m=0; m<12; m++){
		tm->tm_mon = m;
		strftime(res, sizeof(res), fmt, tm);
		printf("%s", res);
		if (m < 11) {
				printf(", ");
		} else {
				printf("\n\n");
		}
	}
}

int main(int argc, char* argv[]){
	printf("Locale: %s\n", setlocale(LC_TIME, NULL));
	print_format_string_and_month_names("%B");
	print_format_string_and_month_names("%OB");
	printf("Locale: %s\n", setlocale(LC_TIME, "cs_CZ.UTF8"));
	print_format_string_and_month_names("%B");
	print_format_string_and_month_names("%OB");
	printf("Locale: %s\n", setlocale(LC_TIME, "cs_CZ"));
	print_format_string_and_month_names("%B");
	print_format_string_and_month_names("%OB");
}
