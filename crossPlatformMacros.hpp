//because windows sucks...

#ifndef SIGNALSO_CROSSPLATFORMMACROS_HPP
#define SIGNALSO_CROSSPLATFORMMACROS_HPP

#include <QtCore/QtGlobal>

//remember to define this variable in the .pro file
#if defined(SIGNALSO_LIBRARY)
#  define EXPIMP_SIGNALSO Q_DECL_EXPORT
#else
#  define EXPIMP_SIGNALSO Q_DECL_IMPORT
#endif

#endif // SIGNALSO_CROSSPLATFORMMACROS_HPP
