edt:
	make -C src edt

edc:
	make -C src edc

gh: github
github:
	git add -A && git commit -m "`date +'%H:%M:%S @ %b %d, %Y')` - `uname`" && git push
