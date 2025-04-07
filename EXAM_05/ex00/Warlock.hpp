/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:54 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/03 14:29:30 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
    private:
    std::string _name;
    std::string _title;
    
    // Warlock(void); 
    Warlock& operator=(const Warlock &other);
    Warlock(const Warlock &other);
    
    public:
    Warlock(std::string name, std::string title); // -> <NAME>: This looks like another boring day.
    
    ~ Warlock(void); //<NAME>: My job here is done!
   
    
//setter-getter
    const std::string getName(void) const;
    const std::string getTitle(void) const;
    
    void setTitle(const std::string &str);

//function
    void introduce() const;
    
};

#endif