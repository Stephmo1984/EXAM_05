/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:55:17 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:45:33 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <map>

#include "ATarget.hpp"
#include "ATarget.hpp"

class ATarget;
class ATarget;

class TargetGenerator
{
    private:
    std::map<std::string, ATarget *> _target_list;
    
    TargetGenerator(TargetGenerator const &other);
    TargetGenerator &operator=(TargetGenerator const &other);
    
    public:
    TargetGenerator(void);
    ~ TargetGenerator(void);
    
    void learnTargetType(ATarget *target);
    
    void forgetTargetType(std::string const &target_name);
    
    ATarget *createTarget(std::string const &target_name);
    
};

#endif