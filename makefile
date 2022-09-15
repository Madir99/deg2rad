make:
	g++ -L./. deg2rad.cpp -lfrac -O2
nolib:
	g++ deg2rad.cpp -O2
