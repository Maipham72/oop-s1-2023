musician: main-1-1.cpp Musician.cpp
					g++ main-1-1.cpp Musician.cpp -o musical

orchestra: main-1-2.cpp Orchestra.cpp Musician.cpp
					g++ main-1-2.cpp Orchestra.cpp Musician.cpp -o orchestra