/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 19:54:10 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

    BrickWall::BrickWall(void): ATarget("Inconspicuous Red-brick Wall") {} 
    BrickWall::~BrickWall(void) {}


    BrickWall* BrickWall::clone(void) const
    {
        return(new BrickWall());
    }
