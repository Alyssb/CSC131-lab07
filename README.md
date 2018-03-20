# Lab 7 - introduction to the C++ compiler

An introduction to compiling C++ programs.

## Linking Libraries

```bash
g++ -L/usr/local/lib -lcppunit -std=c++14 UnitTestRunner.cpp -o runner
```

-L

-l

-o

```bash
g++ -c Foo.cpp
ar crv csc131/lib/libFoo.a Foo.o
g++ -Icsc131/include -Lcsc131/lib -lFoo Main.o
```
