// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_6_HH_
#define _conv_6_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "apply_7.h"

namespace ap_rtl {

struct conv_6 : public sc_module {
    // Port declarations 195
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > m_axi_inputs_AWVALID;
    sc_in< sc_logic > m_axi_inputs_AWREADY;
    sc_out< sc_lv<32> > m_axi_inputs_AWADDR;
    sc_out< sc_lv<1> > m_axi_inputs_AWID;
    sc_out< sc_lv<32> > m_axi_inputs_AWLEN;
    sc_out< sc_lv<3> > m_axi_inputs_AWSIZE;
    sc_out< sc_lv<2> > m_axi_inputs_AWBURST;
    sc_out< sc_lv<2> > m_axi_inputs_AWLOCK;
    sc_out< sc_lv<4> > m_axi_inputs_AWCACHE;
    sc_out< sc_lv<3> > m_axi_inputs_AWPROT;
    sc_out< sc_lv<4> > m_axi_inputs_AWQOS;
    sc_out< sc_lv<4> > m_axi_inputs_AWREGION;
    sc_out< sc_lv<1> > m_axi_inputs_AWUSER;
    sc_out< sc_logic > m_axi_inputs_WVALID;
    sc_in< sc_logic > m_axi_inputs_WREADY;
    sc_out< sc_lv<16> > m_axi_inputs_WDATA;
    sc_out< sc_lv<2> > m_axi_inputs_WSTRB;
    sc_out< sc_logic > m_axi_inputs_WLAST;
    sc_out< sc_lv<1> > m_axi_inputs_WID;
    sc_out< sc_lv<1> > m_axi_inputs_WUSER;
    sc_out< sc_logic > m_axi_inputs_ARVALID;
    sc_in< sc_logic > m_axi_inputs_ARREADY;
    sc_out< sc_lv<32> > m_axi_inputs_ARADDR;
    sc_out< sc_lv<1> > m_axi_inputs_ARID;
    sc_out< sc_lv<32> > m_axi_inputs_ARLEN;
    sc_out< sc_lv<3> > m_axi_inputs_ARSIZE;
    sc_out< sc_lv<2> > m_axi_inputs_ARBURST;
    sc_out< sc_lv<2> > m_axi_inputs_ARLOCK;
    sc_out< sc_lv<4> > m_axi_inputs_ARCACHE;
    sc_out< sc_lv<3> > m_axi_inputs_ARPROT;
    sc_out< sc_lv<4> > m_axi_inputs_ARQOS;
    sc_out< sc_lv<4> > m_axi_inputs_ARREGION;
    sc_out< sc_lv<1> > m_axi_inputs_ARUSER;
    sc_in< sc_logic > m_axi_inputs_RVALID;
    sc_out< sc_logic > m_axi_inputs_RREADY;
    sc_in< sc_lv<16> > m_axi_inputs_RDATA;
    sc_in< sc_logic > m_axi_inputs_RLAST;
    sc_in< sc_lv<1> > m_axi_inputs_RID;
    sc_in< sc_lv<1> > m_axi_inputs_RUSER;
    sc_in< sc_lv<2> > m_axi_inputs_RRESP;
    sc_in< sc_logic > m_axi_inputs_BVALID;
    sc_out< sc_logic > m_axi_inputs_BREADY;
    sc_in< sc_lv<2> > m_axi_inputs_BRESP;
    sc_in< sc_lv<1> > m_axi_inputs_BID;
    sc_in< sc_lv<1> > m_axi_inputs_BUSER;
    sc_in< sc_lv<31> > inputs_offset;
    sc_in< sc_lv<21> > inputs_offset1;
    sc_out< sc_logic > m_axi_weights_AWVALID;
    sc_in< sc_logic > m_axi_weights_AWREADY;
    sc_out< sc_lv<32> > m_axi_weights_AWADDR;
    sc_out< sc_lv<1> > m_axi_weights_AWID;
    sc_out< sc_lv<32> > m_axi_weights_AWLEN;
    sc_out< sc_lv<3> > m_axi_weights_AWSIZE;
    sc_out< sc_lv<2> > m_axi_weights_AWBURST;
    sc_out< sc_lv<2> > m_axi_weights_AWLOCK;
    sc_out< sc_lv<4> > m_axi_weights_AWCACHE;
    sc_out< sc_lv<3> > m_axi_weights_AWPROT;
    sc_out< sc_lv<4> > m_axi_weights_AWQOS;
    sc_out< sc_lv<4> > m_axi_weights_AWREGION;
    sc_out< sc_lv<1> > m_axi_weights_AWUSER;
    sc_out< sc_logic > m_axi_weights_WVALID;
    sc_in< sc_logic > m_axi_weights_WREADY;
    sc_out< sc_lv<16> > m_axi_weights_WDATA;
    sc_out< sc_lv<2> > m_axi_weights_WSTRB;
    sc_out< sc_logic > m_axi_weights_WLAST;
    sc_out< sc_lv<1> > m_axi_weights_WID;
    sc_out< sc_lv<1> > m_axi_weights_WUSER;
    sc_out< sc_logic > m_axi_weights_ARVALID;
    sc_in< sc_logic > m_axi_weights_ARREADY;
    sc_out< sc_lv<32> > m_axi_weights_ARADDR;
    sc_out< sc_lv<1> > m_axi_weights_ARID;
    sc_out< sc_lv<32> > m_axi_weights_ARLEN;
    sc_out< sc_lv<3> > m_axi_weights_ARSIZE;
    sc_out< sc_lv<2> > m_axi_weights_ARBURST;
    sc_out< sc_lv<2> > m_axi_weights_ARLOCK;
    sc_out< sc_lv<4> > m_axi_weights_ARCACHE;
    sc_out< sc_lv<3> > m_axi_weights_ARPROT;
    sc_out< sc_lv<4> > m_axi_weights_ARQOS;
    sc_out< sc_lv<4> > m_axi_weights_ARREGION;
    sc_out< sc_lv<1> > m_axi_weights_ARUSER;
    sc_in< sc_logic > m_axi_weights_RVALID;
    sc_out< sc_logic > m_axi_weights_RREADY;
    sc_in< sc_lv<16> > m_axi_weights_RDATA;
    sc_in< sc_logic > m_axi_weights_RLAST;
    sc_in< sc_lv<1> > m_axi_weights_RID;
    sc_in< sc_lv<1> > m_axi_weights_RUSER;
    sc_in< sc_lv<2> > m_axi_weights_RRESP;
    sc_in< sc_logic > m_axi_weights_BVALID;
    sc_out< sc_logic > m_axi_weights_BREADY;
    sc_in< sc_lv<2> > m_axi_weights_BRESP;
    sc_in< sc_lv<1> > m_axi_weights_BID;
    sc_in< sc_lv<1> > m_axi_weights_BUSER;
    sc_in< sc_lv<31> > weights_offset;
    sc_out< sc_logic > m_axi_betas_AWVALID;
    sc_in< sc_logic > m_axi_betas_AWREADY;
    sc_out< sc_lv<32> > m_axi_betas_AWADDR;
    sc_out< sc_lv<1> > m_axi_betas_AWID;
    sc_out< sc_lv<32> > m_axi_betas_AWLEN;
    sc_out< sc_lv<3> > m_axi_betas_AWSIZE;
    sc_out< sc_lv<2> > m_axi_betas_AWBURST;
    sc_out< sc_lv<2> > m_axi_betas_AWLOCK;
    sc_out< sc_lv<4> > m_axi_betas_AWCACHE;
    sc_out< sc_lv<3> > m_axi_betas_AWPROT;
    sc_out< sc_lv<4> > m_axi_betas_AWQOS;
    sc_out< sc_lv<4> > m_axi_betas_AWREGION;
    sc_out< sc_lv<1> > m_axi_betas_AWUSER;
    sc_out< sc_logic > m_axi_betas_WVALID;
    sc_in< sc_logic > m_axi_betas_WREADY;
    sc_out< sc_lv<16> > m_axi_betas_WDATA;
    sc_out< sc_lv<2> > m_axi_betas_WSTRB;
    sc_out< sc_logic > m_axi_betas_WLAST;
    sc_out< sc_lv<1> > m_axi_betas_WID;
    sc_out< sc_lv<1> > m_axi_betas_WUSER;
    sc_out< sc_logic > m_axi_betas_ARVALID;
    sc_in< sc_logic > m_axi_betas_ARREADY;
    sc_out< sc_lv<32> > m_axi_betas_ARADDR;
    sc_out< sc_lv<1> > m_axi_betas_ARID;
    sc_out< sc_lv<32> > m_axi_betas_ARLEN;
    sc_out< sc_lv<3> > m_axi_betas_ARSIZE;
    sc_out< sc_lv<2> > m_axi_betas_ARBURST;
    sc_out< sc_lv<2> > m_axi_betas_ARLOCK;
    sc_out< sc_lv<4> > m_axi_betas_ARCACHE;
    sc_out< sc_lv<3> > m_axi_betas_ARPROT;
    sc_out< sc_lv<4> > m_axi_betas_ARQOS;
    sc_out< sc_lv<4> > m_axi_betas_ARREGION;
    sc_out< sc_lv<1> > m_axi_betas_ARUSER;
    sc_in< sc_logic > m_axi_betas_RVALID;
    sc_out< sc_logic > m_axi_betas_RREADY;
    sc_in< sc_lv<16> > m_axi_betas_RDATA;
    sc_in< sc_logic > m_axi_betas_RLAST;
    sc_in< sc_lv<1> > m_axi_betas_RID;
    sc_in< sc_lv<1> > m_axi_betas_RUSER;
    sc_in< sc_lv<2> > m_axi_betas_RRESP;
    sc_in< sc_logic > m_axi_betas_BVALID;
    sc_out< sc_logic > m_axi_betas_BREADY;
    sc_in< sc_lv<2> > m_axi_betas_BRESP;
    sc_in< sc_lv<1> > m_axi_betas_BID;
    sc_in< sc_lv<1> > m_axi_betas_BUSER;
    sc_in< sc_lv<31> > betas_offset;
    sc_out< sc_logic > m_axi_outputs_AWVALID;
    sc_in< sc_logic > m_axi_outputs_AWREADY;
    sc_out< sc_lv<32> > m_axi_outputs_AWADDR;
    sc_out< sc_lv<1> > m_axi_outputs_AWID;
    sc_out< sc_lv<32> > m_axi_outputs_AWLEN;
    sc_out< sc_lv<3> > m_axi_outputs_AWSIZE;
    sc_out< sc_lv<2> > m_axi_outputs_AWBURST;
    sc_out< sc_lv<2> > m_axi_outputs_AWLOCK;
    sc_out< sc_lv<4> > m_axi_outputs_AWCACHE;
    sc_out< sc_lv<3> > m_axi_outputs_AWPROT;
    sc_out< sc_lv<4> > m_axi_outputs_AWQOS;
    sc_out< sc_lv<4> > m_axi_outputs_AWREGION;
    sc_out< sc_lv<1> > m_axi_outputs_AWUSER;
    sc_out< sc_logic > m_axi_outputs_WVALID;
    sc_in< sc_logic > m_axi_outputs_WREADY;
    sc_out< sc_lv<16> > m_axi_outputs_WDATA;
    sc_out< sc_lv<2> > m_axi_outputs_WSTRB;
    sc_out< sc_logic > m_axi_outputs_WLAST;
    sc_out< sc_lv<1> > m_axi_outputs_WID;
    sc_out< sc_lv<1> > m_axi_outputs_WUSER;
    sc_out< sc_logic > m_axi_outputs_ARVALID;
    sc_in< sc_logic > m_axi_outputs_ARREADY;
    sc_out< sc_lv<32> > m_axi_outputs_ARADDR;
    sc_out< sc_lv<1> > m_axi_outputs_ARID;
    sc_out< sc_lv<32> > m_axi_outputs_ARLEN;
    sc_out< sc_lv<3> > m_axi_outputs_ARSIZE;
    sc_out< sc_lv<2> > m_axi_outputs_ARBURST;
    sc_out< sc_lv<2> > m_axi_outputs_ARLOCK;
    sc_out< sc_lv<4> > m_axi_outputs_ARCACHE;
    sc_out< sc_lv<3> > m_axi_outputs_ARPROT;
    sc_out< sc_lv<4> > m_axi_outputs_ARQOS;
    sc_out< sc_lv<4> > m_axi_outputs_ARREGION;
    sc_out< sc_lv<1> > m_axi_outputs_ARUSER;
    sc_in< sc_logic > m_axi_outputs_RVALID;
    sc_out< sc_logic > m_axi_outputs_RREADY;
    sc_in< sc_lv<16> > m_axi_outputs_RDATA;
    sc_in< sc_logic > m_axi_outputs_RLAST;
    sc_in< sc_lv<1> > m_axi_outputs_RID;
    sc_in< sc_lv<1> > m_axi_outputs_RUSER;
    sc_in< sc_lv<2> > m_axi_outputs_RRESP;
    sc_in< sc_logic > m_axi_outputs_BVALID;
    sc_out< sc_logic > m_axi_outputs_BREADY;
    sc_in< sc_lv<2> > m_axi_outputs_BRESP;
    sc_in< sc_lv<1> > m_axi_outputs_BID;
    sc_in< sc_lv<1> > m_axi_outputs_BUSER;
    sc_in< sc_lv<31> > outputs_offset;
    sc_in< sc_lv<19> > outputs_offset2;
    sc_out< sc_logic > cntl_V_din;
    sc_in< sc_logic > cntl_V_full_n;
    sc_out< sc_logic > cntl_V_write;
    sc_signal< sc_logic > ap_var_for_const4;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<1> > ap_var_for_const2;
    sc_signal< sc_lv<2> > ap_var_for_const1;
    sc_signal< sc_lv<16> > ap_var_for_const3;


    // Module declarations
    conv_6(sc_module_name name);
    SC_HAS_PROCESS(conv_6);

    ~conv_6();

    sc_trace_file* mVcdFile;

    apply_7* grp_apply_7_fu_98;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_inputs_AWVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_inputs_AWADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_inputs_AWID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_inputs_AWLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_inputs_AWSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_inputs_AWBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_inputs_AWLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_inputs_AWCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_inputs_AWPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_inputs_AWQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_inputs_AWREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_inputs_AWUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_inputs_WVALID;
    sc_signal< sc_lv<16> > grp_apply_7_fu_98_m_axi_inputs_WDATA;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_inputs_WSTRB;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_inputs_WLAST;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_inputs_WID;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_inputs_WUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_inputs_ARVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_inputs_ARADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_inputs_ARID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_inputs_ARLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_inputs_ARSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_inputs_ARBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_inputs_ARLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_inputs_ARCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_inputs_ARPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_inputs_ARQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_inputs_ARREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_inputs_ARUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_inputs_RREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_inputs_BREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_weights_AWVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_weights_AWADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_weights_AWID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_weights_AWLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_weights_AWSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_weights_AWBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_weights_AWLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_weights_AWCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_weights_AWPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_weights_AWQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_weights_AWREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_weights_AWUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_weights_WVALID;
    sc_signal< sc_lv<16> > grp_apply_7_fu_98_m_axi_weights_WDATA;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_weights_WSTRB;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_weights_WLAST;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_weights_WID;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_weights_WUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_weights_ARVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_weights_ARADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_weights_ARID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_weights_ARLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_weights_ARSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_weights_ARBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_weights_ARLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_weights_ARCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_weights_ARPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_weights_ARQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_weights_ARREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_weights_ARUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_weights_RREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_weights_BREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_betas_AWVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_betas_AWADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_betas_AWID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_betas_AWLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_betas_AWSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_betas_AWBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_betas_AWLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_betas_AWCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_betas_AWPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_betas_AWQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_betas_AWREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_betas_AWUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_betas_WVALID;
    sc_signal< sc_lv<16> > grp_apply_7_fu_98_m_axi_betas_WDATA;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_betas_WSTRB;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_betas_WLAST;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_betas_WID;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_betas_WUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_betas_ARVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_betas_ARADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_betas_ARID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_betas_ARLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_betas_ARSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_betas_ARBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_betas_ARLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_betas_ARCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_betas_ARPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_betas_ARQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_betas_ARREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_betas_ARUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_betas_RREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_betas_BREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_outputs_AWVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_outputs_AWADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_outputs_AWID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_outputs_AWLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_outputs_AWSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_outputs_AWBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_outputs_AWLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_outputs_AWCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_outputs_AWPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_outputs_AWQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_outputs_AWREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_outputs_AWUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_outputs_WVALID;
    sc_signal< sc_lv<16> > grp_apply_7_fu_98_m_axi_outputs_WDATA;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_outputs_WSTRB;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_outputs_WLAST;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_outputs_WID;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_outputs_WUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_outputs_ARVALID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_outputs_ARADDR;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_outputs_ARID;
    sc_signal< sc_lv<32> > grp_apply_7_fu_98_m_axi_outputs_ARLEN;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_outputs_ARSIZE;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_outputs_ARBURST;
    sc_signal< sc_lv<2> > grp_apply_7_fu_98_m_axi_outputs_ARLOCK;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_outputs_ARCACHE;
    sc_signal< sc_lv<3> > grp_apply_7_fu_98_m_axi_outputs_ARPROT;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_outputs_ARQOS;
    sc_signal< sc_lv<4> > grp_apply_7_fu_98_m_axi_outputs_ARREGION;
    sc_signal< sc_lv<1> > grp_apply_7_fu_98_m_axi_outputs_ARUSER;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_outputs_RREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_m_axi_outputs_BREADY;
    sc_signal< sc_logic > grp_apply_7_fu_98_cntl_V_din;
    sc_signal< sc_logic > grp_apply_7_fu_98_cntl_V_write;
    sc_signal< sc_logic > grp_apply_7_fu_98_ap_start;
    sc_signal< sc_logic > grp_apply_7_fu_98_ap_done;
    sc_signal< sc_logic > grp_apply_7_fu_98_ap_ready;
    sc_signal< sc_logic > grp_apply_7_fu_98_ap_idle;
    sc_signal< sc_logic > grp_apply_7_fu_98_ap_continue;
    sc_signal< sc_logic > grp_apply_7_fu_98_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_sync_grp_apply_7_fu_98_ap_ready;
    sc_signal< sc_logic > ap_sync_grp_apply_7_fu_98_ap_done;
    sc_signal< bool > ap_block_state2_on_subcall_done;
    sc_signal< sc_logic > ap_sync_reg_grp_apply_7_fu_98_ap_ready;
    sc_signal< sc_logic > ap_sync_reg_grp_apply_7_fu_98_ap_done;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const3();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_state2_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_grp_apply_7_fu_98_ap_done();
    void thread_ap_sync_grp_apply_7_fu_98_ap_ready();
    void thread_cntl_V_din();
    void thread_cntl_V_write();
    void thread_grp_apply_7_fu_98_ap_continue();
    void thread_grp_apply_7_fu_98_ap_start();
    void thread_m_axi_betas_ARADDR();
    void thread_m_axi_betas_ARBURST();
    void thread_m_axi_betas_ARCACHE();
    void thread_m_axi_betas_ARID();
    void thread_m_axi_betas_ARLEN();
    void thread_m_axi_betas_ARLOCK();
    void thread_m_axi_betas_ARPROT();
    void thread_m_axi_betas_ARQOS();
    void thread_m_axi_betas_ARREGION();
    void thread_m_axi_betas_ARSIZE();
    void thread_m_axi_betas_ARUSER();
    void thread_m_axi_betas_ARVALID();
    void thread_m_axi_betas_AWADDR();
    void thread_m_axi_betas_AWBURST();
    void thread_m_axi_betas_AWCACHE();
    void thread_m_axi_betas_AWID();
    void thread_m_axi_betas_AWLEN();
    void thread_m_axi_betas_AWLOCK();
    void thread_m_axi_betas_AWPROT();
    void thread_m_axi_betas_AWQOS();
    void thread_m_axi_betas_AWREGION();
    void thread_m_axi_betas_AWSIZE();
    void thread_m_axi_betas_AWUSER();
    void thread_m_axi_betas_AWVALID();
    void thread_m_axi_betas_BREADY();
    void thread_m_axi_betas_RREADY();
    void thread_m_axi_betas_WDATA();
    void thread_m_axi_betas_WID();
    void thread_m_axi_betas_WLAST();
    void thread_m_axi_betas_WSTRB();
    void thread_m_axi_betas_WUSER();
    void thread_m_axi_betas_WVALID();
    void thread_m_axi_inputs_ARADDR();
    void thread_m_axi_inputs_ARBURST();
    void thread_m_axi_inputs_ARCACHE();
    void thread_m_axi_inputs_ARID();
    void thread_m_axi_inputs_ARLEN();
    void thread_m_axi_inputs_ARLOCK();
    void thread_m_axi_inputs_ARPROT();
    void thread_m_axi_inputs_ARQOS();
    void thread_m_axi_inputs_ARREGION();
    void thread_m_axi_inputs_ARSIZE();
    void thread_m_axi_inputs_ARUSER();
    void thread_m_axi_inputs_ARVALID();
    void thread_m_axi_inputs_AWADDR();
    void thread_m_axi_inputs_AWBURST();
    void thread_m_axi_inputs_AWCACHE();
    void thread_m_axi_inputs_AWID();
    void thread_m_axi_inputs_AWLEN();
    void thread_m_axi_inputs_AWLOCK();
    void thread_m_axi_inputs_AWPROT();
    void thread_m_axi_inputs_AWQOS();
    void thread_m_axi_inputs_AWREGION();
    void thread_m_axi_inputs_AWSIZE();
    void thread_m_axi_inputs_AWUSER();
    void thread_m_axi_inputs_AWVALID();
    void thread_m_axi_inputs_BREADY();
    void thread_m_axi_inputs_RREADY();
    void thread_m_axi_inputs_WDATA();
    void thread_m_axi_inputs_WID();
    void thread_m_axi_inputs_WLAST();
    void thread_m_axi_inputs_WSTRB();
    void thread_m_axi_inputs_WUSER();
    void thread_m_axi_inputs_WVALID();
    void thread_m_axi_outputs_ARADDR();
    void thread_m_axi_outputs_ARBURST();
    void thread_m_axi_outputs_ARCACHE();
    void thread_m_axi_outputs_ARID();
    void thread_m_axi_outputs_ARLEN();
    void thread_m_axi_outputs_ARLOCK();
    void thread_m_axi_outputs_ARPROT();
    void thread_m_axi_outputs_ARQOS();
    void thread_m_axi_outputs_ARREGION();
    void thread_m_axi_outputs_ARSIZE();
    void thread_m_axi_outputs_ARUSER();
    void thread_m_axi_outputs_ARVALID();
    void thread_m_axi_outputs_AWADDR();
    void thread_m_axi_outputs_AWBURST();
    void thread_m_axi_outputs_AWCACHE();
    void thread_m_axi_outputs_AWID();
    void thread_m_axi_outputs_AWLEN();
    void thread_m_axi_outputs_AWLOCK();
    void thread_m_axi_outputs_AWPROT();
    void thread_m_axi_outputs_AWQOS();
    void thread_m_axi_outputs_AWREGION();
    void thread_m_axi_outputs_AWSIZE();
    void thread_m_axi_outputs_AWUSER();
    void thread_m_axi_outputs_AWVALID();
    void thread_m_axi_outputs_BREADY();
    void thread_m_axi_outputs_RREADY();
    void thread_m_axi_outputs_WDATA();
    void thread_m_axi_outputs_WID();
    void thread_m_axi_outputs_WLAST();
    void thread_m_axi_outputs_WSTRB();
    void thread_m_axi_outputs_WUSER();
    void thread_m_axi_outputs_WVALID();
    void thread_m_axi_weights_ARADDR();
    void thread_m_axi_weights_ARBURST();
    void thread_m_axi_weights_ARCACHE();
    void thread_m_axi_weights_ARID();
    void thread_m_axi_weights_ARLEN();
    void thread_m_axi_weights_ARLOCK();
    void thread_m_axi_weights_ARPROT();
    void thread_m_axi_weights_ARQOS();
    void thread_m_axi_weights_ARREGION();
    void thread_m_axi_weights_ARSIZE();
    void thread_m_axi_weights_ARUSER();
    void thread_m_axi_weights_ARVALID();
    void thread_m_axi_weights_AWADDR();
    void thread_m_axi_weights_AWBURST();
    void thread_m_axi_weights_AWCACHE();
    void thread_m_axi_weights_AWID();
    void thread_m_axi_weights_AWLEN();
    void thread_m_axi_weights_AWLOCK();
    void thread_m_axi_weights_AWPROT();
    void thread_m_axi_weights_AWQOS();
    void thread_m_axi_weights_AWREGION();
    void thread_m_axi_weights_AWSIZE();
    void thread_m_axi_weights_AWUSER();
    void thread_m_axi_weights_AWVALID();
    void thread_m_axi_weights_BREADY();
    void thread_m_axi_weights_RREADY();
    void thread_m_axi_weights_WDATA();
    void thread_m_axi_weights_WID();
    void thread_m_axi_weights_WLAST();
    void thread_m_axi_weights_WSTRB();
    void thread_m_axi_weights_WUSER();
    void thread_m_axi_weights_WVALID();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
