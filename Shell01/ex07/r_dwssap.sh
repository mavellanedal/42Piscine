cat /etc/passwd | awk -F ':' '{getline; print $1}' | rev | sort -r | head -n $FT_LINE2 | tail -n $(($FT_LINE2 - $FT_LINE1 + 1)) | tr '\n' ' ' | sed -e "s/ /, /g" | sed -e "s/, $/./"
