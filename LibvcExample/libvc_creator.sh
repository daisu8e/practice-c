(gcc -c -Wall -Werror -Wextra *.c) && (ar -cvq libvc.a *.o)
rm ./*.o
