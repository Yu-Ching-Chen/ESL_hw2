#ifndef SOBEL_FILTER_H_
#define SOBEL_FILTER_H_
#include <systemc>
using namespace sc_core;

#include <tlm>
#include <tlm_utils/simple_target_socket.h>

#include "filter_def.h"

class Filter : public sc_module {
public:
  tlm_utils::simple_target_socket<Filter> t_skt;

  sc_fifo<bool> i_next_row;
  sc_fifo<unsigned char> i_r;
  sc_fifo<unsigned char> i_g;
  sc_fifo<unsigned char> i_b;
  sc_fifo<unsigned char> o_r;
  sc_fifo<unsigned char> o_g;
  sc_fifo<unsigned char> o_b;

  SC_HAS_PROCESS(Filter);
  Filter(sc_module_name n);
  ~Filter() = default;

private:
  void do_filter();
  unsigned char val_r[MASK_N];
  unsigned char val_g[MASK_N];
  unsigned char val_b[MASK_N];
  unsigned char in_buf_r[MASK_Y][MASK_X];
  unsigned char in_buf_g[MASK_Y][MASK_X];
  unsigned char in_buf_b[MASK_Y][MASK_X];
  unsigned char median_buf_r[MASK_Y][MASK_X];
  unsigned char median_buf_g[MASK_Y][MASK_X];
  unsigned char median_buf_b[MASK_Y][MASK_X];
  float mean_r;
  float mean_g;
  float mean_b;

  unsigned int base_offset;
  void blocking_transport(tlm::tlm_generic_payload &payload,
                          sc_core::sc_time &delay);

};
#endif
