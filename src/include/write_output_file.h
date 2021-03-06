#ifndef WRITE_OUT_H
#define WRITE_OUT_H


#include "gday.h"
#include "utilities.h"

void  open_output_file(control *, char *, FILE **);
void  write_output_subdaily_header(control *, FILE **);
void  write_output_header(control *, FILE **);
void  write_daily_outputs_ascii(control *, canopy_wk *, fluxes *, state *, int,
                                int);
void  write_daily_outputs_binary(control *, fluxes *, state *, int, int);
void  write_subdaily_outputs_ascii(control *, canopy_wk *, double, double, int);
int   write_final_state(control *, params *p, state *);
int   ohandler(char *, char *, char *, control *, params *p, state *, int *);


#endif /* WRITE_OUT_H */
