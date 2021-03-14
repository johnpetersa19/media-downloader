/*
 *
 *  Copyright (c) 2021
 *  name : Francis Banyikwa
 *  email: mhogomchungu@gmail.com
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QByteArray>

#include "../engines.h"

class wget
{
public:
	class functions : public engines::engine::functions
	{
	public:
		~functions() override ;
		void processData( QStringList&,QByteArray ) override ;
		void updateDownLoadCmdOptions( const engines::engine& engine,
					       const QString& quality,
					       const QStringList& userOptions,
					       QStringList& urls,
					       QStringList& ourOptions ) override ;
	private:
	} ;

        wget() ;

	engines::Json config( Logger&,const engines::enginePaths& ) const ;
	std::unique_ptr< engines::engine::functions > Functions() const ;
private:
};
