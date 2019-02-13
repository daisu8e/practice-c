gcc -fPIC -c vc_swap.c
gcc -fPIC -c vc_putstr.c
gcc -fPIC -c vc_strlen.c
gcc -fPIC -c vc_strcmp.c
gcc -shared -o libvc.so vc_swap.o vc_putstr.o vc_strlen.o vc_strcmp.o

