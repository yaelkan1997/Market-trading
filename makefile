CPP_FARM: Animal.o Chicken.o chickenFarm.o Cow.o cowFarm.o Farm.o Market.o Sheep.o sheepFarm.o Exception.o farmMarket.o
	g++ Animal.o Chicken.o chickenFarm.o Cow.o cowFarm.o Farm.o Market.o Sheep.o sheepFarm.o Exception.o farmMarket.o -o CPP_FARM

Animal.o:  Animal.cpp Animal.h 
	g++ -c Animal.cpp

Chicken.o:  Chicken.cpp Chicken.h Animal.h
	g++ -c Chicken.cpp

chickenFarm.o: chickenFarm.cpp chickenFarm.h Farm.h Animal.h Chicken.h
	g++ -c chickenFarm.cpp
	
Cow.o: Cow.cpp Cow.h Animal.h
	g++ -c Cow.cpp
	
cowFarm.o: cowFarm.cpp cowFarm.h Farm.h Animal.h Cow.h
	g++ -c cowFarm.cpp
	
Exception.o: Exception.cpp Exception.h
	g++ -c Exception.cpp

Farm.o: Farm.cpp Farm.h Animal.h
	g++ -c Farm.cpp

farmMarket.o: farmMarket.cpp Market.h sheepFarm.h Farm.h Animal.h Sheep.h cowFarm.h Cow.h chickenFarm.h Chicken.h
	g++ -c farmMarket.cpp
	
Market.o:  Market.cpp Market.h sheepFarm.h Farm.h Animal.h Sheep.h cowFarm.h Cow.h chickenFarm.h Chicken.h Exception.h
	g++ -c Market.cpp
						
Sheep.o:  Sheep.cpp Sheep.h Animal.h
	g++ -c Sheep.cpp

sheepFarm.o:  sheepFarm.cpp sheepFarm.h Farm.h Animal.h Sheep.h
	g++ -c sheepFarm.cpp

clean:
	rm -f *.o
