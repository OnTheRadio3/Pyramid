CXX := g++
CFLAGS := -Wall -Wextra

build/pyramid.exe: src/printpyramid.cpp build
	$(CXX) $(CFLAGS) src/printpyramid.cpp -o build/pyramid.exe
	
build:
	mkdir -p build

.PHONY: clean
clean:
	rm -rf build
