default: test

test:
	$(CXX) -std=c++1y testcase.cpp
	./a.out

clean:
	rm -f a.out
