#!/usr/bin/env python3

from distutils.core import setup, Extension

def main():
	setup(
		name = "helloworld",
		version = "1.0",
		description = "Prints a Hello World",
		ext_modules = [Extension("helloworld", ["bind.c", "libmypy.c"])]
		);

if __name__ == "__main__":
	main()
