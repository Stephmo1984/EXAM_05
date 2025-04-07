/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWallWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:27:45 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"


    BrickWall::BrickWall(void): ATarget("Inconspicuous Red-brick Wall") {}
    
    BrickWall::~ BrickWall(void) {}

    BrickWall *BrickWall::clone(void) const
    { return(new BrickWall);}
