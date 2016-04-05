 grep -i -w "nicolas" $1 | grep -i -w "bomber" | grep "\-" |sed 's/@.*//' | sed "s/[^0-9\-]//g" 
