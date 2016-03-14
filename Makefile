all:

gh: github
github:
	git add -A && git commit -m "`date`" && git push

diff:
	git diff

pull:
	git pull

status:
	git status

m:
	$(EDITOR) Makefile
