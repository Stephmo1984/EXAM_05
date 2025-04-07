/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 18:48:46 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"


    Dummy::Dummy(void): ATarget("Target Practice Dummy") {}
    
    Dummy::~ Dummy(void) {}

    Dummy *Dummy::clone(void) const
    { return(new Dummy);}
