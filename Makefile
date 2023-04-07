vehicle: main-1-1.cpp Motorbike.cpp Motorbike.h Bus.cpp Bus.h Car.cpp Car.h Vehicle.cpp Vehicle.h
				g++ main-1-1.cpp Motorbike.cpp Bus.cpp Car.cpp Vehicle.cpp -o vehicle


parkinglot: main-1-2.cpp Motorbike.cpp Motorbike.h Bus.cpp Bus.h Car.cpp Car.h Vehicle.cpp Vehicle.h ParkingLot.cpp ParkingLot.h
						g++ main-1-2.cpp Motorbike.cpp Bus.cpp Car.cpp Vehicle.cpp ParkingLot.cpp -o parkinglot

overstay: main-1-3.cpp Motorbike.cpp Motorbike.h Bus.cpp Bus.h Car.cpp Car.h Vehicle.cpp Vehicle.h ParkingLot.cpp ParkingLot.h
					g++ main-1-3.cpp Motorbike.cpp Bus.cpp Car.cpp Vehicle.cpp ParkingLot.cpp -o overstay