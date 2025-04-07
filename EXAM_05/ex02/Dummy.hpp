/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 15:54:36 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
    protected:
    std::string _type;
    
    public:
    Dummy(void); 
    ~ Dummy(void); 


    virtual Dummy *clone(void) const;

};

#endif