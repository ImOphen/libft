# # Libft - @42Born2Code
My implementation of some of the Standard C Library functions including some additional ones.

### What is libft?
Libft is an individual project at [1337][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation

Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two
- I update this list almost every month with new personal functions. If you don't know what a function does, refer to the man
My code is not the best, but it passed all the 42 tests successfully.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/imophen/libft
	cd libft
	make copy
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files and the .c files from the root), call `make clean`

### How do I use the library?

I added an example file called **example.c**, it's using the function **ft_putstr** to print "DON'T PANIC" to the screen. 

If you try to compile it with gcc using `gcc example.c` you will get an *undefined symbol* error for ft_putstr. 

You have to tell the file where your library resides and which library it is using:

`gcc example.c libft.a`

That's it. Now run it using `./a.out`

### How do I test it? How do I test my own implementations?

To test the code we're going to be using @alelievr's [Libft Unit Test][4].
#### 1. To test the code in this repo

1. Clone this repo and cd into it, make sure it's called `libft`:
		
		git clone https://github.com/imophen/libft
		cd libft/

2. Run Make so you can build the library:
		
		make
3. Go back to the root directory and download @alelievr's Libft Unit Test:
		
		cd ..
		git clone https://github.com/alelievr/libft-unit-test
4. Go into the test folder and run the test:

		cd libft-unit-test/
		make f

If you did everything correctly you should get a cool list of tests showing you the function names and if they passed or not.

## Example usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/imophen/get_next_line)
* [fdf](https://github.com/imophen/fdf)
* [Minitalk](https://github.com/imophen/minitalk)
* [ft_printf](https://github.com/imophen/ft_printf)
* [push_swap](https://github.com/imophen/push_swap)

Enjoy.

[2]: http://1337.ma "1337"
[4]: https://github.com/alelievr/libft-unit-test
