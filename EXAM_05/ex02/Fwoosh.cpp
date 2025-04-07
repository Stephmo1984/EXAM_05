/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:35:09 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 16:16:28 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fwoosh.hpp"

    Fwoosh::Fwoosh(void): ASpell("Fwoosh", "fwooshed") {}
    Fwoosh::~ Fwoosh(void) {}

    Fwoosh* Fwoosh::clone(void) const  // return a pointer to a new Fwoosh object
    { 
        Fwoosh *fwoosh = new Fwoosh();
        return (fwoosh);    
    } 
