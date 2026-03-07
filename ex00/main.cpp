/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:20:33 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/15 13:20:37 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap a("Ander");
    ClapTrap b("Berta");

    a.attack("Berta");
    std::cout << "_energyPoints de a :" << a.getEnergyPoints() << std::endl;
    b.takeDamage(a.getAttackDamage());

    b.beRepaired(5);
    b.attack("Ander");
    a.takeDamage(b.getAttackDamage());
    std::cout << "_EnergyPoints de Berta :" << b.getEnergyPoints() << std::endl;

    a.takeDamage(15); 
    a.beRepaired(3);  

    return 0;
}
