#include "NeuroXCore.h"
#include "../Systems/PlanetSystem.h"
#include "../Systems/AlienAI.h"
#include "../Systems/EvolutionSystem.h"
#include "../Systems/VehicleSystem.h"
#include <iostream>

void NeuroXEngine::Initialize() {
    std::cout << "💻 [NeuroX] Initialization...\n";
    PlanetSystem::InitPlanets();
    AlienAI::InitAliens();
    EvolutionSystem::InitCreatures();
    VehicleSystem::InitVehicles();
}

void NeuroXEngine::Run() {
    std::cout << "🚀 [NeuroX] Simulation Running...\n";
    for (int tick = 0; tick < 5; ++tick) {
        std::cout << "\n--- Universe Tick " << tick + 1 << " ---\n";
        PlanetSystem::UpdatePlanets();
        AlienAI::SimulateAliens();
        EvolutionSystem::EvolveCreatures();
        VehicleSystem::SimulateVehicles();
    }
}