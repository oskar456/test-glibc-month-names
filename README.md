Test Czech month names in Glibc
===============================

[![Build Status](https://travis-ci.org/oskar456/test-glibc-month-names.svg?branch=master)](https://travis-ci.org/oskar456/test-glibc-month-names)

In 2016, month names for `cs_CZ` locale in GNU C library [changed from nominative to
genetive case](https://github.com/bminor/glibc/commit/807fee29d2c967e24e3fe05e2182ba53e96e9178). Although genetive case is indeed the [right way of writing date in czech](http://nase-rec.ujc.cas.cz/archiv.php?art=5504), such change can break lots of stuff and cannot be easily detected. See the [discussion about the glibc bug](https://sourceware.org/bugzilla/show_bug.cgi?id=10871#c40). The main purpose of this repository is to check output of the simple C and Python test under Travis CI.

One possible solution can be found in [cal utility](https://github.com/karelzak/util-linux/commit/4e12a62e884441dbce62d3bd38108022e93e25c6), which does compile-time detection of ALTMON. However, it still has to be recompiled after updating glibc.
