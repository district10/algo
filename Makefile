edt:
	make -C src edt

edc:
	make -C src edc

gh: github
github:
	git add -A && git commit -m "`date`" && git push
