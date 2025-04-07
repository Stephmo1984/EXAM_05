/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 19:40:53 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <map>

#include "ASpell.hpp"

#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"



class SpellBook
{
    private:
    std::map<std::string, ASpell *> _spellsList;
   
    SpellBook& operator=(const SpellBook &other);
    SpellBook(const SpellBook &other);
    
    public:    
     SpellBook(void);
    ~ SpellBook(void); 

    void learnSpell(ASpell *spell); // COPIES a spell in the book
    void forgetSpell(std::string const &str); // deletes a spell from the book, except if it isn't there
    ASpell* createSpell(std::string const &str); // receives a name of a spell, creates it, and returns it.

};

#endif