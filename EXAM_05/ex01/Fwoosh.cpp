/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:35:09 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 18:53:35 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

    Fwoosh::Fwoosh(void): ASpell("Fwoosh", "fwooshed") {}
    Fwoosh::~ Fwoosh(void) {}

    Fwoosh* Fwoosh::clone(void) const 
    { 
        Fwoosh *fwoosh = new Fwoosh();
        return (fwoosh);    
    } 
