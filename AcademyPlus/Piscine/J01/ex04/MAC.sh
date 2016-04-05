ifconfig | grep 'ether ' | sed 's/[^0-9:a-z]//g' | sed 's/ether//g'
