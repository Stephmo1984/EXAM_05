/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 18:53:20 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>

class ASpell;

class ATarget
{
    protected:
    std::string _type;

    ATarget& operator=(const ATarget &other);
    ATarget(const ATarget &other);
    
    public:
    ATarget(std::string type); 
    ~ ATarget(void); 
     
//setter-getter
    const std::string getype(void) const;
    void setType(const std::string &str);

// pure virtual function
    virtual ATarget *clone(void) const = 0 ;

//functions
    void getHitBySpell(const ASpell &spell) const; 

};

#endif