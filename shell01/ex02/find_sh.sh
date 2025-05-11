find . -type f -iname "*.sh" -printf "%f\n" | sed -e "s/.sh$//g"
