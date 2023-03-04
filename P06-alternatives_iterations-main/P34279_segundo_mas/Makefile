# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Daniel Pérez Rodríguez
# @brief A Makefile example for simple C++ programs
#

CXX = g++                      # The C++ compiler command
CXXFLAGS = -std=c++17 -Wall    # The C++ compiler options (C++14, preserve debug symbols and warn all)
LDFLAGS =                      # The linker options (if any)

# The all target builds all of the programs handled by the makefile.
all: P34279_segundo_mas

P34279_segundo_mas: P34279_segundo_mas.o
  $(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

  $(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
clean :
  rm -f *.o P34279_segundo_mas doc
  rm -rf *~ basura b i
  rm -rf a.out
  find . -name '*~' -exec rm {} \;
  find . -name basura -exec rm {} \;

