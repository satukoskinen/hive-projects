ifconfig | grep 'ether ' | sed -e 's|ether||g' -e 's|[^A-Za-z0-9:]||g'