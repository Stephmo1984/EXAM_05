/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortemo <smortemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:01:02 by smortemo          #+#    #+#             */
/*   Updated: 2025/02/04 18:19:05 by smortemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include<iostream>

class Warlock
{
  private:
    std::string _name;
    std::string _title;

    Warlock(Warlock &other);
    Warlock &operator=(Warlock &other);

  public:  
    Warlock(std::string name, std::string title);
    ~ Warlock(void);

    const std::string getName(void) const;
    const std::string getTitle(void) const;

    void setTitle(std::string const &title);

    void introduce(void) const;

};

#endif
