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
clean : 
	rm -rf src/*.o *~ */*~ *.aux *.log *.out
