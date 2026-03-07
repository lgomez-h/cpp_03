#include "DiamondTrap.hpp"
#include <iostream>

void printStats(const DiamondTrap& dt, const std::string& nombre) {
    std::cout << "Stats de " << nombre
        << " | Name: " << dt.getName()
        << " | HitPoints: " << dt.getHitPoints()
        << " | EnergyPoints: " << dt.getEnergyPoints()
        << " | AttackDamage: " << dt.getAttackDamage()
        << std::endl;
}

int main() {
    std::cout << "*** Creando DiamondTrap 'Javi' ***" << std::endl;
    DiamondTrap d1("Javi");
    printStats(d1, "d1");
    
    // Comprobar ataque y decremento de energía
    std::cout << "\n--- PROBANDO ATAQUE Y ENERGY ---" << std::endl;
    d1.attack("enemigo");
    printStats(d1, "d1 tras atacar");

    // Probar repararse
    std::cout << "\n--- PROBANDO REPARACIÓN ---" << std::endl;
    d1.beRepaired(20);
    printStats(d1, "d1 tras reparar");

    // Dañar al personaje
    std::cout << "\n--- PROBANDO DAÑO ---" << std::endl;
    d1.takeDamage(123);
    printStats(d1, "d1 tras daño fatal");

    // Intentar reparar muerto
    std::cout << "\n--- REPARACIÓN estando a 0 vida ---" << std::endl;
    d1.beRepaired(10);

    // Probar setenergyPoints usando el método de ScavTrap
    std::cout << "\n--- PROBANDO setenergyPoints DE SCAVTRAP ---" << std::endl;
    d1.setEnergyPoints(10);
    std::cout << "Tras setenergyPoints a 10 (usando ScavTrap):" << std::endl;
    printStats(d1, "d1 tras setenergyPoints");

    // Probar ataque con energía reseteada
    d1.attack("enemigo-resucitado");
    printStats(d1, "d1 tras otro ataque");

    // Probar métodos especiales heredados
    std::cout << "\n--- LLAMANDO MÉTODOS ESPECIALES ---" << std::endl;
    d1.guardGate();        // De ScavTrap
    d1.highFivesGuys();    // De FragTrap

    std::cout << "\n--- whoAmI (de DiamondTrap) ---" << std::endl;
    d1.whoAmI();

    // Pruebas de copia y asignación
    std::cout << "\n--- COPIA Y ASIGNACIÓN ---" << std::endl;
    DiamondTrap d2 = d1;
    d2.whoAmI();
    printStats(d2, "d2 (copia de d1)");

    DiamondTrap d3("Otro");
    printStats(d3, "d3 antes de asignación");
    d3 = d1;
    printStats(d3, "d3 tras asignación de d1");
    d3.whoAmI();

    std::cout << "\n--- PRUEBA CONSTRUCTOR POR DEFECTO (debe lanzar excepción) ---" << std::endl;
    // DiamondTrap d4; // Descomenta para probar la excepción (como pide el subject).

    std::cout << "\n*** FIN DEL PROGRAMA ***" << std::endl;
    return 0;
}
