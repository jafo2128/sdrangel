/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.5.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGFreeDVDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFreeDVDemodSettings::SWGFreeDVDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFreeDVDemodSettings::SWGFreeDVDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    volume_in = 0.0f;
    m_volume_in_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
    free_dv_mode = 0;
    m_free_dv_mode_isSet = false;
}

SWGFreeDVDemodSettings::~SWGFreeDVDemodSettings() {
    this->cleanup();
}

void
SWGFreeDVDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    volume_in = 0.0f;
    m_volume_in_isSet = false;
    span_log2 = 0;
    m_span_log2_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    agc = 0;
    m_agc_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
    free_dv_mode = 0;
    m_free_dv_mode_isSet = false;
}

void
SWGFreeDVDemodSettings::cleanup() {







    if(title != nullptr) { 
        delete title;
    }
    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }

}

SWGFreeDVDemodSettings*
SWGFreeDVDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFreeDVDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    
    ::SWGSDRangel::setValue(&volume_in, pJson["volumeIn"], "float", "");
    
    ::SWGSDRangel::setValue(&span_log2, pJson["spanLog2"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&agc, pJson["agc"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&free_dv_mode, pJson["freeDVMode"], "qint32", "");
    
}

QString
SWGFreeDVDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFreeDVDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }
    if(m_volume_in_isSet){
        obj->insert("volumeIn", QJsonValue(volume_in));
    }
    if(m_span_log2_isSet){
        obj->insert("spanLog2", QJsonValue(span_log2));
    }
    if(m_audio_mute_isSet){
        obj->insert("audioMute", QJsonValue(audio_mute));
    }
    if(m_agc_isSet){
        obj->insert("agc", QJsonValue(agc));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }
    if(m_free_dv_mode_isSet){
        obj->insert("freeDVMode", QJsonValue(free_dv_mode));
    }

    return obj;
}

qint64
SWGFreeDVDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGFreeDVDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGFreeDVDemodSettings::getVolume() {
    return volume;
}
void
SWGFreeDVDemodSettings::setVolume(float volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

float
SWGFreeDVDemodSettings::getVolumeIn() {
    return volume_in;
}
void
SWGFreeDVDemodSettings::setVolumeIn(float volume_in) {
    this->volume_in = volume_in;
    this->m_volume_in_isSet = true;
}

qint32
SWGFreeDVDemodSettings::getSpanLog2() {
    return span_log2;
}
void
SWGFreeDVDemodSettings::setSpanLog2(qint32 span_log2) {
    this->span_log2 = span_log2;
    this->m_span_log2_isSet = true;
}

qint32
SWGFreeDVDemodSettings::getAudioMute() {
    return audio_mute;
}
void
SWGFreeDVDemodSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
    this->m_audio_mute_isSet = true;
}

qint32
SWGFreeDVDemodSettings::getAgc() {
    return agc;
}
void
SWGFreeDVDemodSettings::setAgc(qint32 agc) {
    this->agc = agc;
    this->m_agc_isSet = true;
}

qint32
SWGFreeDVDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGFreeDVDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGFreeDVDemodSettings::getTitle() {
    return title;
}
void
SWGFreeDVDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGFreeDVDemodSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGFreeDVDemodSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}

qint32
SWGFreeDVDemodSettings::getFreeDvMode() {
    return free_dv_mode;
}
void
SWGFreeDVDemodSettings::setFreeDvMode(qint32 free_dv_mode) {
    this->free_dv_mode = free_dv_mode;
    this->m_free_dv_mode_isSet = true;
}


bool
SWGFreeDVDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){ isObjectUpdated = true; break;}
        if(m_volume_isSet){ isObjectUpdated = true; break;}
        if(m_volume_in_isSet){ isObjectUpdated = true; break;}
        if(m_span_log2_isSet){ isObjectUpdated = true; break;}
        if(m_audio_mute_isSet){ isObjectUpdated = true; break;}
        if(m_agc_isSet){ isObjectUpdated = true; break;}
        if(m_rgb_color_isSet){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(audio_device_name != nullptr && *audio_device_name != QString("")){ isObjectUpdated = true; break;}
        if(m_free_dv_mode_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

