/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   def.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:25:59 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/13 20:41:56 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}
template <typename T>
T min(const T a,const T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(T a,T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}