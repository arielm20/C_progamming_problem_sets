CC = gcc
CFLAGS = -Wall
BUILD_DIR = build
SRC_DIR = src
DOC_DIR = documentation
SUBDOC_DIR = documentation/docs/

main : $(DOC_DIR) $(SUBDOC_DIR) | $(SRC_DIR)/main.c $(BUILD_DIR)/student.o $(BUILD_DIR)/course.o
	./scripts/buildbash
	$(CC) $(CFLAGS) -o $@ $(SRC_DIR)/main.c $(BUILD_DIR)/student.o $(BUILD_DIR)/course.o
	mv $@ $(BUILD_DIR)

student.o : $(SRC_DIR)/student.c
	./scripts/buildbash
	$(CC) -c $<
	mv $@ $(BUILD_DIR)

course.o : $(SRC_DIR)/course.c
	./scripts/buildbash
	$(CC) -c $<
	mv $@ $(BUILD_DIR)

dir :
	./scripts/makedir

clean :
	rm -r -f build



