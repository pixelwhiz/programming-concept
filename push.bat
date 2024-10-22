@echo off
git add .

git rm --cached .gitignore
git commit -m "initial commit"

git push -u origin master
pause