# C-struct

This repository contains code for creating and manipulating C structures. A structure is a user-defined data type that groups related variables of different types. Structures are useful for representing complex data such as records, objects, or geometric shapes.

## How to use

To use this repository, you need to have a C compiler and a text editor. You can clone or download this repository using the following command:

```bash
git clone https://github.com/awkward-py/C-struct.git
```

Then, you can navigate to the directory and open the files in your editor. The files are:

- `struct.c`: This file defines a structure called `person` that has three fields: `name`, `age`, and `gender`. It also shows how to create, initialize, and access structure variables.
- `struct_array.c`: This file shows how to create and manipulate an array of structures. It defines a structure called `student` that has four fields: `name`, `roll`, `marks`, and `grade`. It also shows how to sort the array based on different criteria using a comparison function and the `qsort` library function.
- `struct_pointer.c`: This file shows how to use pointers to structures. It defines a structure called `point` that has two fields: `x` and `y`. It also shows how to create, initialize, and access structure pointers, and how to pass them to functions.
- `struct_function.c`: This file shows how to define and use functions that take structures as parameters or return structures as values. It defines a structure called `rectangle` that has two fields: `length` and `width`. It also defines functions to calculate the area, perimeter, and diagonal of a rectangle, and to compare two rectangles based on their areas.

## How to compile and run

To compile and run the code, you need to use the `gcc` compiler and the `./` command. For example, to compile and run the `struct.c` file, you can use the following commands:

```bash
gcc struct.c -o struct
./struct
```

You can replace `struct.c` with any other file name to compile and run it. You can also use any other compiler or IDE that supports C programming.

## How to contribute

If you want to contribute to this repository, you can fork it and make changes to your own copy. Then, you can create a pull request to merge your changes to the main repository. You can also report any issues or suggestions using the issues tab on GitHub.
