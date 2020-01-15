git init
git add .
git commit -m "first commit"
echo Insert repository path
read varname
git remote add origin $varname
git push -u origin master
