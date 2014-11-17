// /////////////////////////////////////////////////////////////////
// Generated by axel-plugin wizard
// /////////////////////////////////////////////////////////////////

/* (C) MyCompany */


/* Put a short description of your plugin here */

/* MyCompany-contact@mycompany.com-http://www.mycompany.com */

#ifndef MYPLUGINDEFAULTDATACONVERTER_h
#define MYPLUGINDEFAULTDATACONVERTER_h

#include <axlCore/axlAbstractDataConverter.h>
#include "MyPluginPluginExport.h"

class axlMesh;

class MyPluginDefaultDataPrivate;

class MYPLUGINPLUGIN_EXPORT MyPluginDefaultDataConverter : public axlAbstractDataConverter
{
    Q_OBJECT
    
public:
    MyPluginDefaultDataConverter(void);
    ~MyPluginDefaultDataConverter(void);
    
public:
    QString   description (void) const;
    QStringList fromTypes (void) const;
    QString        toType (void) const;
    
    static bool registered (void);
    
public:
    
    axlMesh* toMesh(void);
    
private:
};

dtkAbstractDataConverter *createMyPluginDefaultDataConverter(void);

#endif //MYPLUGINDEFAULTDATACONVERTER_h
