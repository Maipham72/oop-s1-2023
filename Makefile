musician: main-1-1.cpp Musician.cpp
					g++ main-1-1.cpp Musician.cpp -o musical

orchestra: main-1-2.cpp Orchestra.cpp Musician.cpp
					g++ main-1-2.cpp Orchestra.cpp Musician.cpp -o orchestra

player: main-1-3.cpp Player.h Player.cpp
				g++ main-1-3.cpp Player.h -o player

team: main-1-4.cpp Player.cpp Team.cpp
			g++ main-1-4.cpp Team.cpp Player.cpp -o team