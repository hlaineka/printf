# printf
My implementation of the libc printf-function.

Functions used in this project were malloc, free, write and stdarg functions. All other functions written by me.

Working conversion: cspdiouxX  with flags -h -hh -l and -ll and converion f with flags -l and -L. Flags #0-+ working with every conversion as well as width and precision. Width and precision both work also with wildcard * option. Also a fast implementation of colored printing added.
The buffer management of my ft_printf differs from that of printf.
