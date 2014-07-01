/*
 * tegra_asoc_machine_alt.h
 *
 * Copyright (c) 2014 NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TEGRA_ASOC_MACHINE_ALT_H__
#define __TEGRA_ASOC_MACHINE_ALT_H__

enum tegra124_xbar_dai_link {
	TEGRA124_DAI_LINK_APBIF0,
	TEGRA124_DAI_LINK_APBIF1,
	TEGRA124_DAI_LINK_APBIF2,
	TEGRA124_DAI_LINK_APBIF3,
	TEGRA124_DAI_LINK_APBIF4,
	TEGRA124_DAI_LINK_APBIF5,
	TEGRA124_DAI_LINK_APBIF6,
	TEGRA124_DAI_LINK_APBIF7,
	TEGRA124_DAI_LINK_APBIF8,
	TEGRA124_DAI_LINK_APBIF9,
	TEGRA124_DAI_LINK_AMX0_0,
	TEGRA124_DAI_LINK_AMX0_1,
	TEGRA124_DAI_LINK_AMX0_2,
	TEGRA124_DAI_LINK_AMX0_3,
	TEGRA124_DAI_LINK_AMX0,
	TEGRA124_DAI_LINK_AMX1_0,
	TEGRA124_DAI_LINK_AMX1_1,
	TEGRA124_DAI_LINK_AMX1_2,
	TEGRA124_DAI_LINK_AMX1_3,
	TEGRA124_DAI_LINK_AMX1,
	TEGRA124_DAI_LINK_ADX0,
	TEGRA124_DAI_LINK_ADX0_0,
	TEGRA124_DAI_LINK_ADX0_1,
	TEGRA124_DAI_LINK_ADX0_2,
	TEGRA124_DAI_LINK_ADX0_3,
	TEGRA124_DAI_LINK_ADX1,
	TEGRA124_DAI_LINK_ADX1_0,
	TEGRA124_DAI_LINK_ADX1_1,
	TEGRA124_DAI_LINK_ADX1_2,
	TEGRA124_DAI_LINK_ADX1_3,
	TEGRA124_DAI_LINK_DAM0_0,
	TEGRA124_DAI_LINK_DAM0_1,
	TEGRA124_DAI_LINK_DAM0,
	TEGRA124_DAI_LINK_DAM1_0,
	TEGRA124_DAI_LINK_DAM1_1,
	TEGRA124_DAI_LINK_DAM1,
	TEGRA124_DAI_LINK_DAM2_0,
	TEGRA124_DAI_LINK_DAM2_1,
	TEGRA124_DAI_LINK_DAM2,
	TEGRA124_DAI_LINK_AFC0_RX,
	TEGRA124_DAI_LINK_AFC0_TX,
	TEGRA124_DAI_LINK_AFC1_RX,
	TEGRA124_DAI_LINK_AFC1_TX,
	TEGRA124_DAI_LINK_AFC2_RX,
	TEGRA124_DAI_LINK_AFC2_TX,
	TEGRA124_DAI_LINK_AFC3_RX,
	TEGRA124_DAI_LINK_AFC3_TX,
	TEGRA124_DAI_LINK_AFC4_RX,
	TEGRA124_DAI_LINK_AFC4_TX,
	TEGRA124_DAI_LINK_AFC5_RX,
	TEGRA124_DAI_LINK_AFC5_TX,
	TEGRA124_XBAR_DAI_LINKS, /* Total number of xbar dai links */
};

enum tegra210_xbar_dai_link {
	TEGRA210_DAI_LINK_ADMAIF1,
	TEGRA210_DAI_LINK_ADMAIF2,
	TEGRA210_DAI_LINK_ADMAIF3,
	TEGRA210_DAI_LINK_ADMAIF4,
	TEGRA210_DAI_LINK_ADMAIF5,
	TEGRA210_DAI_LINK_ADMAIF6,
	TEGRA210_DAI_LINK_ADMAIF7,
	TEGRA210_DAI_LINK_ADMAIF8,
	TEGRA210_DAI_LINK_ADMAIF9,
	TEGRA210_DAI_LINK_ADMAIF10,
	TEGRA210_DAI_LINK_AMX1_1,
	TEGRA210_DAI_LINK_AMX1_2,
	TEGRA210_DAI_LINK_AMX1_3,
	TEGRA210_DAI_LINK_AMX1_4,
	TEGRA210_DAI_LINK_AMX1,
	TEGRA210_DAI_LINK_AMX2_1,
	TEGRA210_DAI_LINK_AMX2_2,
	TEGRA210_DAI_LINK_AMX2_3,
	TEGRA210_DAI_LINK_AMX2_4,
	TEGRA210_DAI_LINK_AMX2,
	TEGRA210_DAI_LINK_ADX1,
	TEGRA210_DAI_LINK_ADX1_1,
	TEGRA210_DAI_LINK_ADX1_2,
	TEGRA210_DAI_LINK_ADX1_3,
	TEGRA210_DAI_LINK_ADX1_4,
	TEGRA210_DAI_LINK_ADX2,
	TEGRA210_DAI_LINK_ADX2_1,
	TEGRA210_DAI_LINK_ADX2_2,
	TEGRA210_DAI_LINK_ADX2_3,
	TEGRA210_DAI_LINK_ADX2_4,
	TEGRA210_DAI_LINK_MIXER1_RX1,
	TEGRA210_DAI_LINK_MIXER1_RX2,
	TEGRA210_DAI_LINK_MIXER1_RX3,
	TEGRA210_DAI_LINK_MIXER1_RX4,
	TEGRA210_DAI_LINK_MIXER1_RX5,
	TEGRA210_DAI_LINK_MIXER1_RX6,
	TEGRA210_DAI_LINK_MIXER1_RX7,
	TEGRA210_DAI_LINK_MIXER1_RX8,
	TEGRA210_DAI_LINK_MIXER1_RX9,
	TEGRA210_DAI_LINK_MIXER1_RX10,
	TEGRA210_DAI_LINK_MIXER1_TX1,
	TEGRA210_DAI_LINK_MIXER1_TX2,
	TEGRA210_DAI_LINK_MIXER1_TX3,
	TEGRA210_DAI_LINK_MIXER1_TX4,
	TEGRA210_DAI_LINK_MIXER1_TX5,
	TEGRA210_DAI_LINK_SFC1_RX,
	TEGRA210_DAI_LINK_SFC1_TX,
	TEGRA210_DAI_LINK_SFC2_RX,
	TEGRA210_DAI_LINK_SFC2_TX,
	TEGRA210_DAI_LINK_SFC3_RX,
	TEGRA210_DAI_LINK_SFC3_TX,
	TEGRA210_DAI_LINK_SFC4_RX,
	TEGRA210_DAI_LINK_SFC4_TX,
	TEGRA210_DAI_LINK_MVC1_RX,
	TEGRA210_DAI_LINK_MVC1_TX,
	TEGRA210_DAI_LINK_MVC2_RX,
	TEGRA210_DAI_LINK_MVC2_TX,
	TEGRA210_DAI_LINK_AFC1_RX,
	TEGRA210_DAI_LINK_AFC1_TX,
	TEGRA210_DAI_LINK_AFC2_RX,
	TEGRA210_DAI_LINK_AFC2_TX,
	TEGRA210_DAI_LINK_AFC3_RX,
	TEGRA210_DAI_LINK_AFC3_TX,
	TEGRA210_DAI_LINK_AFC4_RX,
	TEGRA210_DAI_LINK_AFC4_TX,
	TEGRA210_DAI_LINK_AFC5_RX,
	TEGRA210_DAI_LINK_AFC5_TX,
	TEGRA210_DAI_LINK_AFC6_RX,
	TEGRA210_DAI_LINK_AFC6_TX,
	TEGRA210_XBAR_DAI_LINKS, /* Total number of xbar dai links */
};

enum tegra124_xbar_codec_conf {
	TEGRA124_CODEC_AMX0_CONF,
	TEGRA124_CODEC_AMX1_CONF,
	TEGRA124_CODEC_ADX0_CONF,
	TEGRA124_CODEC_ADX1_CONF,
	TEGRA124_CODEC_DAM0_CONF,
	TEGRA124_CODEC_DAM1_CONF,
	TEGRA124_CODEC_DAM2_CONF,
	TEGRA124_CODEC_AFC0_CONF,
	TEGRA124_CODEC_AFC1_CONF,
	TEGRA124_CODEC_AFC2_CONF,
	TEGRA124_CODEC_AFC3_CONF,
	TEGRA124_CODEC_AFC4_CONF,
	TEGRA124_CODEC_AFC5_CONF,
	TEGRA124_CODEC_I2S0_CONF,
	TEGRA124_CODEC_I2S1_CONF,
	TEGRA124_CODEC_I2S2_CONF,
	TEGRA124_CODEC_I2S3_CONF,
	TEGRA124_CODEC_I2S4_CONF,
	TEGRA124_CODEC_SPDIF_CONF,
	TEGRA124_XBAR_CODEC_CONF, /* Total number of xbar codec conf */
};

enum tegra210_xbar_codec_conf {
	TEGRA210_CODEC_AMX1_CONF,
	TEGRA210_CODEC_AMX2_CONF,
	TEGRA210_CODEC_ADX1_CONF,
	TEGRA210_CODEC_ADX2_CONF,
	TEGRA210_CODEC_SFC1_CONF,
	TEGRA210_CODEC_SFC2_CONF,
	TEGRA210_CODEC_SFC3_CONF,
	TEGRA210_CODEC_SFC4_CONF,
	TEGRA210_CODEC_MVC1_CONF,
	TEGRA210_CODEC_MVC2_CONF,
	TEGRA210_CODEC_AFC1_CONF,
	TEGRA210_CODEC_AFC2_CONF,
	TEGRA210_CODEC_AFC3_CONF,
	TEGRA210_CODEC_AFC4_CONF,
	TEGRA210_CODEC_AFC5_CONF,
	TEGRA210_CODEC_AFC6_CONF,
	TEGRA210_CODEC_I2S1_CONF,
	TEGRA210_CODEC_I2S2_CONF,
	TEGRA210_CODEC_I2S3_CONF,
	TEGRA210_CODEC_I2S4_CONF,
	TEGRA210_CODEC_I2S5_CONF,
	TEGRA210_CODEC_SPDIF_CONF,
	TEGRA210_XBAR_CODEC_CONF, /* Total number of xbar codec conf */
};

struct snd_soc_dai_link *tegra_machine_get_dai_link(void);

void tegra_machine_remove_dai_link(void);

int tegra_machine_append_dai_link(struct snd_soc_dai_link *link,
		unsigned int link_size);

void tegra_machine_set_dai_ops(int link, struct snd_soc_ops *ops);

void tegra_machine_set_dai_init(int link, void *ptr);

void tegra_machine_set_dai_params(int link,
		struct snd_soc_pcm_stream *params);

void tegra_machine_set_dai_fmt(int link, unsigned int fmt);

struct snd_soc_codec_conf *tegra_machine_get_codec_conf(void);

void tegra_machine_remove_codec_conf(void);

int tegra_machine_append_codec_conf(struct snd_soc_codec_conf *conf,
		unsigned int conf_size);

#endif
