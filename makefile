# Makefile
COMPILER = gcc
COMPILER_FLAGS = -o
SOURCE_FILES = src/main.c

build: src/main.c
	$(COMPILER) $(COMPILER_FLAGS) dist/main $(SOURCE_FILES) 