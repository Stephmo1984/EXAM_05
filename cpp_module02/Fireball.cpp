/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 18:44:17 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

    Fireball::Fireball(void): ASpell("Fireball", "burnt to a crisp") {}

    Fireball::~ Fireball(void) {}

    Fireball *Fireball::clone(void) const
    {return (new Fireball); }


