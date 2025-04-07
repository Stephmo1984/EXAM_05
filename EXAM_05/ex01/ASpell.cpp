/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/04/07 18:45:36 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

    ASpell::ASpell(std::string name, std::string effect): _name(name), _effect(effect) {};
    
    ASpell::~ASpell(void) {};

    // /!\  à l'exam il faut ecrire les fonctions de operator= et de constructeur de copie /!\ 
    
    // ASpell& operator=(const ASpell &other);
    // ASpell(const ASpell &other);
    
    const std::string ASpell::getName(void) const
    { return ( _name ); }
    
    const std::string ASpell::getEffect(void) const
    { return (_effect); }
    
    void ASpell::launch(const ATarget &target) const
    { target.getHitBySpell(*this); }
