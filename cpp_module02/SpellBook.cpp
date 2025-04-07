/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:00:22 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:28:30 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

    SpellBook::SpellBook(void) {}
    
    SpellBook::~SpellBook(void) {}

    void SpellBook::learnSpell(ASpell *spell)
    {
        if(spell)
            _spell_list.insert( std::pair<std::string, ASpell *> (spell->getName() , spell->clone()));
    }
    
    void SpellBook::forgetSpell(std::string const &spell_name)
    {
        std::map<std::string, ASpell *>::iterator iter = _spell_list.find(spell_name);
        if(iter != _spell_list.end())
        {
            delete iter->second;
            _spell_list.erase(iter);
        }
    }
    
    ASpell *SpellBook::createSpell(std::string const &spell_name)
    {
        ASpell *spell = NULL;

        std::map<std::string, ASpell *>::iterator iter = _spell_list.find(spell_name);
        if(iter != _spell_list.end())
        {
            spell = iter->second->clone();
        }
        return(spell);
    }

