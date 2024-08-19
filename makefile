# Makefile
COMPILER = gcc
COMPILER_FLAGS = -o
SOURCE_FILES = src/main.c
TARGET = calculator
PREFIX = /usr/bin

$(TARGET): $(SOURCE_FILES)
	$(COMPILER) $(COMPILER_FLAGS) $@ $^

.PHONY=install
install: $(TARGET)
	install -m 755 $(TARGET) $(PREFIX)/$(TARGET)	
 
.PHONY=uninstall
uninstall:
	rm -f $(PREFIX)/$(TARGET)		