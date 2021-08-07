all : tuxquest clean

exam : Exam.tex Exam.pdf clean

tuxquest : src/tuxquest.c src/inventory.c src/inventory.h src/stats.c src/stats.h src/utils.c src/locations.c src/locations.h
	gcc -Wall -o tuxquest src/tuxquest.c

Exam.pdf : 
	pdflatex Exam.tex

test : 
	echo "Testing tuxquest"	
	chmod +x ./file_output.sh
	./file_output.sh
	diff testing/*.test testing/*.output
	cd ./testing
	rm *.test

Doxyfile :
	doxygen -g

docs : Doxyfile
	mkdir docs
	cd ./docs
	doxygen Doxyfile

profile :
	gcc -pg src/tuxquest.c -o tuxquest
	./tuxquest
	gprof tuxquest < testing/fullAdventure > profilerResults.out

coverage : 
	gcc -fprofile-arcs -ftest-coverage src/tuxquest.c
	./a.out < testing/fullAdventure
	gcov tuxquest.c

clean : 
	rm -rf src/*.o *~ */*~ *.aux *.log *.out
