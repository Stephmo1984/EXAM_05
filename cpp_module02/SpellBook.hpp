/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:55:17 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:38:20 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SpellBook_HPP
#define SpellBook_HPP

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class SpellBook
{
    private:
    std::map<std::string, ASpell *> _spell_list;
    
    SpellBook(SpellBook const &other);
    SpellBook &operator=(SpellBook const &other);
    
    public:
    SpellBook(void);
    ~ SpellBook(void);
    
    void learnSpell(ASpell *spell);
    
    void forgetSpell(std::string const &spell_name);
    
    ASpell *createSpell(std::string const &spell_name);
    
};

#endif