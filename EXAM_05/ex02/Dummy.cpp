/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 16:13:46 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

    Dummy::Dummy(void): ATarget("Target Practice Dummy") {} 
    Dummy::~Dummy(void) {}


    Dummy* Dummy::clone(void) const
    {
        // Dummy *dum = new Dummy();
        // return(dum);
// ou
        return(new Dummy());
    }
