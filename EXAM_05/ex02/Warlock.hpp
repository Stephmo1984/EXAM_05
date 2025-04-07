/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/04/07 18:42:29 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private:
    std::string _name;
    std::string _title;
    
    SpellBook   _book_of_spells;
    
    Warlock& operator=(const Warlock &other);
    Warlock(const Warlock &other);
    
    public:
    Warlock(std::string name, std::string title); 
    ~ Warlock(void); 
   
//setter-getter
    const std::string getName(void) const;
    const std::string getTitle(void) const;
    void setTitle(const std::string &str);

//function ex00
    void introduce() const;

// member function ex01
    void learnSpell(ASpell *spell);
// takes a pointer to ASpell, makes the Warlock learn a spell

    void forgetSpell(std::string spell_name);
// takes a string corresponding a to a spell's name,
// and makes the Warlock forget it. If it's not a known spell, does nothing.

    void launchSpell(std::string spell_name, ATarget &target);
// takes a string (a spell name) and a reference to ATarget
// launches the spell on the selected target. 
// If it's not a known spell, does nothing.

};

#endif