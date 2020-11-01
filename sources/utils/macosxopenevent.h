/*
	Copyright 2006-2020 The QElectroTech Team
	This file is part of QElectroTech.

	QElectroTech is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	QElectroTech is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with QElectroTech. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MACOSXOPENEVENT_H
#define MACOSXOPENEVENT_H

#include <QObject>
/**
	@brief The MacOSXOpenEvent class
*/
class MacOSXOpenEvent : public QObject
{
	Q_OBJECT
	public:
		explicit MacOSXOpenEvent(QObject *parent = nullptr);
		bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // MACOSXOPENEVENT_H
