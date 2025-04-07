/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 13:13:47 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

    SpellBook::~SpellBook(void)
    { } 

    SpellBook::SpellBook(void)
    {}

    void SpellBook::learnSpell(ASpell *spell) // COPIES a spell in the book
    {   
        if (spell)
        {
            _spellsList.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
        }
    }
    
    void SpellBook::forgetSpell(std::string const &spell_name) // deletes a spell from the book, except if it isn't there
    {
        std::map<std::string, ASpell *>::iterator iter;

        for (iter = _spellsList.begin(); iter != _spellsList.end(); ++iter)
        {
            if (iter->first == spell_name)
            {
                delete iter->second;
                _spellsList.erase(iter);   
                break;
            }    
        }
    }
    

    ASpell* SpellBook::createSpell(std::string const &str) // receives a name of a spell, creates it, and returns it.
    {
        std::map<std::string, ASpell *>::iterator iter = _spellsList.find(str);
        ASpell *spell = NULL;
        
        if (iter != _spellsList.end())
        {
            spell = iter->second->clone();
        }
        return(spell);
    }