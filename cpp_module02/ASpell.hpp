/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:03:26 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include<iostream>
#include"ATarget.hpp"

class ATarget;


class ASpell
{
  protected:
    std::string _name;
    std::string _effects;

    ASpell(ASpell &other);
    ASpell &operator=(ASpell &other);

  public:  
    ASpell(std::string name, std::string effect);
    virtual ~ ASpell(void);

    const std::string getName(void) const;
    const std::string getEffects(void) const;

    virtual ASpell *clone(void) const = 0;

    void launch( const ATarget &target);

};

#endif
