
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Container$GfxPaintVisitor__
#define __java_awt_Container$GfxPaintVisitor__

#pragma interface

#include <java/awt/Container$GfxVisitor.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container$GfxPaintVisitor;
        class Container$GfxVisitor;
        class Graphics;
    }
  }
}

class java::awt::Container$GfxPaintVisitor : public ::java::awt::Container$GfxVisitor
{

public: // actually package-private
  Container$GfxPaintVisitor();
public:
  virtual void visit(::java::awt::Component *, ::java::awt::Graphics *);
  static ::java::awt::Container$GfxVisitor * INSTANCE;
  static ::java::lang::Class class$;
};

#endif // __java_awt_Container$GfxPaintVisitor__
