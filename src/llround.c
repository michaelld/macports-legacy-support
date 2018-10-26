
#include <limits.h>
#include <math.h>
#include <stdint.h>

// MP support header
#include "MacportsLegacySupport.h"
#if __MP_LEGACY_SUPPORT_LLROUND__

long long llround( double x )
{
  union{ double d; uint64_t u;}u = {x};
  uint64_t absx = u.u & 0x7fffffffffffffffULL;
  
  long long result = (long long) x;	//set invalid / inexact if necessary
  
  if( absx >= 0x4330000000000000ULL )	// 0, large or NaN
    {
      //Deal with overflow cases
      if( x <= (double) LONG_LONG_MIN )
	return LONG_LONG_MIN;
      
      if( x >= -((double) LONG_LONG_MIN) )
	return LONG_LONG_MAX;
      
      return x;
    }
  
  if( (float) result != x )
    {
      // copysign( 0.5f, x )
      union{ uint64_t u; double d; } v = { (u.u & 0x8000000000000000ULL) | 0x3fe0000000000000ULL };
      
      if( absx == 0x3fdfffffffffffffULL )
	return result;
      
		x += v.d;
		
		result = (long long) x;
    }
  
  return result;
}

#endif /* __MP_LEGACY_SUPPORT_LLROUND__ */
