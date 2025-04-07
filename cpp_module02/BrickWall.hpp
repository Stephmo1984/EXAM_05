/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:27:38 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICWALL_HPP
#define BRICWALL_HPP

#include<iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{

  public:  
    BrickWall(void);
    ~ BrickWall(void);

    BrickWall *clone(void) const;

};

#endif
