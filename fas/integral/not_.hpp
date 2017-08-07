//
// Author: Vladimir Migashko <migashko@gmail.com>, (C) 2011
//
// Copyright: See COPYING file that comes with this distribution
//

#ifndef FAS_INTEGRAL_NOT__HPP
#define FAS_INTEGRAL_NOT__HPP

#include <fas/integral/bool_.hpp>

namespace fas{

template<typename A>
struct not_
{
  enum { value = A::value==0 ? 1 : 0 };
  typedef bool_< value!=0 > type;
};

}

#endif
