plot.pdf: calculo.txt grafica.py
	python grafica.py

%.dat : a.out
	./a.out 

a.out: OscarOchoa_Final.cpp
	g++ OscarOchoa_Final.cpp

clean:
	rm -rf a.out calculo.txt grafica.pdf 