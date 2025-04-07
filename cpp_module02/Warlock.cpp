/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:00:22 by smortemo          #+#    #+#             */
/*   Updated: 2025/04/07 19:16:59 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

    Warlock::Warlock(std::string name, std::string title): _name(name), _title(title), _book_of_spells()
    {
        std::cout << _name << ": This looks like another boring day." << std::endl;
    }
    
     Warlock::~Warlock(void)
    {
        std::cout << _name << ": My job here is done!" << std::endl;
    }

    const std::string  Warlock::getName(void) const
    { return(_name); }
    
    const std::string  Warlock::getTitle(void) const
    { return(_title); }
    
    void  Warlock::setTitle(std::string const title) 
    { _title = title; }
    
    void  Warlock::introduce(void) const
    { 
        std::cout << _name << ": I am "<< _name << ", " <<  _title << "!" << std::endl;
    }

    void Warlock::learnSpell(ASpell *spell)
    {
        _book_of_spells.learnSpell(spell);
    }
    
    void Warlock::forgetSpell(std::string spell_name)
    {
        _book_of_spells.forgetSpell(spell_name);
    }
    
    void Warlock::launchSpell(std::string spell_name, ATarget &target)
    {
        ASpell *spell = NULL;
        spell = _book_of_spells.createSpell(spell_name);

        if(spell)
            spell->launch(target);
    }

