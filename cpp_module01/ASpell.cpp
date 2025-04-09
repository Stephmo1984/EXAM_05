/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/04/09 16:12:41 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"


    ASpell::ASpell(std::string name, std::string effect): _name(name), _effects(effect) {}
    
    ASpell::~ ASpell(void) {}


    ASpell::ASpell(ASpell &other): _name(other._name), _effects(other._effects) {}
    
    ASpell& ASpell::operator=(ASpell &other)
    {
        if (this != &other)
        {
            this->_name = other._name;
            this->_effects = other._effects;
        }
        return *this;
    }


    const std::string  ASpell::getName(void) const 
    { return (_name);}

    const std::string  ASpell::getEffects(void) const
    { return (_effects);}

    void ASpell::launch( const ATarget &target)
    {
        target.getHitBySpell(this);
    }

