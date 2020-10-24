#ifndef DSP_IFILTER_H_INCLUDED
#define DSP_IFILTER_H_INCLUDED

namespace dsp {

/*
 * sample by sample processing interface
 */
class IFilter {
public:
    virtual float ProcessSample(float x) = 0;
};

}
#endif
