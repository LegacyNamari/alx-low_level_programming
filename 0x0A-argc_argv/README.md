# 0x0A. C-argc, argv

## About

- using arguements passed to your program.
- argc and argv
- what does argc and argv mean?
- how to compile with unused variables.

## Technologies

- Tested on Ubuntu `20.04 LTS`

## Files

All of the Following files are programs written in C

|Filename|Description|
|--------|-----------|
|[mynewnameis](./0-whatsmyname)|Prints the name of the program followed by a new line|
|[nargs](./1-args.c)|Prints the number of arguements passed into the program|
|[args](./2-args.c)|Prints all the arguements it receives.|
|[mul](3-mul.c)|Multiplies two numbers|
|[add](4-add.c)|Adds positive numbers|
|[change](100-change.c)|Prints the minimum number of coins to make change for an amount of money.|

> March,2022 &copy;Kinyarasam

## Tasks
### Mandatory
**[0-whatsmyname.c](0-whatsmyname.c)** - The program prints its name followed by a new line
```
$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
$ ./mynameis
./mynameis
$ mv mynameis mynewnameis
$ ./mynewnameis
./mynewnameis
```

**[1-args.c](1-args.c)** - The program prints the number of arguments passed into it
```
$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
$ ./nargs
0
$ ./nargs hello
1
$ ./nargs "hello, world"
1
$ ./nargs hello, world
2
```

**[2-args.c](2-args.c)** - The program prints all arguments it receives
```
$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
$ ./args
./args
$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```

**[3-mul.c](3-mul.c)** - The program multiplies two numbers
```
$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul 2 0
0
$ ./mul 245 3245342
795108790
$ ./mul
Error
```

**[4-add.c](4-add.c)** - The program adds positive numbers
```
$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0
```

### Advanced
**[100-change.c](100-change.c)** - The program prints the minimum number of coins to make change for some amount of money
```
$ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
$ ./change
Error
$ ./change 10
1
$ ./change 100
4
$ ./change 101
5
$ ./change 13
3
```
