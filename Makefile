game: bin/main.o bin/Personnage.o bin/Character.o bin/Warrior.o bin/Thief.o bin/Game.o bin/Wizzard.o bin/Heal.o
	g++ bin/*.o -o game

bin/Character.o: src/Character.cpp head/Character.h
	g++ -c src/Character.cpp -o bin/Character.o
bin/Warrior.o: src/Warrior.cpp head/Warrior.h
	g++ -c src/Warrior.cpp -o bin/Warrior.o
bin/main.o: src/main.cpp head/main.h head/Character.h
	g++ -c src/main.cpp -o bin/main.o
bin/Personnage.o: src/Personnage.cpp head/Personnage.h
	g++ -c src/Personnage.cpp -o bin/Personnage.o
bin/Thief.o: src/Thief.cpp head/Thief.h
	g++ -c src/Thief.cpp -o bin/Thief.o

bin/Game.o: src/Game.cpp head/Game.h
	g++ -c src/Game.cpp -o bin/Game.o
bin/Wizzard.o: src/Wizzard.cpp head/Wizzard.h
	g++ -c src/Wizzard.cpp -o bin/Wizzard.o
bin/Heal.o: src/Heal.cpp head/Heal.h
	g++ -c src/Heal.cpp -o bin/Heal.o
bin/t.o: src/t.cpp head/t.h
	g++ -c src/t.cpp -o bin/t.o
clean:
	rm bin/*