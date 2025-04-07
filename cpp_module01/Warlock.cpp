/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:00:22 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 15:30:25 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

    Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
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
        if(spell)
            _spell_list.insert( std::pair<std::string, ASpell *> (spell->getName() , spell->clone()));
    }
    
    void Warlock::forgetSpell(std::string spell_name)
    {
        std::map<std::string, ASpell *>::iterator iter = _spell_list.find(spell_name);
        if(iter != _spell_list.end())
        {
            delete iter->second;
            _spell_list.erase(iter);
        }
    }
    
    void Warlock::launchSpell(std::string spell_name, ATarget &target)
    {
        std::map<std::string, ASpell *>::iterator iter = _spell_list.find(spell_name);
        if(iter != _spell_list.end())
        {
            iter->second->launch(target);
        }
    }

