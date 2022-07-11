#
#
#
#

CXXFLAGS = -Wall -Werror -std=c++14

cfg: cfg.o
	g++ $(CXXFLAGS) -o cfg cfg.o
cfg.o: cfg.cpp
	g++ $(CXXFLAGS) -c cfg.cpp
clean:
	rm -f *.o cfg
