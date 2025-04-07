/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:00:22 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 19:28:30 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

    TargetGenerator::TargetGenerator(void) {}
    
    TargetGenerator::~TargetGenerator(void) {}

    void TargetGenerator::learnTargetType(ATarget *target)
    {
        if(target)
            _target_list.insert( std::pair<std::string, ATarget *> (target->getType() , target->clone()));
    }
    
    void TargetGenerator::forgetTargetType(std::string const &target_name)
    {
        std::map<std::string, ATarget *>::iterator iter = _target_list.find(target_name);
        if(iter != _target_list.end())
        {
            delete iter->second;
            _target_list.erase(iter);
        }
    }
    
    ATarget *TargetGenerator::createTarget(std::string const &target_name)
    {
        ATarget *target = NULL;

        std::map<std::string, ATarget *>::iterator iter = _target_list.find(target_name);
        if(iter != _target_list.end())
        {
            target = iter->second->clone();
        }
        return(target);
    }

