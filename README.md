wave - read and write wav files
----------------------------------
For writing filters, it's most efficient to stream the data itself on the fly,
rather than allocating memory for it, so only the header is implemented here.

Note: to simplify the implementation, this assumes a little endian machine
which is pretty much any of the major platforms anyone would probably use
with this anyway.

filters - signal processing
---------------------------
    canonical_filter    canonical filter (c module)
    CanonicalFilter     canonical filter (c++ class)
    circular_filter     circular buffer filter (c module)
    CircularFilter      circular buffer filter (c++ class)
    fractional_delay    fractional delay line (c module)
    FractionalDelay     fractional delay line (c++ class)
