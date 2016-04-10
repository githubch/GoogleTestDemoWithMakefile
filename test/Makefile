INCLUDE = -I../src/myheader/
SRC = ../
TEST_OBJECTS = main_fact
SRC_CPPS = $(shell find $(SRC) -name "*.cpp") 
SYSLIBRARIES = \
               -lgtest \
               -lgtest_main \
               -pthread \
               -std=c++11

COMPILE = g++ $(INCLUDE) $(SRC_CPPS) $(SYSLIBRARIES)
$(TEST_OBJECTS):
	$(COMPILE) -o $@ $^ 
