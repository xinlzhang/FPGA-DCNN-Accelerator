// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _output_result_7_HH_
#define _output_result_7_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct output_result_7 : public sc_module {
    // Port declarations 124
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
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
    sc_in< sc_lv<31> > outputs_offset_dout;
    sc_in< sc_logic > outputs_offset_empty_n;
    sc_out< sc_logic > outputs_offset_read;
    sc_in< sc_lv<19> > outputs_offset_c_dout;
    sc_in< sc_logic > outputs_offset_c_empty_n;
    sc_out< sc_logic > outputs_offset_c_read;
    sc_in< sc_lv<16> > output_buffer_0_dout;
    sc_in< sc_logic > output_buffer_0_empty_n;
    sc_out< sc_logic > output_buffer_0_read;
    sc_in< sc_lv<16> > output_buffer_1_dout;
    sc_in< sc_logic > output_buffer_1_empty_n;
    sc_out< sc_logic > output_buffer_1_read;
    sc_in< sc_lv<16> > output_buffer_2_dout;
    sc_in< sc_logic > output_buffer_2_empty_n;
    sc_out< sc_logic > output_buffer_2_read;
    sc_in< sc_lv<16> > output_buffer_3_dout;
    sc_in< sc_logic > output_buffer_3_empty_n;
    sc_out< sc_logic > output_buffer_3_read;
    sc_in< sc_lv<16> > output_buffer_4_dout;
    sc_in< sc_logic > output_buffer_4_empty_n;
    sc_out< sc_logic > output_buffer_4_read;
    sc_in< sc_lv<16> > output_buffer_5_dout;
    sc_in< sc_logic > output_buffer_5_empty_n;
    sc_out< sc_logic > output_buffer_5_read;
    sc_in< sc_lv<16> > output_buffer_6_dout;
    sc_in< sc_logic > output_buffer_6_empty_n;
    sc_out< sc_logic > output_buffer_6_read;
    sc_in< sc_lv<16> > output_buffer_7_dout;
    sc_in< sc_logic > output_buffer_7_empty_n;
    sc_out< sc_logic > output_buffer_7_read;
    sc_in< sc_lv<16> > output_buffer_8_dout;
    sc_in< sc_logic > output_buffer_8_empty_n;
    sc_out< sc_logic > output_buffer_8_read;
    sc_in< sc_lv<16> > output_buffer_9_dout;
    sc_in< sc_logic > output_buffer_9_empty_n;
    sc_out< sc_logic > output_buffer_9_read;
    sc_in< sc_lv<16> > output_buffer_10_dout;
    sc_in< sc_logic > output_buffer_10_empty_n;
    sc_out< sc_logic > output_buffer_10_read;
    sc_in< sc_lv<16> > output_buffer_11_dout;
    sc_in< sc_logic > output_buffer_11_empty_n;
    sc_out< sc_logic > output_buffer_11_read;
    sc_in< sc_lv<16> > output_buffer_12_dout;
    sc_in< sc_logic > output_buffer_12_empty_n;
    sc_out< sc_logic > output_buffer_12_read;
    sc_in< sc_lv<16> > output_buffer_13_dout;
    sc_in< sc_logic > output_buffer_13_empty_n;
    sc_out< sc_logic > output_buffer_13_read;
    sc_in< sc_lv<16> > output_buffer_14_dout;
    sc_in< sc_logic > output_buffer_14_empty_n;
    sc_out< sc_logic > output_buffer_14_read;
    sc_in< sc_lv<16> > output_buffer_15_dout;
    sc_in< sc_logic > output_buffer_15_empty_n;
    sc_out< sc_logic > output_buffer_15_read;
    sc_in< sc_logic > result_buffer_V_dout;
    sc_in< sc_logic > result_buffer_V_empty_n;
    sc_out< sc_logic > result_buffer_V_read;
    sc_in< sc_lv<32> > result_c_V_dout;
    sc_in< sc_logic > result_c_V_empty_n;
    sc_out< sc_logic > result_c_V_read;
    sc_in< sc_lv<32> > result_r_V_dout;
    sc_in< sc_logic > result_r_V_empty_n;
    sc_out< sc_logic > result_r_V_read;
    sc_in< sc_lv<32> > result_m_V_dout;
    sc_in< sc_logic > result_m_V_empty_n;
    sc_out< sc_logic > result_m_V_read;
    sc_in< sc_lv<32> > result_n_V_dout;
    sc_in< sc_logic > result_n_V_empty_n;
    sc_out< sc_logic > result_n_V_read;
    sc_out< sc_logic > cntl_V_din;
    sc_in< sc_logic > cntl_V_full_n;
    sc_out< sc_logic > cntl_V_write;


    // Module declarations
    output_result_7(sc_module_name name);
    SC_HAS_PROCESS(output_result_7);

    ~output_result_7();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<13> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > outputs_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > outputs_blk_n_W;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_268_i_i_i_reg_770;
    sc_signal< sc_logic > outputs_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > outputs_offset_blk_n;
    sc_signal< sc_logic > outputs_offset_c_blk_n;
    sc_signal< sc_logic > cntl_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_261_i_i_i_fu_531_p2;
    sc_signal< sc_lv<1> > tmp_63_fu_546_p1;
    sc_signal< sc_lv<5> > i_0_i_i_i_i_reg_380;
    sc_signal< sc_lv<33> > outputs_offset_cast_s_fu_429_p1;
    sc_signal< sc_lv<33> > outputs_offset_cast_s_reg_684;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<34> > sext_cast_i_i_fu_433_p1;
    sc_signal< sc_lv<34> > sext_cast_i_i_reg_689;
    sc_signal< sc_lv<32> > tmp_60_reg_697;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_nbreadreq_fu_180_p3;
    sc_signal< sc_lv<32> > tmp_61_reg_703;
    sc_signal< sc_lv<32> > tmp_62_reg_709;
    sc_signal< sc_lv<32> > cLoops_fu_460_p3;
    sc_signal< sc_lv<32> > cLoops_reg_715;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > rLoops_fu_479_p3;
    sc_signal< sc_lv<32> > rLoops_reg_721;
    sc_signal< sc_lv<32> > mLoops_fu_498_p3;
    sc_signal< sc_lv<32> > mLoops_reg_726;
    sc_signal< sc_lv<32> > base_addr_fu_522_p2;
    sc_signal< sc_lv<5> > tm_fu_536_p2;
    sc_signal< sc_lv<5> > tm_reg_739;
    sc_signal< bool > ap_predicate_op109_write_state5;
    sc_signal< bool > ap_block_state5;
    sc_signal< sc_lv<4> > tmp_42_fu_542_p1;
    sc_signal< sc_lv<4> > tmp_42_reg_744;
    sc_signal< sc_lv<5> > tr_divS_fu_559_p2;
    sc_signal< sc_lv<5> > tr_divS_reg_754;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > outputs_addr_reg_759;
    sc_signal< sc_lv<1> > tmp_264_i_i_i_fu_554_p2;
    sc_signal< sc_lv<32> > base_addr_d1_3_fu_593_p2;
    sc_signal< sc_lv<1> > tmp_268_i_i_i_fu_603_p2;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter1;
    sc_signal< sc_logic > ap_sig_ioackin_m_axi_outputs_WREADY;
    sc_signal< bool > ap_block_state9_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<5> > i_fu_608_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > base_addr_d2_3_fu_678_p2;
    sc_signal< sc_lv<32> > base_addr_d2_3_reg_859;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_sig_ioackin_m_axi_outputs_AWREADY;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state8;
    sc_signal< sc_lv<32> > base_addr_d2_reg_337;
    sc_signal< sc_lv<5> > tm_0_i_i_i_i_reg_347;
    sc_signal< sc_lv<32> > base_addr_d2_0_i_i_i_reg_358;
    sc_signal< sc_lv<5> > tr_divS_0_i_i_i_i_reg_369;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_42_load_i_i_reg_391;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_tmp_42_load_i_i_reg_391;
    sc_signal< sc_lv<64> > sum_cast_i_i_fu_583_p1;
    sc_signal< sc_logic > ap_reg_ioackin_m_axi_outputs_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_m_axi_outputs_WREADY;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > tmp_i_i_i_fu_449_p2;
    sc_signal< sc_lv<1> > tmp_249_i_i_i_fu_454_p2;
    sc_signal< sc_lv<32> > tmp_254_i_i_i_fu_468_p2;
    sc_signal< sc_lv<1> > tmp_255_i_i_i_fu_473_p2;
    sc_signal< sc_lv<32> > tmp_256_i_i_i_fu_487_p2;
    sc_signal< sc_lv<1> > tmp_257_i_i_i_fu_492_p2;
    sc_signal< sc_lv<32> > tmp_41_fu_511_p2;
    sc_signal< sc_lv<32> > tmp_40_fu_506_p2;
    sc_signal< sc_lv<32> > tmp1_i_i_fu_516_p2;
    sc_signal< sc_lv<32> > tm_0_i_cast_i_i_i_fu_527_p1;
    sc_signal< sc_lv<32> > tr_divS_0_i_cast_i_i_fu_550_p1;
    sc_signal< sc_lv<33> > tmp_267_cast_i_i_i_fu_565_p1;
    sc_signal< sc_lv<33> > tmp_i_i_fu_569_p2;
    sc_signal< sc_lv<34> > tmp_5_cast_i_i_fu_574_p1;
    sc_signal< sc_lv<34> > sum_i_i_fu_578_p2;
    sc_signal< sc_lv<32> > i_0_i_cast_i_i_i_fu_599_p1;
    sc_signal< sc_lv<13> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_323;
    sc_signal< bool > ap_condition_837;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<13> ap_ST_fsm_state1;
    static const sc_lv<13> ap_ST_fsm_state2;
    static const sc_lv<13> ap_ST_fsm_state3;
    static const sc_lv<13> ap_ST_fsm_state4;
    static const sc_lv<13> ap_ST_fsm_state5;
    static const sc_lv<13> ap_ST_fsm_state6;
    static const sc_lv<13> ap_ST_fsm_state7;
    static const sc_lv<13> ap_ST_fsm_pp0_stage0;
    static const sc_lv<13> ap_ST_fsm_state10;
    static const sc_lv<13> ap_ST_fsm_state11;
    static const sc_lv<13> ap_ST_fsm_state12;
    static const sc_lv<13> ap_ST_fsm_state13;
    static const sc_lv<13> ap_ST_fsm_state14;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<4> ap_const_lv4_E;
    static const sc_lv<4> ap_const_lv4_D;
    static const sc_lv<4> ap_const_lv4_C;
    static const sc_lv<4> ap_const_lv4_B;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_100;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_400;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state5();
    void thread_ap_block_state8_pp0_stage0_iter0();
    void thread_ap_block_state9_io();
    void thread_ap_block_state9_pp0_stage0_iter1();
    void thread_ap_condition_323();
    void thread_ap_condition_837();
    void thread_ap_condition_pp0_exit_iter0_state8();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_reg_pp0_iter0_tmp_42_load_i_i_reg_391();
    void thread_ap_predicate_op109_write_state5();
    void thread_ap_ready();
    void thread_ap_sig_ioackin_m_axi_outputs_AWREADY();
    void thread_ap_sig_ioackin_m_axi_outputs_WREADY();
    void thread_base_addr_d1_3_fu_593_p2();
    void thread_base_addr_d2_3_fu_678_p2();
    void thread_base_addr_fu_522_p2();
    void thread_cLoops_fu_460_p3();
    void thread_cntl_V_blk_n();
    void thread_cntl_V_din();
    void thread_cntl_V_write();
    void thread_i_0_i_cast_i_i_i_fu_599_p1();
    void thread_i_fu_608_p2();
    void thread_mLoops_fu_498_p3();
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
    void thread_output_buffer_0_read();
    void thread_output_buffer_10_read();
    void thread_output_buffer_11_read();
    void thread_output_buffer_12_read();
    void thread_output_buffer_13_read();
    void thread_output_buffer_14_read();
    void thread_output_buffer_15_read();
    void thread_output_buffer_1_read();
    void thread_output_buffer_2_read();
    void thread_output_buffer_3_read();
    void thread_output_buffer_4_read();
    void thread_output_buffer_5_read();
    void thread_output_buffer_6_read();
    void thread_output_buffer_7_read();
    void thread_output_buffer_8_read();
    void thread_output_buffer_9_read();
    void thread_outputs_blk_n_AW();
    void thread_outputs_blk_n_B();
    void thread_outputs_blk_n_W();
    void thread_outputs_offset_blk_n();
    void thread_outputs_offset_c_blk_n();
    void thread_outputs_offset_c_read();
    void thread_outputs_offset_cast_s_fu_429_p1();
    void thread_outputs_offset_read();
    void thread_rLoops_fu_479_p3();
    void thread_result_buffer_V_read();
    void thread_result_c_V_read();
    void thread_result_m_V_read();
    void thread_result_n_V_read();
    void thread_result_r_V_read();
    void thread_sext_cast_i_i_fu_433_p1();
    void thread_sum_cast_i_i_fu_583_p1();
    void thread_sum_i_i_fu_578_p2();
    void thread_tm_0_i_cast_i_i_i_fu_527_p1();
    void thread_tm_fu_536_p2();
    void thread_tmp1_i_i_fu_516_p2();
    void thread_tmp_249_i_i_i_fu_454_p2();
    void thread_tmp_254_i_i_i_fu_468_p2();
    void thread_tmp_255_i_i_i_fu_473_p2();
    void thread_tmp_256_i_i_i_fu_487_p2();
    void thread_tmp_257_i_i_i_fu_492_p2();
    void thread_tmp_261_i_i_i_fu_531_p2();
    void thread_tmp_264_i_i_i_fu_554_p2();
    void thread_tmp_267_cast_i_i_i_fu_565_p1();
    void thread_tmp_268_i_i_i_fu_603_p2();
    void thread_tmp_40_fu_506_p2();
    void thread_tmp_41_fu_511_p2();
    void thread_tmp_42_fu_542_p1();
    void thread_tmp_5_cast_i_i_fu_574_p1();
    void thread_tmp_63_fu_546_p1();
    void thread_tmp_i_i_fu_569_p2();
    void thread_tmp_i_i_i_fu_449_p2();
    void thread_tmp_nbreadreq_fu_180_p3();
    void thread_tr_divS_0_i_cast_i_i_fu_550_p1();
    void thread_tr_divS_fu_559_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif