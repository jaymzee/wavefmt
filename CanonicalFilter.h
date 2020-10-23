#ifndef DSP_CANONICALFILTER_H_INCLUDED
#define DSP_CANONICALFILTER_H_INCLUDED

/* canonical filter for signal processing */

#include "filter.h"
#include <vector>

class CanonicalFilter {
public:
    std::vector<double> w;  /* delay line */
    std::vector<double> b;  /* b coefficients - feed forward */
    std::vector<double> a;  /* a coefficients - feedback */
    float Sample(float x);  /* process one sample through filter */

    // filter function callback for wave_filter()
    inline static float sample(CanonicalFilter *cf, float x) {
        return cf->Sample(x);
    }
};

#endif /* CANONICALFILTER_H */
