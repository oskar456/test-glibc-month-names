#!/usr/bin/env python3

import locale
import datetime

def print_format_string_and_month_names(fmt):
    print("Format string: {}".format(fmt))
    mnames = []
    for month in range(1, 13):
        d = datetime.date(2018, month, 1)
        mnames.append(datetime.date.strftime(d, fmt))
    print("Result:", ", ".join(mnames))
    print("")

def main():
    print("Locale: ", locale.getlocale(locale.LC_TIME)[0])
    print_format_string_and_month_names("%B")
    print_format_string_and_month_names("%OB")
    locale.setlocale(locale.LC_TIME, "cs_CZ.UTF-8")
    print("Locale: ", locale.getlocale(locale.LC_TIME)[0])
    print_format_string_and_month_names("%B")
    print_format_string_and_month_names("%OB")

if __name__ == "__main__":
    main()
