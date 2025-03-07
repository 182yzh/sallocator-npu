/*
 * Copyright (C) Hisilicon Technologies Co., Ltd. 2023-2023. All rights reserved.
 * Description: Api of isp
 * Author: Hisilicon multimedia software group
 * Create: 2023/01/12
 */

#ifndef HI_MPI_ISP_H
#define HI_MPI_ISP_H

#include "hi_common_awb.h"
#include "hi_common_ae.h"
#include "hi_common_3a.h"
#include "hi_common_isp.h"
#include "hi_common_vi.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

hi_s32 hi_mpi_isp_mem_init(hi_vi_pipe vi_pipe);
hi_s32 hi_mpi_isp_init(hi_vi_pipe vi_pipe);
hi_s32 hi_mpi_isp_run(hi_vi_pipe vi_pipe);
hi_s32 hi_mpi_isp_run_once(hi_vi_pipe vi_pipe);
hi_s32 hi_mpi_isp_exit(hi_vi_pipe vi_pipe);

hi_s32 hi_mpi_isp_set_pub_attr(hi_vi_pipe vi_pipe, const hi_isp_pub_attr *pub_attr);
hi_s32 hi_mpi_isp_get_pub_attr(hi_vi_pipe vi_pipe, hi_isp_pub_attr *pub_attr);

hi_s32 hi_mpi_isp_set_fmw_state(hi_vi_pipe vi_pipe, const hi_isp_fmw_state state);
hi_s32 hi_mpi_isp_get_fmw_state(hi_vi_pipe vi_pipe, hi_isp_fmw_state *state);

hi_s32 hi_mpi_isp_get_vd_time_out(hi_vi_pipe vi_pipe, hi_isp_vd_type isp_vd_type, hi_u32 milli_sec);
hi_s32 hi_mpi_isp_sensor_reg_callback(hi_vi_pipe vi_pipe, const hi_isp_sns_attr_info *sns_attr_info,
                                      const hi_isp_sensor_register *sns_register);
hi_s32 hi_mpi_isp_sensor_unreg_callback(hi_vi_pipe vi_pipe, hi_sensor_id sensor_id);

/* if have registered multy libs, set bind attr to appoint the active lib. */
hi_s32 hi_mpi_isp_set_bind_attr(hi_vi_pipe vi_pipe, const hi_isp_bind_attr *bind_attr);
hi_s32 hi_mpi_isp_get_bind_attr(hi_vi_pipe vi_pipe, hi_isp_bind_attr *bind_attr);
hi_s32 hi_mpi_isp_ae_lib_reg_callback(hi_vi_pipe vi_pipe, const hi_isp_3a_alg_lib *ae_lib, \
    const hi_isp_ae_register *ae_register);
hi_s32 hi_mpi_isp_awb_lib_reg_callback(hi_vi_pipe vi_pipe,
    const hi_isp_3a_alg_lib *awb_lib, const hi_isp_awb_register *awb_register);
hi_s32 hi_mpi_isp_ae_lib_unreg_callback(hi_vi_pipe vi_pipe, const hi_isp_3a_alg_lib *ae_lib);
hi_s32 hi_mpi_isp_awb_lib_unreg_callback(hi_vi_pipe vi_pipe, const hi_isp_3a_alg_lib *awb_lib);

hi_s32 hi_mpi_isp_set_ctrl_param(hi_vi_pipe vi_pipe, const hi_isp_ctrl_param *isp_ctrl_param);
hi_s32 hi_mpi_isp_get_ctrl_param(hi_vi_pipe vi_pipe, hi_isp_ctrl_param *isp_ctrl_param);

hi_s32 hi_mpi_isp_set_module_ctrl(hi_vi_pipe vi_pipe, const hi_isp_module_ctrl *mod_ctrl);
hi_s32 hi_mpi_isp_get_module_ctrl(hi_vi_pipe vi_pipe, hi_isp_module_ctrl *mod_ctrl);

hi_s32 hi_mpi_isp_set_fswdr_attr(hi_vi_pipe vi_pipe, const hi_isp_wdr_fs_attr *fswdr_attr);
hi_s32 hi_mpi_isp_get_fswdr_attr(hi_vi_pipe vi_pipe, hi_isp_wdr_fs_attr *fswdr_attr);

hi_s32 hi_mpi_isp_query_inner_state_info(hi_vi_pipe vi_pipe, hi_isp_inner_state_info *inner_state_info);

hi_s32 hi_mpi_isp_get_ae_stats(hi_vi_pipe vi_pipe, hi_isp_ae_stats *ae_stat);

hi_s32 hi_mpi_isp_get_mg_stats(hi_vi_pipe vi_pipe, hi_isp_mg_stats *mg_stat);
hi_s32 hi_mpi_isp_get_wb_stats(hi_vi_pipe vi_pipe, hi_isp_wb_stats *wb_stat);

hi_s32 hi_mpi_isp_set_stats_cfg(hi_vi_pipe vi_pipe, const hi_isp_stats_cfg *stat_cfg);
hi_s32 hi_mpi_isp_get_stats_cfg(hi_vi_pipe vi_pipe, hi_isp_stats_cfg *stat_cfg);

hi_s32 hi_mpi_isp_set_drc_attr(hi_vi_pipe vi_pipe, const hi_isp_drc_attr *drc);
hi_s32 hi_mpi_isp_get_drc_attr(hi_vi_pipe vi_pipe, hi_isp_drc_attr *drc);

hi_s32 hi_mpi_isp_set_dehaze_attr(hi_vi_pipe vi_pipe, const hi_isp_dehaze_attr *dehaze_attr);
hi_s32 hi_mpi_isp_get_dehaze_attr(hi_vi_pipe vi_pipe, hi_isp_dehaze_attr *dehaze_attr);

hi_s32 hi_mpi_isp_set_ldci_attr(hi_vi_pipe vi_pipe, const hi_isp_ldci_attr *ldci_attr);
hi_s32 hi_mpi_isp_get_ldci_attr(hi_vi_pipe vi_pipe, hi_isp_ldci_attr *ldci_attr);

hi_s32 hi_mpi_isp_set_sns_slave_attr(hi_slave_dev slave_dev, const hi_isp_slave_sns_sync *sns_sync);
hi_s32 hi_mpi_isp_get_sns_slave_attr(hi_slave_dev slave_dev, hi_isp_slave_sns_sync *sns_sync);

hi_s32 hi_mpi_isp_set_dp_calibrate(hi_vi_pipe vi_pipe, const hi_isp_dp_static_calibrate *dp_calibrate);
hi_s32 hi_mpi_isp_get_dp_calibrate(hi_vi_pipe vi_pipe, hi_isp_dp_static_calibrate *dp_calibrate);
hi_s32 hi_mpi_isp_set_dp_static_attr(hi_vi_pipe vi_pipe, const hi_isp_dp_static_attr *dp_static_attr);
hi_s32 hi_mpi_isp_get_dp_static_attr(hi_vi_pipe vi_pipe,  hi_isp_dp_static_attr *dp_static_attr);
hi_s32 hi_mpi_isp_set_dp_dynamic_attr(hi_vi_pipe vi_pipe, const hi_isp_dp_dynamic_attr *dp_dynamic_attr);
hi_s32 hi_mpi_isp_get_dp_dynamic_attr(hi_vi_pipe vi_pipe, hi_isp_dp_dynamic_attr *dp_dynamic_attr);

hi_s32 hi_mpi_isp_set_mesh_shading_attr(hi_vi_pipe vi_pipe, const hi_isp_shading_attr *shading_attr);
hi_s32 hi_mpi_isp_get_mesh_shading_attr(hi_vi_pipe vi_pipe, hi_isp_shading_attr *shading_attr);
hi_s32 hi_mpi_isp_set_mesh_shading_gain_lut_attr(hi_vi_pipe vi_pipe, const hi_isp_shading_lut_attr *shading_lut_attr);
hi_s32 hi_mpi_isp_get_mesh_shading_gain_lut_attr(hi_vi_pipe vi_pipe, hi_isp_shading_lut_attr *shading_lut_attr);
hi_s32 hi_mpi_isp_set_auto_color_shading_attr(hi_vi_pipe vi_pipe, const hi_isp_acs_attr *acs_attr);
hi_s32 hi_mpi_isp_get_auto_color_shading_attr(hi_vi_pipe vi_pipe, hi_isp_acs_attr *acs_attr);

hi_s32 hi_mpi_isp_set_nr_attr(hi_vi_pipe vi_pipe, const hi_isp_nr_attr *nr_attr);
hi_s32 hi_mpi_isp_get_nr_attr(hi_vi_pipe vi_pipe, hi_isp_nr_attr *nr_attr);

hi_s32 hi_mpi_isp_set_color_tone_attr(hi_vi_pipe vi_pipe, const hi_isp_color_tone_attr *ct_attr);
hi_s32 hi_mpi_isp_get_color_tone_attr(hi_vi_pipe vi_pipe, hi_isp_color_tone_attr *ct_attr);

hi_s32 hi_mpi_isp_set_gamma_attr(hi_vi_pipe vi_pipe, const hi_isp_gamma_attr *gamma_attr);
hi_s32 hi_mpi_isp_get_gamma_attr(hi_vi_pipe vi_pipe, hi_isp_gamma_attr *gamma_attr);

hi_s32 hi_mpi_isp_set_pregamma_attr(hi_vi_pipe vi_pipe, const hi_isp_pregamma_attr *pregamma_attr);
hi_s32 hi_mpi_isp_get_pregamma_attr(hi_vi_pipe vi_pipe, hi_isp_pregamma_attr *pregamma_attr);

hi_s32 hi_mpi_isp_set_local_cac_attr(hi_vi_pipe vi_pipe, const hi_isp_local_cac_attr *local_cac_attr);
hi_s32 hi_mpi_isp_get_local_cac_attr(hi_vi_pipe vi_pipe, hi_isp_local_cac_attr *local_cac_attr);
hi_s32 hi_mpi_isp_set_global_cac_attr(hi_vi_pipe vi_pipe, const hi_isp_global_cac_attr *global_cac_attr);
hi_s32 hi_mpi_isp_get_global_cac_attr(hi_vi_pipe vi_pipe, hi_isp_global_cac_attr *global_cac_attr);

hi_s32 hi_mpi_isp_set_sharpen_attr(hi_vi_pipe vi_pipe, const hi_isp_sharpen_attr *shp_attr);
hi_s32 hi_mpi_isp_get_sharpen_attr(hi_vi_pipe vi_pipe, hi_isp_sharpen_attr *shp_attr);

hi_s32 hi_mpi_isp_set_edge_mark_attr(hi_vi_pipe vi_pipe, const hi_isp_edge_mark_attr *edge_mark_attr);
hi_s32 hi_mpi_isp_get_edge_mark_attr(hi_vi_pipe vi_pipe, hi_isp_edge_mark_attr *edge_mark_attr);

hi_s32 hi_mpi_isp_set_hlc_attr(hi_vi_pipe vi_pipe, const hi_isp_hlc_attr *hlc_attr);
hi_s32 hi_mpi_isp_get_hlc_attr(hi_vi_pipe vi_pipe, hi_isp_hlc_attr *hlc_attr);

hi_s32 hi_mpi_isp_set_crosstalk_attr(hi_vi_pipe vi_pipe, const hi_isp_cr_attr *cr_attr);
hi_s32 hi_mpi_isp_get_crosstalk_attr(hi_vi_pipe vi_pipe, hi_isp_cr_attr *cr_attr);

hi_s32 hi_mpi_isp_set_ca_attr(hi_vi_pipe vi_pipe, const hi_isp_ca_attr *ca_attr);
hi_s32 hi_mpi_isp_get_ca_attr(hi_vi_pipe vi_pipe, hi_isp_ca_attr *ca_attr);

hi_s32 hi_mpi_isp_set_anti_false_color_attr(hi_vi_pipe vi_pipe, const hi_isp_anti_false_color_attr *anti_false_color);
hi_s32 hi_mpi_isp_get_anti_false_color_attr(hi_vi_pipe vi_pipe, hi_isp_anti_false_color_attr *anti_false_color);

hi_s32 hi_mpi_isp_set_demosaic_attr(hi_vi_pipe vi_pipe, const hi_isp_demosaic_attr *demosaic_attr);
hi_s32 hi_mpi_isp_get_demosaic_attr(hi_vi_pipe vi_pipe, hi_isp_demosaic_attr *demosaic_attr);

hi_s32 hi_mpi_isp_set_black_level_attr(hi_vi_pipe vi_pipe, const hi_isp_black_level_attr *black_level);
hi_s32 hi_mpi_isp_get_black_level_attr(hi_vi_pipe vi_pipe, hi_isp_black_level_attr *black_level);

hi_s32 hi_mpi_isp_set_clut_attr(hi_vi_pipe vi_pipe, const hi_isp_clut_attr *clut_attr);
hi_s32 hi_mpi_isp_get_clut_attr(hi_vi_pipe vi_pipe, hi_isp_clut_attr *clut_attr);
hi_s32 hi_mpi_isp_set_clut_coeff(hi_vi_pipe vi_pipe, const hi_isp_clut_lut *clut_lut);
hi_s32 hi_mpi_isp_get_clut_coeff(hi_vi_pipe vi_pipe, hi_isp_clut_lut *clut_lut);

hi_s32 hi_mpi_isp_set_csc_attr(hi_vi_pipe vi_pipe, const hi_isp_csc_attr *csc_attr);
hi_s32 hi_mpi_isp_get_csc_attr(hi_vi_pipe vi_pipe, hi_isp_csc_attr *csc_attr);

hi_s32 hi_mpi_isp_fpn_calibrate(hi_vi_pipe vi_pipe, hi_isp_fpn_calibrate_attr *calibrate_attr);

hi_s32 hi_mpi_isp_set_fpn_attr(hi_vi_pipe vi_pipe, const hi_isp_fpn_attr *fpn_attr);
hi_s32 hi_mpi_isp_get_fpn_attr(hi_vi_pipe vi_pipe, hi_isp_fpn_attr *fpn_attr);

hi_s32 hi_mpi_isp_calc_flicker_type(hi_vi_pipe vi_pipe, hi_isp_calc_flicker_input *input_param,
                                    hi_isp_calc_flicker_output *output_param, hi_video_frame_info frame[],
                                    hi_u32 array_size);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __MPI_VI_H__ */
