/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.6.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGRtlSdrSettings.h
 *
 * RTLSDR
 */

#ifndef SWGRtlSdrSettings_H_
#define SWGRtlSdrSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGRtlSdrSettings: public SWGObject {
public:
    SWGRtlSdrSettings();
    SWGRtlSdrSettings(QString* json);
    virtual ~SWGRtlSdrSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGRtlSdrSettings* fromJson(QString &jsonString) override;

    qint32 getDevSampleRate();
    void setDevSampleRate(qint32 dev_sample_rate);

    qint32 getLowSampleRate();
    void setLowSampleRate(qint32 low_sample_rate);

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getGain();
    void setGain(qint32 gain);

    qint32 getLoPpmCorrection();
    void setLoPpmCorrection(qint32 lo_ppm_correction);

    qint32 getLog2Decim();
    void setLog2Decim(qint32 log2_decim);

    qint32 getFcPos();
    void setFcPos(qint32 fc_pos);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqImbalance();
    void setIqImbalance(qint32 iq_imbalance);

    qint32 getAgc();
    void setAgc(qint32 agc);

    qint32 getNoModMode();
    void setNoModMode(qint32 no_mod_mode);

    qint32 getOffsetTuning();
    void setOffsetTuning(qint32 offset_tuning);

    qint32 getTransverterMode();
    void setTransverterMode(qint32 transverter_mode);

    qint64 getTransverterDeltaFrequency();
    void setTransverterDeltaFrequency(qint64 transverter_delta_frequency);

    qint32 getIqOrder();
    void setIqOrder(qint32 iq_order);

    qint32 getRfBandwidth();
    void setRfBandwidth(qint32 rf_bandwidth);

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
    qint32 dev_sample_rate;
    bool m_dev_sample_rate_isSet;

    qint32 low_sample_rate;
    bool m_low_sample_rate_isSet;

    qint64 center_frequency;
    bool m_center_frequency_isSet;

    qint32 gain;
    bool m_gain_isSet;

    qint32 lo_ppm_correction;
    bool m_lo_ppm_correction_isSet;

    qint32 log2_decim;
    bool m_log2_decim_isSet;

    qint32 fc_pos;
    bool m_fc_pos_isSet;

    qint32 dc_block;
    bool m_dc_block_isSet;

    qint32 iq_imbalance;
    bool m_iq_imbalance_isSet;

    qint32 agc;
    bool m_agc_isSet;

    qint32 no_mod_mode;
    bool m_no_mod_mode_isSet;

    qint32 offset_tuning;
    bool m_offset_tuning_isSet;

    qint32 transverter_mode;
    bool m_transverter_mode_isSet;

    qint64 transverter_delta_frequency;
    bool m_transverter_delta_frequency_isSet;

    qint32 iq_order;
    bool m_iq_order_isSet;

    qint32 rf_bandwidth;
    bool m_rf_bandwidth_isSet;

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

#endif /* SWGRtlSdrSettings_H_ */
