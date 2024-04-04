/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:11:36 by macarval          #+#    #+#             */
/*   Updated: 2024/04/04 15:33:52 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

static float calcArea( Point const v1, Point const v2, Point const v3 )
{
	float area;

	area = 0.5 * ( v1.getX().toFloat()
					* ( v2.getY().toFloat() - v3.getY().toFloat() )
				+ v2.getX().toFloat()
					* ( v3.getY().toFloat() - v1.getY().toFloat() )
				+ v3.getX().toFloat()
					* ( v1.getY().toFloat() - v2.getY().toFloat() )) ;
	return area < 0 ? -area : area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	float area1;
	float area2;
	float area3;
	float totalArea;

	area1 = calcArea( a, b, point );
	area2 = calcArea( a, c, point);
	area3 = calcArea( b, c, point );
	totalArea = calcArea( a, b, c );
	if (!area1 || !area2 || !area3)
		return false;
	return totalArea == area1 + area2 + area3;
}
