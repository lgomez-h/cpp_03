/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:20:59 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/17 22:05:10 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>


DiamondTrap::DiamondTrap(const std::string &name) 
    : ClapTrap(name + "_clap_name"), ScavTrap(name),
    FragTrap(name), _name(name) {
        this-> _hitPoints = FragTrap::_hitPoints;
        this-> _energyPoints = ScavTrap::_energyPoints;
        //this-> _attackDamage = FragTrap::_attackDamage;
        std::cout << "DiamondTrap " << _name << " created." << std::endl;
    }
DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
        std::cout << "DiamondTrap " << _name << " copied." << std::endl;
    }
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap " << _name << " assigned." << std::endl;
    return *this;
}
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destroyed." << std::endl;
}
void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI() const {
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}







    
    
