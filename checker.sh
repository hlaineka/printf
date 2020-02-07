make main_string
./string asdfasdf > string.txt
while read -r line1 && read -r line2; do
	if echo "$first" && echo "$second" | uniq; then
		echo "match"
	else
		echo "not match"
	fi
	first=second
done < string.txt
echo "string and char checked! Press enter to check pointers:"

