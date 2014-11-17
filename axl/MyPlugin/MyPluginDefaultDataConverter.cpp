// /////////////////////////////////////////////////////////////////
// Generated by axel-plugin wizard
// /////////////////////////////////////////////////////////////////

/* (C) MyCompany */


/* Put a short description of your plugin here */

/* MyCompany-contact@mycompany.com-http://www.mycompany.com */

#include "MyPluginDefaultDataConverter.h"


#include "MyPluginDefaultData.h"
#include "MyPluginPlugin.h"

#include <axlCore/axlMesh.h>

#include <dtkCore/dtkAbstractDataFactory.h>



// /////////////////////////////////////////////////////////////////
// MyPluginDefaultDataConverter
// /////////////////////////////////////////////////////////////////


MyPluginDefaultDataConverter::MyPluginDefaultDataConverter(void) : axlAbstractDataConverter () { }

MyPluginDefaultDataConverter::~MyPluginDefaultDataConverter(void) { } 

QString MyPluginDefaultDataConverter::description(void) const
{
    return "Converter from MyPluginDefaultData to axlMesh";
}

QStringList MyPluginDefaultDataConverter::fromTypes(void) const
{
    return QStringList() << "MyPluginDefaultData" << "axlAbstractData";
}

QString MyPluginDefaultDataConverter::toType(void) const
{
    return "axlMesh";
}

bool MyPluginDefaultDataConverter::registered(void)
{
    return MyPluginPlugin::dataFactSingleton->registerDataConverterType("MyPluginDefaultDataConverter", QStringList(), "axlMesh", createMyPluginDefaultDataConverter);
}

/// Method used to convert to an axlMesh.
axlMesh* MyPluginDefaultDataConverter::toMesh(void)
{
    
    MyPluginDefaultData* obj = dynamic_cast<MyPluginDefaultData*>(this->data());
    if (!obj) return NULL;
    
    axlMesh* mesh = new axlMesh;
    
    //TODO : construct a mesh from the MyPluginDefaultData*
    
    return mesh;
}

dtkAbstractDataConverter *createMyPluginDefaultDataConverter(void)
{
    return new MyPluginDefaultDataConverter;
}
