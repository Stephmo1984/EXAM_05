/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:35:09 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 19:42:16 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Polymorph_HPP
#define Polymorph_HPP

#include <iostream>
#include "ASpell.hpp"


class Polymorph : public ASpell
{
    public:
    Polymorph(void); 
    ~ Polymorph(void);

    Polymorph *clone(void) const;

};

#endif