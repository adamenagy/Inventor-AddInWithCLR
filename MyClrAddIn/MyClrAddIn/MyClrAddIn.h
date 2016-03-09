// MyClrAddIn.h

#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::Windows::Forms;
using namespace Inventor;

namespace MyClrAddIn {
  [
    ProgId("MyClrAddIn.StandardAddInServer"),
    GuidAttribute("3543165F-7F19-4614-8842-572A5EBE9549"), 
    ComVisible(true)
  ]
  public ref class StandardAddInServer : public ApplicationAddInServer
  {
    // etc...
  public:
    StandardAddInServer(void)
    {

    }

    virtual void Activate(ApplicationAddInSite^ addInSiteObject, bool firstTime)
    {
      MessageBox::Show("Add-In Loading"); 
    }

    virtual void Deactivate()
    {
      MessageBox::Show("Add-In Unloading"); 
    }

    virtual void ExecuteCommand(int CommandID)
    {
    }

    virtual property Object^ Automation
    {
      // If you want to return an interface to another client of this addin,
      // implement that interface in a class and return that class object 
      // through this property
      Object^ get()
      {
        return nullptr;
      }
    }
  };
}
