/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/04/07 18:40:14 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Warlock.hpp"
    


    Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
    { std::cout << name << ": This looks like another boring day." << std::endl; }

    
    Warlock::~Warlock(void)
    { std::cout << _name << ": My job here is done!" << std::endl; }

   
    
//setter-getter
    const std::string Warlock::getName(void) const
    { return(_name); }
    
    const std::string Warlock::getTitle(void) const
    { return(_title); }

    
    void Warlock::setTitle(const std::string &str)
    { _title = str; }

//function
    void Warlock::introduce() const //<NAME>: I am <NAME>, <TITLE>!
    { std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; }
