
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_UIDefaults$3__
#define __javax_swing_UIDefaults$3__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class UIDefaults;
        class UIDefaults$3;
        class UIDefaults$ProxyLazyValue;
    }
  }
}

class javax::swing::UIDefaults$3 : public ::java::lang::Object
{

public: // actually package-private
  UIDefaults$3(::javax::swing::UIDefaults$ProxyLazyValue *, ::java::lang::String *, JArray< ::java::lang::Class * > *, JArray< ::java::lang::Object * > *);
public:
  virtual ::java::lang::Object * createValue(::javax::swing::UIDefaults *);
public: // actually package-private
  ::javax::swing::UIDefaults$ProxyLazyValue * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$1;
private:
  ::java::lang::String * val$className;
  JArray< ::java::lang::Class * > * val$clss;
  JArray< ::java::lang::Object * > * val$objs;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_UIDefaults$3__
