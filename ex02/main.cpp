/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:33:10 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/12/27 18:19:25 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "Creando FragTrap A...\n";
    FragTrap a("Robotin");
    std::cout << a.getName() << std::endl;
    std::cout << a.getHitPoints() << std::endl;
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getAttackDamage() << std::endl;

    std::cout << "\nProbando highFivesGuys:\n";
    a.highFivesGuys();

    std::cout << "\nCopiando FragTrap A en FragTrap B...\n";
    FragTrap b(a);
    std::cout << b.getName() << std::endl;
    std::cout << b.getHitPoints() << std::endl;
    std::cout << b.getEnergyPoints() << std::endl;
    std::cout << b.getAttackDamage() << std::endl;

    std::cout << "\nAsignando FragTrap C a FragTrap B...\n";
    FragTrap c("Otro");
    std::cout << c.getName() << std::endl;
    std::cout << c.getHitPoints() << std::endl;
    std::cout << c.getEnergyPoints() << std::endl;
    std::cout << c.getAttackDamage() << std::endl;

    b = c;
    std::cout << b.getName() << std::endl;
    std::cout << b.getHitPoints() << std::endl;
    std::cout << b.getEnergyPoints() << std::endl;
    std::cout << b.getAttackDamage() << std::endl;

    //std::cout << "\nIntentando crear FragTrap sin nombre (debe dar error):\n";
   // FragTrap d;Descomenta para probar el error (el programa no compilara)

    std::cout << "\nFin del programa, destructores llamados automáticamente.\n";
    return 0;
}
