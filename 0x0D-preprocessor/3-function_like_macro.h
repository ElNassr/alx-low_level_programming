#define ABS(x) _Generic((x), \
	       int: ((x) < 0 ? -(x) : (x)), \
	       unsigned int: (x), \
	       default: -(x))
