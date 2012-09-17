all: heap quick_sort

heap: heap.cpp
	g++ -g -o heap heap.cpp

quick_sort: quick_sort.cpp
	g++ -g -o quick_sort quick_sort.cpp