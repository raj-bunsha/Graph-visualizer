#normal makefile
# CXX		  := g++
# CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb 

# BIN		:= bin
# SRC		:= src
# INCLUDE	:= include
# LIB		:= lib

# LIBRARIES	:=
# EXECUTABLE	:= main


# all: $(BIN)/$(EXECUTABLE)

# run: clean all
# 	clear
# 	./$(BIN)/$(EXECUTABLE)

# $(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
# 	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

# clean:
# 	-rm $(BIN)/*

#SFML makefile
CXX		  := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb 

BIN		:= bin
SRC		:= src
INCLUDE	:= include
LIB		:= lib

SFML_INCLUDE := /usr/include/SFML
SFML_LIB := /usr/lib

LIBRARIES	:= -lsfml-graphics -lsfml-window -lsfml-system
EXECUTABLE	:= main

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -I$(SFML_INCLUDE) -L$(LIB) -L$(SFML_LIB) $^ -o $@ $(LIBRARIES)

clean:
	-rm $(BIN)/*
