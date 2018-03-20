# Lab 7 - introduction to the C++ compiler

An introduction to compiling C++ programs.

## Creating and Linking Static Libraries

```bash
$ g++ -c Foo.cpp
$ mkdir -p csc131/lib
$ ar crv csc131/lib/libFoo.a Foo.o
$ g++ -Icsc131/include Main.o -Lcsc131/lib -lFoo
```
