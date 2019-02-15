/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.4.4
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGFCDProSettings.h
 *
 * FCDPro
 */

#ifndef SWGFCDProSettings_H_
#define SWGFCDProSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGFCDProSettings: public SWGObject {
public:
    SWGFCDProSettings();
    SWGFCDProSettings(QString* json);
    virtual ~SWGFCDProSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGFCDProSettings* fromJson(QString &jsonString) override;

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getLOppmTenths();
    void setLOppmTenths(qint32 l_oppm_tenths);

    qint32 getLnaGainIndex();
    void setLnaGainIndex(qint32 lna_gain_index);

    qint32 getRfFilterIndex();
    void setRfFilterIndex(qint32 rf_filter_index);

    qint32 getLnaEnhanceIndex();
    void setLnaEnhanceIndex(qint32 lna_enhance_index);

    qint32 getBandIndex();
    void setBandIndex(qint32 band_index);

    qint32 getMixerGainIndex();
    void setMixerGainIndex(qint32 mixer_gain_index);

    qint32 getMixerFilterIndex();
    void setMixerFilterIndex(qint32 mixer_filter_index);

    qint32 getBiasCurrentIndex();
    void setBiasCurrentIndex(qint32 bias_current_index);

    qint32 getModeIndex();
    void setModeIndex(qint32 mode_index);

    qint32 getGain1Index();
    void setGain1Index(qint32 gain1_index);

    qint32 getRcFilterIndex();
    void setRcFilterIndex(qint32 rc_filter_index);

    qint32 getGain2Index();
    void setGain2Index(qint32 gain2_index);

    qint32 getGain3Index();
    void setGain3Index(qint32 gain3_index);

    qint32 getGain4Index();
    void setGain4Index(qint32 gain4_index);

    qint32 getIfFilterIndex();
    void setIfFilterIndex(qint32 if_filter_index);

    qint32 getGain5Index();
    void setGain5Index(qint32 gain5_index);

    qint32 getGain6Index();
    void setGain6Index(qint32 gain6_index);

    qint32 getLog2Decim();
    void setLog2Decim(qint32 log2_decim);

    qint32 getFcPos();
    void setFcPos(qint32 fc_pos);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqCorrection();
    void setIqCorrection(qint32 iq_correction);

    qint32 getTransverterMode();
    void setTransverterMode(qint32 transverter_mode);

    qint64 getTransverterDeltaFrequency();
    void setTransverterDeltaFrequency(qint64 transverter_delta_frequency);

    QString* getFileRecordName();
    void setFileRecordName(QString* file_record_name);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);


    virtual bool isSet() override;

private:
    qint64 center_frequency;
    bool m_center_frequency_isSet;

    qint32 l_oppm_tenths;
    bool m_l_oppm_tenths_isSet;

    qint32 lna_gain_index;
    bool m_lna_gain_index_isSet;

    qint32 rf_filter_index;
    bool m_rf_filter_index_isSet;

    qint32 lna_enhance_index;
    bool m_lna_enhance_index_isSet;

    qint32 band_index;
    bool m_band_index_isSet;

    qint32 mixer_gain_index;
    bool m_mixer_gain_index_isSet;

    qint32 mixer_filter_index;
    bool m_mixer_filter_index_isSet;

    qint32 bias_current_index;
    bool m_bias_current_index_isSet;

    qint32 mode_index;
    bool m_mode_index_isSet;

    qint32 gain1_index;
    bool m_gain1_index_isSet;

    qint32 rc_filter_index;
    bool m_rc_filter_index_isSet;

    qint32 gain2_index;
    bool m_gain2_index_isSet;

    qint32 gain3_index;
    bool m_gain3_index_isSet;

    qint32 gain4_index;
    bool m_gain4_index_isSet;

    qint32 if_filter_index;
    bool m_if_filter_index_isSet;

    qint32 gain5_index;
    bool m_gain5_index_isSet;

    qint32 gain6_index;
    bool m_gain6_index_isSet;

    qint32 log2_decim;
    bool m_log2_decim_isSet;

    qint32 fc_pos;
    bool m_fc_pos_isSet;

    qint32 dc_block;
    bool m_dc_block_isSet;

    qint32 iq_correction;
    bool m_iq_correction_isSet;

    qint32 transverter_mode;
    bool m_transverter_mode_isSet;

    qint64 transverter_delta_frequency;
    bool m_transverter_delta_frequency_isSet;

    QString* file_record_name;
    bool m_file_record_name_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

};

}

#endif /* SWGFCDProSettings_H_ */
