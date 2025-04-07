/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 18:55:03 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    private:
    std::string _name;
    std::string _title;
    std::map<std::string, ASpell *> _learnedSpells;

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
    void forgetSpell(std::string spell_name);
    void launchSpell(std::string spell_name, ATarget &target);
};

#endif