/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 19:44:06 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
    protected:
    std::string _type;
    
    public:
    BrickWall(void); 
    ~ BrickWall(void); 


    virtual BrickWall *clone(void) const;

};

#endif