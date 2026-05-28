# Lecture Homework Week 09 - Thursday

For this lecture homework, you will take code from the textbook and create a utility that makes as many directories as are passed in via the command line.

## The Code

The following code (adapted from page 325 of the textbook) makes a single directory using the `mkdir` system call:

```c
/**** Program C8.1: mkdir.c: run as a.out dirname ****/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    int r;
    if (argc < 2) {
        printf("Usage: %s dirname\n", argv[0]); 
        exit(1);
    }

    if ((r = mkdir(argv[1], 0755)) < 0) {
        perror("mkdir"); // print error message
    }
    
    return 0;
}
```

Update this code to make a directory for *each* parameter passed on the command line. For example, given the following command:

```bash
./mkdir dir1 dir2 dir3 dir4\
```

The original code above will only create the first directory (`dir1`). Modify the code so that it loops through all provided arguments and creates `dir1`, `dir2`, `dir3`, and `dir4`, or any arbitrary number of directories provided by the user.

## Compiling and Running the Code

In the `.devcontainer` folder, there is a Dockerfile. You can use this file to create a container and run it locally if you are running low on GitHub Codespaces time.

* **macOS / Linux:** You can complete this assignment locally without Docker.
* **Windows:** You can complete this assignment locally using the Windows Subsystem for Linux (WSL).

To compile the program, run the following commands to set up the build environment and compile your code:

```bash
mkdir build
cmake -B build -S .
cmake --build build
```

Make sure to run your program and test that it successfully creates multiple directories before turning it in.

## What to Turn In

Put your completed work in a file named `mkdir.c`. When executed, your code should create all specified directories.

Once you are finished:

1. **Commit and push** your changes to your GitHub repository.
2. **Submit** the assignment via Gradescope.
3. **Select** your repository when prompted.
