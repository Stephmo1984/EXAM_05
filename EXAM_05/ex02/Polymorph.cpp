/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:35:09 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 19:00:40 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

    Polymorph::Polymorph(void): ASpell("Polymorph", "turned into a critter") {}
    Polymorph::~ Polymorph(void) {}

    Polymorph* Polymorph::clone(void) const
    { 
        Polymorph *polymorph = new Polymorph();
        return (polymorph);    
    } 
