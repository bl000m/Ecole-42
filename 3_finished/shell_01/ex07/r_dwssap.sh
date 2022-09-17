#!/bin/sh
cat /etc/passwd | cut -d":" -f 1 |  sed -e '/^[ \t]*#/d' | sed '2n;N;s/.*\n//' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed 's/,/, /g' | sed 's/\(.*\),/\1./' | tr -d '\n'
