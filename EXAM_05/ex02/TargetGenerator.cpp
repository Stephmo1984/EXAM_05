/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 13:04:37 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include <map>

    TargetGenerator::TargetGenerator(void) {}
    TargetGenerator::~ TargetGenerator(void) {}

    void TargetGenerator::learnTargetType(ATarget *target) // teaches a target to the generator
    {
        std::map<std::string, ATarget *>::iterator iter = _targetList.find(target->getType());
        
        if (iter == _targetList.end())
        {
            _targetList[target->getType()] = target->clone();
        }
        
    }

    void TargetGenerator::forgetTargetType(std::string const &target_name)// that makes the generator forget a target type if it's known
    {
        std::map<std::string, ATarget *>::iterator iter = _targetList.find(target_name);
        
        if (iter != _targetList.end())
        {
            delete iter->second;
            _targetList.erase(iter);
        }
    }


    ATarget* TargetGenerator::createTarget(std::string const &target_name) //  that creates a target of the specified type
    {
        std::map<std::string, ATarget *>::iterator iter = _targetList.find(target_name);
        ATarget *target = NULL;
        
        if (iter != _targetList.end())
        {
            target = iter->second->clone();
        }
        return(target);
    }
