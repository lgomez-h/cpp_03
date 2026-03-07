#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "--- Creación de ScavTrap ---\n";
    ScavTrap scav1("Serena");

    std::cout << "\n--- Ataques y energía ---\n";
    scav1.attack("Enemigo1");
    scav1.attack("Enemigo2");
    scav1.takeDamage(30);
    scav1.beRepaired(20);

    std::cout << "\n--- Activando modo guardia ---\n";
    scav1.guardGate();

    std::cout << "\n--- Prueba de copia (constructor de copia) ---\n";
    ScavTrap scav2 = scav1;
    scav2.attack("EnemigoCopia");
    scav2.guardGate();

    std::cout << "\n--- Prueba de asignación ---\n";
    ScavTrap scav3("Beta");
    scav3 = scav1;
    scav3.attack("EnemigoAsignacion");
    scav3.guardGate();

    std::cout << "\n--- Gastar energía hasta agotar ---\n";
    scav1.setEnergyPoints(2);
    scav1.attack("Final1");
    scav1.attack("Final2"); // Queda sin energía
    scav1.attack("Final3"); // Debería fallar

    std::cout << "\n--- Probar KO (hitPoints = 0) ---\n";
    scav1.takeDamage(1000); // Mata al robot
    scav1.attack("Muerto"); // No debería atacar
    scav1.beRepaired(5);    // No debería poder repararse

  //    std::cout << "\n--- Probar constructor por defecto (debe fallar) ---\n";
  //      ScavTrap scav4;
    std::cout << "\n--- Fin del programa ---\n";
    return 0;
}
