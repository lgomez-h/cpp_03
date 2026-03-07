/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:47:53 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/06/17 19:32:06 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " created with "
              << _hitPoints << " hit points, "
              << _energyPoints << " energy points, and "
              << _attackDamage << " attack damage.\n";
    }
ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other._name), _hitPoints(other._hitPoints),
      _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
    std::cout << "ClapTrap " << _name << " copied with "
              << _hitPoints << " hit points, "
              << _energyPoints << " energy points, and "
              << _attackDamage << " attack damage.\n";
      }
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destroyed.\n";
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " assigned with ="
              << _hitPoints << " hit points, "
              << _energyPoints << " energy points, and "
              << _attackDamage << " attack damage.\n";
    return *this;
}
void ClapTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!\n";
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " canot attack!\n";
    }
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= _hitPoints) {
        _hitPoints = 0;
    } else {
        _hitPoints -= amount;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount
              << " points of damage! hit points left: " << _hitPoints << "\n";
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repairs itself for " << amount
                  << " points! hit points now: " << _hitPoints << "\n";
    } else {
        std::cout << "ClapTrap " << _name << " canot be repaired!\n";
    }
}
const std::string &ClapTrap::getName() const {
    return _name;
}
unsigned int ClapTrap::getHitPoints() const {
    return _hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}
unsigned int ClapTrap::getAttackDamage() const {
    return _attackDamage;
}
void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
    this->_energyPoints = energyPoints;
}
