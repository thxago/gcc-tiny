
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicScrollBarUI$ScrollListener__
#define __javax_swing_plaf_basic_BasicScrollBarUI$ScrollListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicScrollBarUI;
            class BasicScrollBarUI$ScrollListener;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicScrollBarUI$ScrollListener : public ::java::lang::Object
{

public:
  BasicScrollBarUI$ScrollListener(::javax::swing::plaf::basic::BasicScrollBarUI *);
  BasicScrollBarUI$ScrollListener(::javax::swing::plaf::basic::BasicScrollBarUI *, jint, jboolean);
  virtual void setDirection(jint);
  virtual void setScrollByBlock(jboolean);
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) direction;
  jboolean block;
public: // actually package-private
  ::javax::swing::plaf::basic::BasicScrollBarUI * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicScrollBarUI$ScrollListener__
