/*!
	@file
	@author		Pablo Nu�ez
	@date		13/2009
	@module
*//*
	This file is part of the Nebula Engine.
	
	Nebula Engine is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	
	Nebula Engine is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.
	
	You should have received a copy of the GNU Lesser General Public License
	along with Nebula Engine.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __IPICKABLE_ITEM_HPP__
#define __IPICKABLE_ITEM_HPP__

namespace Nebula
{

	class NebulaDllPrivate IPickableItem
	{
	public:
		IPickableItem(){};
		
		Ogre::Real getWeight() {
			return mWeight;
		}
		void setWeight(Ogre::Real weight) {
			mWeight = weight;
		}

	private:
		Ogre::Real mWeight;
		bool mIsWeapon;
		
	};

} //end namespace

#endif