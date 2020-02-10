make main_string > bin.txt
./stringft asdfasdf > stringft.txt
./stringpf asdfasdf > stringpf.txt
diff -a stringpf.txt stringft.txt
echo "string and char checked! Press enter to check pointers:"
read text
make main_hex > bin.txt
./hexft asdfasdf > hexft.txt
./hexpf asdfasdf > hexpf.txt
diff -a hexpf.txt hexft.txt
echo "pointers, hexas and octas checked!"
