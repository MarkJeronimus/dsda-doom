//
// Copyright(C) 2022 by Ryan Krafnick
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	DSDA Config
//

#ifndef __DSDA_CONFIG__
#define __DSDA_CONFIG__

#include <stdio.h>

#include "doomtype.h"

typedef enum {
  dsda_config_none,
  dsda_config_game_speed,
  dsda_config_default_complevel,
  dsda_config_default_skill,
  dsda_config_vanilla_keymap,
  dsda_config_menu_background,
  dsda_config_process_priority,
  dsda_config_max_player_corpse,
  dsda_config_input_profile,
  dsda_config_weapon_choice_1,
  dsda_config_weapon_choice_2,
  dsda_config_weapon_choice_3,
  dsda_config_weapon_choice_4,
  dsda_config_weapon_choice_5,
  dsda_config_weapon_choice_6,
  dsda_config_weapon_choice_7,
  dsda_config_weapon_choice_8,
  dsda_config_weapon_choice_9,
  dsda_config_flashing_hom,
  dsda_config_weapon_attack_alignment,
  dsda_config_sts_always_red,
  dsda_config_sts_pct_always_gray,
  dsda_config_sts_traditional_keys,
  dsda_config_strict_mode,
  dsda_config_vertmouse,
  dsda_config_freelook,
  dsda_config_autorun,
  dsda_config_command_display,
  dsda_config_coordinate_display,
  dsda_config_show_minimap,
  dsda_config_show_fps,
  dsda_config_show_level_splits,
  dsda_config_exhud,
  dsda_config_free_text,
  dsda_config_cheat_codes,
  dsda_config_organize_failed_demos,
  dsda_config_script_0,
  dsda_config_script_1,
  dsda_config_script_2,
  dsda_config_script_3,
  dsda_config_script_4,
  dsda_config_script_5,
  dsda_config_script_6,
  dsda_config_script_7,
  dsda_config_script_8,
  dsda_config_script_9,
  dsda_config_overrun_spechit_emulate,
  dsda_config_overrun_reject_emulate,
  dsda_config_overrun_intercept_emulate,
  dsda_config_overrun_playeringame_emulate,
  dsda_config_overrun_donut_emulate,
  dsda_config_overrun_missedbackside_emulate,
  dsda_config_comperr_passuse,
  dsda_config_comperr_hangsolid,
  dsda_config_comperr_blockmap,
  dsda_config_mapcolor_back,
  dsda_config_mapcolor_grid,
  dsda_config_mapcolor_wall,
  dsda_config_mapcolor_fchg,
  dsda_config_mapcolor_cchg,
  dsda_config_mapcolor_clsd,
  dsda_config_mapcolor_rkey,
  dsda_config_mapcolor_bkey,
  dsda_config_mapcolor_ykey,
  dsda_config_mapcolor_rdor,
  dsda_config_mapcolor_bdor,
  dsda_config_mapcolor_ydor,
  dsda_config_mapcolor_tele,
  dsda_config_mapcolor_secr,
  dsda_config_mapcolor_revsecr,
  dsda_config_mapcolor_exit,
  dsda_config_mapcolor_unsn,
  dsda_config_mapcolor_flat,
  dsda_config_mapcolor_sprt,
  dsda_config_mapcolor_item,
  dsda_config_mapcolor_hair,
  dsda_config_mapcolor_sngl,
  dsda_config_mapcolor_me,
  dsda_config_mapcolor_enemy,
  dsda_config_mapcolor_frnd,
  dsda_config_gl_skymode,
  dsda_config_gl_render_multisampling,
  dsda_config_gl_render_fov,
  dsda_config_gl_health_bar,
  dsda_config_gl_usevbo,
  dsda_config_gl_fade_mode,
  dsda_config_use_mouse,
  dsda_config_mouse_sensitivity_horiz,
  dsda_config_mouse_sensitivity_vert,
  dsda_config_mouse_acceleration,
  dsda_config_mouse_sensitivity_mlook,
  dsda_config_mouse_stutter_correction,
  dsda_config_mouse_doubleclick_as_use,
  dsda_config_mouse_carrytics,
  dsda_config_movement_mouseinvert,
  dsda_config_movement_mousestrafedivisor,
  dsda_config_fine_sensitivity,
  dsda_config_use_game_controller,
  dsda_config_deh_apply_cheats,
  dsda_config_movement_strafe50,
  dsda_config_movement_strafe50onturns,
  dsda_config_movement_shorttics,
  dsda_config_screenshot_dir,
  dsda_config_startup_delay_ms,
  dsda_config_hudadd_crosshair_color,
  dsda_config_hudadd_crosshair_target_color,
  dsda_config_hud_displayed,
  dsda_config_hudadd_demoprogressbar,
  dsda_config_hudadd_crosshair_scale,
  dsda_config_hudadd_crosshair_health,
  dsda_config_hudadd_crosshair_target,
  dsda_config_hudadd_crosshair_lock_target,
  dsda_config_hudadd_crosshair,
  dsda_config_hud_health_red,
  dsda_config_hud_health_yellow,
  dsda_config_hud_health_green,
  dsda_config_hud_ammo_red,
  dsda_config_hud_ammo_yellow,
  dsda_config_cycle_ghost_colors,
  dsda_config_auto_key_frame_interval,
  dsda_config_auto_key_frame_depth,
  dsda_config_auto_key_frame_timeout,
  dsda_config_ex_text_scale_x,
  dsda_config_ex_text_ratio_y,
  dsda_config_wipe_at_full_speed,
  dsda_config_show_demo_attempts,
  dsda_config_hide_horns,
  dsda_config_hide_weapon,
  dsda_config_organized_saves,
  dsda_config_command_history_size,
  dsda_config_hide_empty_commands,
  dsda_config_skip_quit_prompt,
  dsda_config_show_split_data,
  dsda_config_player_name,
  dsda_config_quickstart_cache_tics,
  dsda_config_death_use_action,
  dsda_config_allow_jumping,
  dsda_config_parallel_sfx_limit,
  dsda_config_parallel_sfx_window,
  dsda_config_movement_toggle_sfx,
  dsda_config_switch_when_ammo_runs_out,
  dsda_config_viewbob,
  dsda_config_weaponbob,
  dsda_config_quake_intensity,
  dsda_config_map_blinking_locks,
  dsda_config_map_secret_after,
  dsda_config_map_coordinates,
  dsda_config_map_totals,
  dsda_config_map_time,
  dsda_config_map_title,
  dsda_config_automap_overlay,
  dsda_config_automap_rotate,
  dsda_config_automap_follow,
  dsda_config_automap_grid,
  dsda_config_map_grid_size,
  dsda_config_map_scroll_speed,
  dsda_config_map_wheel_zoom,
  dsda_config_map_use_multisamling,
  dsda_config_map_textured,
  dsda_config_map_textured_trans,
  dsda_config_map_textured_overlay_trans,
  dsda_config_map_lines_overlay_trans,
  dsda_config_map_things_appearance,
  dsda_config_videomode,
  dsda_config_screen_resolution,
  dsda_config_custom_resolution,
  dsda_config_use_fullscreen,
  dsda_config_exclusive_fullscreen,
  dsda_config_render_vsync,
  dsda_config_fps_limit,
  dsda_config_background_fps_limit,
  dsda_config_usegamma,
  dsda_config_screenblocks,
  dsda_config_sdl_video_window_pos,
  dsda_config_palette_ondamage,
  dsda_config_palette_onbonus,
  dsda_config_palette_onpowers,
  dsda_config_render_wipescreen,
  dsda_config_render_screen_multiply,
  dsda_config_integer_scaling,
  dsda_config_render_aspect,
  dsda_config_render_doom_lightmaps,
  dsda_config_fake_contrast_mode,
  dsda_config_render_stretch_hud,
  dsda_config_render_patches_scalex,
  dsda_config_render_patches_scaley,
  dsda_config_render_stretchsky,
  dsda_config_boom_translucent_sprites,
  dsda_config_show_alive_monsters,
  dsda_config_left_analog_deadzone,
  dsda_config_right_analog_deadzone,
  dsda_config_left_trigger_deadzone,
  dsda_config_right_trigger_deadzone,
  dsda_config_left_analog_sensitivity_x,
  dsda_config_left_analog_sensitivity_y,
  dsda_config_right_analog_sensitivity_x,
  dsda_config_right_analog_sensitivity_y,
  dsda_config_analog_look_acceleration,
  dsda_config_swap_analogs,
  dsda_config_invert_analog_look,
  dsda_config_ansi_endoom,
  dsda_config_announce_map,
  dsda_config_count,
} dsda_config_identifier_t;

typedef enum {
  dsda_config_int,
  dsda_config_string,
} dsda_config_type_t;

void dsda_UpdateStrictMode(void);
void dsda_TrackConfigFeatures(void);
void dsda_RevertIntConfig(dsda_config_identifier_t id);
int dsda_MaxConfigLength(void);
void dsda_InitConfig(void);
dboolean dsda_ReadConfig(const char* name, const char* string_param, int int_param);
void dsda_WriteConfig(dsda_config_identifier_t id, int key_length, FILE* file);
void dsda_ApplyAdHocConfiguration(void);
int dsda_ToggleConfig(dsda_config_identifier_t id, dboolean persist);
int dsda_IncrementIntConfig(dsda_config_identifier_t id, dboolean persist);
int dsda_DecrementIntConfig(dsda_config_identifier_t id, dboolean persist);
int dsda_CycleConfig(dsda_config_identifier_t id, dboolean persist);
int dsda_UpdateIntConfig(dsda_config_identifier_t id, int value, dboolean persist);
const char* dsda_UpdateStringConfig(dsda_config_identifier_t id, const char* value, dboolean persist);
int dsda_IntConfig(dsda_config_identifier_t id);
int dsda_PersistentIntConfig(dsda_config_identifier_t id);
int dsda_TransientIntConfig(dsda_config_identifier_t id);
const char* dsda_StringConfig(dsda_config_identifier_t id);
const char* dsda_PersistentStringConfig(dsda_config_identifier_t id);
char* dsda_ConfigSummary(const char* name);
int dsda_ConfigIDByName(const char* name);
dsda_config_type_t dsda_ConfigType(dsda_config_identifier_t id);

#endif
