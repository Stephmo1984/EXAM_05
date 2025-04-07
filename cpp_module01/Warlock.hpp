/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:55:17 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 15:23:03 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock
{
    private:
    std::string _name;
    std::string _title;
    std::map<std::string, ASpell *> _spell_list;
    
    Warlock(Warlock const &other);
    Warlock &operator=(Warlock const &other);
    
    public:
    Warlock(std::string name, std::string title);
    ~ Warlock(void);

    const std::string getName(void) const;
    const std::string getTitle(void) const;
    
    void setTitle(std::string  const title);
    void introduce(void) const;

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string spell_name);
    void launchSpell(std::string spel_name, ATarget &target);
};

#endif