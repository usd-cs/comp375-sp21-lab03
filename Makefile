CXX = g++
CXXFLAGS = -Wall -Wextra -g -std=c++11


TARGETS = hello hello-again stringy func-calls

# TODO: finish
all: $(TARGETS)

clean:
	$(RM) $(TARGETS)
