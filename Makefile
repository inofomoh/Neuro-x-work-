CXX = g++
CXXFLAGS = -std=c++17 -IEngine -ISystems

SRC = main.cpp \
      Engine/NeuroXCore.cpp \
      Systems/PlanetSystem.cpp \
      Systems/AlienAI.cpp \
      Systems/EvolutionSystem.cpp \
      Systems/VehicleSystem.cpp

OUT = NeuroX

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(OUT)