/*
	Copyright 2006-2015 The QElectroTech Team
	This file is part of QElectroTech.
	
	QElectroTech is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.
	
	QElectroTech is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with QElectroTech.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef ELEMENTPROPERTIESDIALOG_H
#define ELEMENTPROPERTIESDIALOG_H

#include <QDialog>

class Element;
class ElementsLocation;
class QAbstractButton;
class QDialogButtonBox;
class ElementPropertiesWidget;

/**
 * @brief The ElementPropertiesDialog class
 * Display the element properties widget in a QDialog
 */
class ElementPropertiesDialog : public QDialog
{
	Q_OBJECT

	public:
		explicit ElementPropertiesDialog(Element *elmt, QWidget *parent = 0);

	signals:
			/// Signal emitted when users wish to locate an element from the diagram within elements collection
		void findElementRequired(const ElementsLocation &);
			/// Signal emitted when users wish to edit an element from the diagram
		void editElementRequired(const ElementsLocation &);

	public slots:
		void standardButtonClicked (QAbstractButton *);
		void findInPanel (const ElementsLocation &);
		void editElement (const ElementsLocation &);

	private:
		Element                 *element_;
		QDialogButtonBox        *dbb;
		ElementPropertiesWidget *m_editor;
};

#endif // ELEMENTPROPERTIESDIALOG_H