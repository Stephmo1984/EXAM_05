/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:35:09 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 18:59:50 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

    Fireball::Fireball(void): ASpell("Fireball", "burnt to a crisp") {}
    Fireball::~ Fireball(void) {}

    Fireball* Fireball::clone(void) const
    { 
        Fireball *fireball = new Fireball();
        return (fireball);    
    } 
