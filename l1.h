#include"nvdla.h"
void l1(){reg_write(CDMA_S_POINTER_0,0x0);//group0
reg_write(CDMA_S_ARBITER_0,0x3000f);
reg_write(CDMA_D_MISC_CFG_0,0x11000000);//direct int8
reg_write(CDMA_D_DATAIN_FORMAT_0,0x0);//feature
reg_write(CDMA_D_DATAIN_SIZE_0_0,0x1f001f);//32*32
reg_write(CDMA_D_DATAIN_SIZE_1_0,0x7);//*8
reg_write(CDMA_D_PIXEL_OFFSET_0,0x0);
reg_write(CDMA_D_DAIN_RAM_TYPE_0,0x1);//MC
reg_write(CDMA_D_DAIN_ADDR_HIGH_0_0,0x0);
reg_write(CDMA_D_DATAIN_FORMAT_0,0x0);
reg_write(CDMA_D_DAIN_ADDR_LOW_0_0,0x81000000);
reg_write(CDMA_D_DAIN_ADDR_HIGH_1_0,0x0);
reg_write(CDMA_D_DAIN_ADDR_LOW_1_0,0x0);
reg_write(CDMA_D_LINE_STRIDE_0,0x100);//32*8
reg_write(CDMA_D_SURF_STRIDE_0,0x2000);//32*8*32
reg_write(CDMA_D_DAIN_MAP_0,0x10001);
reg_write(CDMA_D_BATCH_NUMBER_0,0x0);
reg_write(CDMA_D_BATCH_STRIDE_0,0x0);
reg_write(CDMA_D_ENTRY_PER_SLICE_0,0x1f);
reg_write(CDMA_D_FETCH_GRAIN_0,0x0);
reg_write(CDMA_D_WEIGHT_FORMAT_0,0x0);//UNCOMPRESSED
reg_write(CDMA_D_WEIGHT_SIZE_0_0,5*5*8);//0x1000  5*5
reg_write(CDMA_D_WEIGHT_SIZE_1_0,0x5);//6个kernel
reg_write(CDMA_D_WEIGHT_RAM_TYPE_0,0x1);//MC
reg_write(CDMA_D_WEIGHT_ADDR_HIGH_0,0x0);
reg_write(CDMA_D_WEIGHT_ADDR_LOW_0,0x80100000);
reg_write(CDMA_D_WEIGHT_BYTES_0,5*5*8*6);
reg_write(CDMA_D_WGS_ADDR_HIGH_0,0x0);
reg_write(CDMA_D_WGS_ADDR_LOW_0,0x0);
reg_write(CDMA_D_WMB_BYTES_0,0x0);
reg_write(CDMA_D_MEAN_FORMAT_0,0x0);
reg_write(CDMA_D_MEAN_GLOBAL_0_0,0x0);
reg_write(CDMA_D_MEAN_GLOBAL_1_0,0x0);
reg_write(CDMA_D_CVT_CFG_0,0x0);
reg_write(CDMA_D_CVT_OFFSET_0,0x0);
reg_write(CDMA_D_CVT_SCALE_0,0x1);
reg_write(CDMA_D_CONV_STRIDE_0,0x0);
reg_write(CDMA_D_ZERO_PADDING_0,0x0);
reg_write(CDMA_D_BANK_0,0x20001);
reg_write(CDMA_D_CYA_0,0x0);
reg_write(CSC_S_POINTER_0,0x0);
reg_write(CSC_D_MISC_CFG_0,0x11000000);//direct int8
reg_write(CSC_D_DATAIN_FORMAT_0,0x0);//feature
reg_write(CSC_D_DATAIN_SIZE_EXT_0_0,0x1f001f);//32*32
reg_write(CSC_D_DATAIN_SIZE_EXT_1_0,0x7);//*8
reg_write(CSC_D_BATCH_NUMBER_0,0x0);
reg_write(CSC_D_ENTRY_PER_SLICE_0,0x1f);
reg_write(CSC_D_WEIGHT_FORMAT_0,0x0);
reg_write(CSC_D_WEIGHT_SIZE_EXT_0_0,0x40004);//5*5
reg_write(CSC_D_WEIGHT_SIZE_EXT_1_0,0x50007);//channel=8,kernel=6
reg_write(CSC_D_WEIGHT_BYTES_0,5*5*8*6);
reg_write(CSC_D_WMB_BYTES_0,0x0);
reg_write(CSC_D_DATAOUT_SIZE_0_0,0x001b001b);//28*28
reg_write(CSC_D_DATAOUT_SIZE_1_0,0x5);//*6
reg_write(CSC_D_ATOMICS_0,28*28);
reg_write(CSC_D_CONV_STRIDE_EXT_0,0x0);
reg_write(CSC_D_DILATION_EXT_0,0x0);
reg_write(CSC_D_ZERO_PADDING_0,0x0);
reg_write(CSC_D_ZERO_PADDING_VALUE_0,0x0);
reg_write(CSC_D_BANK_0,0x20001);
reg_write(CSC_D_CYA_0,0x0);
reg_write(CMAC_A_S_POINTER_0,0x0);
reg_write(CMAC_A_D_MISC_CFG_0,0x1000);//int16 direct
reg_write(CMAC_B_S_POINTER_0,0x0);
reg_write(CMAC_B_D_MISC_CFG_0,0x1000);
reg_write(CACC_S_POINTER_0,0x0);
reg_write(CACC_D_MISC_CFG_0,0x1000);
reg_write(CACC_D_DATAOUT_SIZE_0_0,0x001b001b);//28*28
reg_write(CACC_D_DATAOUT_SIZE_1_0,0x5);//*6
reg_write(CACC_D_DATAOUT_ADDR_0,0x80400000);
reg_write(CACC_D_BATCH_NUMBER_0,0x0);
reg_write(CACC_D_LINE_STRIDE_0,28*8);
reg_write(CACC_D_SURF_STRIDE_0,28*28*8);
reg_write(CACC_D_DATAOUT_MAP_0,0x10001);
reg_write(CACC_D_CLIP_CFG_0,0x0);
reg_write(CACC_D_CYA_0,0x0);
reg_write(SDP_RDMA_D_NRDMA_CFG_0,0x1b);
reg_write(SDP_RDMA_D_ERDMA_CFG_0,0x1b);
reg_write(SDP_RDMA_D_BRDMA_CFG_0,0x1b);
reg_write(SDP_S_POINTER_0,0x0);
reg_write(SDP_S_LUT_ACCESS_CFG_0,0x0);
reg_write(SDP_S_LUT_ACCESS_DATA_0,0x0);
reg_write(SDP_S_LUT_CFG_0,0x0);
reg_write(SDP_D_DATA_CUBE_WIDTH_0,0x1b);//28*28*6
reg_write(SDP_D_DATA_CUBE_HEIGHT_0,0x1b);
reg_write(SDP_D_DATA_CUBE_CHANNEL_0,0x5);
reg_write(SDP_D_DST_BASE_ADDR_LOW_0,0x81100000);
reg_write(SDP_D_DST_BASE_ADDR_HIGH_0,0x0);
reg_write(SDP_D_DST_LINE_STRIDE_0,28*8);
reg_write(SDP_D_DST_SURFACE_STRIDE_0,28*8*32);
reg_write(SDP_D_DP_BS_CFG_0,0x1a);
reg_write(SDP_D_DP_BS_ALU_CFG_0,0x0);
reg_write(SDP_D_DP_BS_ALU_SRC_VALUE_0,0x0);
reg_write(SDP_D_DP_BS_MUL_CFG_0,0x0);
reg_write(SDP_D_DP_BS_MUL_SRC_VALUE_0,0x1);
reg_write(SDP_D_FEATURE_MODE_CFG_0,0x3);
reg_write(SDP_D_DP_BN_CFG_0,0x1);
reg_write(SDP_D_DP_EW_CFG_0,0x1);
reg_write(SDP_D_DST_DMA_CFG_0,0x1);
reg_write(SDP_D_DST_BATCH_STRIDE_0,0x0);
reg_write(SDP_D_DATA_FORMAT_0,0x0);
reg_write(SDP_D_CVT_OFFSET_0,0x0);
reg_write(SDP_D_CVT_SCALE_0,0x1);
reg_write(SDP_D_CVT_SHIFT_0,0x3);


reg_write(PDP_D_DATA_CUBE_OUT_WIDTH_0,0x0000000d);//输出宽度
reg_write(PDP_D_DATA_CUBE_OUT_HEIGHT_0,0x0000000d);
reg_write(PDP_D_DATA_CUBE_OUT_CHANNEL_0,0x00000005);//14*14*6
reg_write(PDP_D_PARTIAL_WIDTH_IN_0,0x00701c07);
reg_write(PDP_D_PARTIAL_WIDTH_OUT_0,0x00701c07);
reg_write(PDP_RDMA_D_PARTIAL_WIDTH_IN_0,0x00701c07);
reg_write(PDP_D_SRC_LINE_STRIDE_0,28*8);
reg_write(PDP_D_SRC_SURFACE_STRIDE_0,28*8*28);
reg_write(PDP_RDMA_D_SRC_LINE_STRIDE_0,28*8);
reg_write(PDP_RDMA_D_SRC_SURFACE_STRIDE_0,28*8*8);
reg_write(PDP_D_DST_LINE_STRIDE_0,14*8);//
reg_write(PDP_D_DST_SURFACE_STRIDE_0,14*8*14);//
reg_write(PDP_D_DATA_FORMAT_0,0x00000000);//int8
reg_write(PDP_RDMA_D_DATA_FORMAT_0,0x00000000);//int8

reg_write(PDP_D_DATA_CUBE_IN_HEIGHT_0,0x0000001b);//28*28*6
reg_write(PDP_D_DATA_CUBE_IN_WIDTH_0,0x0000001b);
reg_write(PDP_D_DATA_CUBE_IN_CHANNEL_0,0x00000005);
reg_write(PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0,0x0000001b);//28*28*6
reg_write(PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0,0x0000001b);
reg_write(PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0,0x00000005);

reg_write(PDP_RDMA_D_OPERATION_MODE_CFG_0,0x00000000);//split = 1
reg_write(PDP_D_POOLING_KERNEL_CFG_0,0x00110101);   //2*2 pool
reg_write(PDP_RDMA_D_POOLING_KERNEL_CFG_0,0x00000011);  //2*2 pool stride=2
reg_write(PDP_D_POOLING_PADDING_CFG_0,0x00000000);//pad=0

reg_write(PDP_D_OPERATION_MODE_CFG_0,0x00000001);//max pooling
reg_write(PDP_RDMA_D_FLYING_MODE_0,0x00000000);//src = sdp

reg_write(PDP_D_DST_RAM_CFG_0,0x00000001);//MC
reg_write(PDP_RDMA_D_SRC_RAM_CFG_0,0x00000001);//MC

reg_write(PDP_RDMA_D_SRC_BASE_ADDR_LOW_0,0x81100000);
reg_write(PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0,0x00000000);
reg_write(PDP_D_SRC_BASE_ADDR_LOW_0,0x81100000);
reg_write(PDP_D_SRC_BASE_ADDR_HIGH_0,0x00000000);
reg_write(PDP_D_DST_BASE_ADDR_LOW_0,0x81200000);
reg_write(PDP_D_DST_BASE_ADDR_HIGH_0,0x00000000);
reg_write(SDP_D_OP_ENABLE_0,0x1);
reg_write(SDP_RDMA_D_OP_ENABLE_0,0x0);
reg_write(CACC_D_OP_ENABLE_0,0x1);
reg_write(CMAC_A_D_OP_ENABLE_0,0x1);
reg_write(CMAC_B_D_OP_ENABLE_0,0x1);
reg_write(CSC_D_OP_ENABLE_0,0x1);
reg_write(CDMA_D_OP_ENABLE_0,0x1);

reg_write(PDP_RDMA_D_OP_ENABLE_0,0x00000001);

reg_write(PDP_D_OP_ENABLE_0,0x00000001);}

