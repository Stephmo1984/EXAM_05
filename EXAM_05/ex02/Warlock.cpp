/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 13:14:43 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

    Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) 
    { 
        std::cout << name << ": This looks like another boring day." << std::endl;
    }

    Warlock::~Warlock(void)
    { std::cout << _name << ": My job here is done!" << std::endl; }

    
//setter-getter
    const std::string Warlock::getName(void) const
    { return(_name); }
    
    const std::string Warlock::getTitle(void) const
    { return(_title); }

    
    void Warlock::setTitle(const std::string &str)
    { _title = str; }

    void Warlock::introduce() const //<NAME>: I am <NAME>, <TITLE>!
    { std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; }

    void Warlock::learnSpell(ASpell *spell) 
    {     
        if (spell)
        {
            _book_of_spells.learnSpell(spell);
        }
    }

    void Warlock::forgetSpell(std::string spell_name)
    {
        _book_of_spells.forgetSpell(spell_name);
    }
    
// takes a string corresponding a to a spell's name,
// and makes the Warlock forget it. If it's not a known spell, does nothing.

    void Warlock::launchSpell(std::string spell_name, ATarget &target)
    {
        ASpell *spell = NULL;
        spell = _book_of_spells.createSpell(spell_name);
        if(spell)
        {
            spell->launch(target);
            delete spell;
        }   
    }
    
// takes a string (a spell name) and a reference to ATarget
// launches the spell on the selected target. 
// If it's not a known spell, does nothing.
