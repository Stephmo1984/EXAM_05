/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:35:09 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 18:58:43 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"


class Fireball : public ASpell
{
    public:
    Fireball(void); //default constructor:  name ="Fwoosh"  effects= "fwooshed"
    ~Fireball(void);

    Fireball *clone(void) const;

};

#endif