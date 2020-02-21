make main_string > bin.txt
echo -e "\n\ntime for ft_printf:"
time ./stringft asdfasdf > stringft.txt
echo -e "\n\ntime for printf:"
time ./stringpf asdfasdf > stringpf.txt
echo -e "\n\n< printf"
echo -e "---" 
echo -e "> yours\n\n"
diff -a stringpf.txt stringft.txt
rm -rf bin.txt
echo "string and char checked! Press enter to check pointers:"
read text
gcc main_pointer.c -o pointer libftprintf.a
make clean > bin.txt
./pointer asdf
rm -rf bin.txt
gcc main_pointer2.c -o pointer2 libftprintf.a
make clean > bin.txt
./pointer asdf
rm -rf bin.txt
gcc main_pointer3.c -o pointer3 libftprintf.a
make clean > bin.txt
./pointer asdf
rm -rf bin.txt
echo "pointers checked! Press enter to check hexas and octas:"
read text
make main_hex > bin.txt
echo -e "\n\ntime for ft_printf:"
time ./hexft asdfasdf > hexft.txt
echo -e "\n\n time for printf:"
time ./hexpf asdfasdf > hexpf.txt
echo -e "\n\n< printf"
echo -e "---"
echo -e "> yours\n\n"
diff -a hexpf.txt hexft.txt
rm -rf bin.txt
echo "hexas and octas checked! Press enter to check ints:"
read text
make main_int > bin.txt
echo -e "\n\ntime for ft_printf:"
time ./intft asdfadf > intft.txt
echo -e "\n\ntime for printf:"
time ./intpf asdfadf > intpf.txt
echo -e "\n\n< first printf"
echo -e "---"
echo -e "> yours\n\n"
diff -a intpf.txt intft.txt
echo "ints, doubles and unsigned checked!"
