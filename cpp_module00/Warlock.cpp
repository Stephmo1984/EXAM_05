/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 18:20:57 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Warlock.hpp"

    Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) 
    { std::cout << _name << ": This looks like another boring day." << std::endl;}
    
    Warlock::~ Warlock(void) 
    { std::cout << _name << ": My job here is done!" << std::endl;}


    const std::string Warlock::getName(void) const
    {return(_name);} 
    const std::string Warlock::getTitle(void) const 
    {return(_title);}

    void Warlock::setTitle(std::string const &title) 
    { _title = title;}

    void Warlock::introduce(void) const 
    { std::cout << _name<< ": I am " << _name << ", " << _title << "!" << std::endl;}

