/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/04/07 18:46:02 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

    ATarget::ATarget(std::string type): _type(type) {}
    ATarget::~ ATarget(void) {}

    // /!\  à l'exam il faut ecrire les fonctions de operator= et de constructeur de copie /!\ 
    
    // ATarget& operator=(const ATarget &other);
    // ATarget(const ATarget &other);
    
    
//setter-getter
    const std::string ATarget::getype(void) const
    { return (_type); }
    
    void ATarget::setType(const std::string &str)
    { _type = str ; }

//functions
    void ATarget::getHitBySpell(const ASpell &spell) const
    {
        std::cout << _type << " has been " << spell.getEffect() << "!" << std::endl;
    }

