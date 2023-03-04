# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Daniel Pérez Rodríguez
# @brief A Makefile example for simple C++ programs
# 

CXX = g++						           # Compilador que usamos
CXXFLAGS = -std=c++17 -Wall	 	 # Opciones que queremos para nuestro compilador
# LDFLAGS =						           # The linker options (if any)
TARGET = P5_leap-year 
OBJS = P5_leap-year.o

# El target all incluye todos los archivos que maneja el Makefile
all: $(TARGET)

$(TARGET): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $@ $^

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

# Borrar todo lo innecesario
clean:
	rm -f *.o $(TARGET) doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
