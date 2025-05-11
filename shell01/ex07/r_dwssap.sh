awk -v OFS=", " -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" -F: '(NR >= FT_LINE1 && NR <= FT_LINE2) { print $1 }' /etc/passwd
