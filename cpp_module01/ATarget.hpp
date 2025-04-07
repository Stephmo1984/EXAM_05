/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:10:05 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include<iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
  protected:
    std::string _type;

    ATarget(ATarget &other);
    ATarget &operator=(ATarget &other);

  public:  
    ATarget(std::string type);
    virtual ~ ATarget(void);

    const std::string getType(void) const;

    virtual ATarget *clone(void) const = 0;

    void getHitBySpell(const ASpell *spell) const;
};

#endif
