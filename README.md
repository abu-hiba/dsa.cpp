# dsa.cpp

DSA fun with C++

In the root directory, there is a directory for each data structure I have covered. Each of these directories follows
the structure described below.

In the `/examples` directory for each data structure there are directories for common algorithms explained in the book
[A Common-Sense Guide to Data Structures and Algorithms](https://pragprog.com/titles/jwdsal2/a-common-sense-guide-to-data-structures-and-algorithms-second-edition/).
The examples used in the book are written in JavaScript, Python and Ruby. I've converted them to C++
here to try and progress my C++ skills.

In the `/exercises` directory I've written my solutions to the coding exercises from the book for each data structure.
Each sub-directory contains one solution and a README that contains the question. For any exercises that
ask you to modify some given code, I have converted that code to C++ and included it in the README.

### Build and run each example/exercise solution

Navigate into the example/exercise directory e.g.
```sh
cd arrays_and_strings/examples/bubble_sort
```

Configure
```sh
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -S . -B build
```

Build
```sh
cmake --build build
```

Run
```sh
build/BubbleSort 20 4 56 1 18
```

For each solution you can run the executable with no arguments to get a description of what parameters are expected:

```sh
$ build/BubbleSort                                                                                                                                                                                             15:52:01
Specify a list of integers e.g.:

 build/BubbleSort 8 3 5 20 1

```

