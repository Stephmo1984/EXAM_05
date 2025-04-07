/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 18:52:53 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell
{
    protected:
    std::string _name;
    std::string _effect;
    ASpell& operator=(const ASpell &other);
    ASpell(const ASpell &other);
    
    public:
    
    ASpell(std::string name, std::string effect); 
    virtual ~ ASpell(void); 
   
//setter-getter
    const std::string getName(void) const;
    const std::string getEffect(void) const;

//function
    virtual ASpell *clone(void) const = 0 ;
    void launch(const ATarget &target) const;

};

#endif