/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 13:03:26 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator
{
    private:
    std::map<std::string, ATarget *> _targetList;
    TargetGenerator& operator=(const TargetGenerator &other);
    TargetGenerator(const TargetGenerator &other);
    
    public:    
     TargetGenerator(void);
    ~ TargetGenerator(void); 

    void learnTargetType(ATarget*); // teaches a target to the generator
    void forgetTargetType(std::string const &);// that makes the generator forget a target type if it's known
    ATarget* createTarget(std::string const &); //  that creates a target of the specified type

};

#endif