all:

gh: github
github:
	git add -A && git commit -m "`date`" && git push
