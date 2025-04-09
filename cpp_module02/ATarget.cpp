/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/04/09 16:15:37 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"


    ATarget::ATarget(std::string type): _type(type) {}
    
    ATarget::~ ATarget(void) {}

    ATarget::ATarget(ATarget &other): _type(other._type) {}
    
    ATarget& ATarget::operator=(ATarget &other)
    {
        if (this != &other)
            this->_type = other._type;
        return *this;
    }


    const std::string  ATarget::getType(void) const 
    { return(_type);}

    void ATarget::getHitBySpell(const ASpell *spell) const
    {
        std::cout << _type << " has been " << spell->getEffects() << "!" << std::endl;
    }
