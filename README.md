# C program that prints its name

## How to use

Compile with *compiler* and **make**,
gcc is the default compiler

```
$ make CC=<compiler>
$ ./myname
myname
```

You can create a symbolic link to ./myname,
and the program will print the name of the
symbolic link!

```
$ ln -s something myname
$ ./something
something
```

You can place the program wherever and execute
it from wherever, it will still show only its name
or the name of the link to itself

```
$ mv myname /usr/bin
$ myname
myname
$ ~/binaries/myname
myname
```
