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


#include "SWGBladeRF2OutputReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGBladeRF2OutputReport::SWGBladeRF2OutputReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBladeRF2OutputReport::SWGBladeRF2OutputReport() {
    frequency_range = nullptr;
    m_frequency_range_isSet = false;
    sample_rate_range = nullptr;
    m_sample_rate_range_isSet = false;
    bandwidth_range = nullptr;
    m_bandwidth_range_isSet = false;
    global_gain_range = nullptr;
    m_global_gain_range_isSet = false;
}

SWGBladeRF2OutputReport::~SWGBladeRF2OutputReport() {
    this->cleanup();
}

void
SWGBladeRF2OutputReport::init() {
    frequency_range = new SWGFrequencyRange();
    m_frequency_range_isSet = false;
    sample_rate_range = new SWGRange();
    m_sample_rate_range_isSet = false;
    bandwidth_range = new SWGRange();
    m_bandwidth_range_isSet = false;
    global_gain_range = new SWGRange();
    m_global_gain_range_isSet = false;
}

void
SWGBladeRF2OutputReport::cleanup() {
    if(frequency_range != nullptr) { 
        delete frequency_range;
    }
    if(sample_rate_range != nullptr) { 
        delete sample_rate_range;
    }
    if(bandwidth_range != nullptr) { 
        delete bandwidth_range;
    }
    if(global_gain_range != nullptr) { 
        delete global_gain_range;
    }
}

SWGBladeRF2OutputReport*
SWGBladeRF2OutputReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBladeRF2OutputReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&frequency_range, pJson["frequencyRange"], "SWGFrequencyRange", "SWGFrequencyRange");
    
    ::SWGSDRangel::setValue(&sample_rate_range, pJson["sampleRateRange"], "SWGRange", "SWGRange");
    
    ::SWGSDRangel::setValue(&bandwidth_range, pJson["bandwidthRange"], "SWGRange", "SWGRange");
    
    ::SWGSDRangel::setValue(&global_gain_range, pJson["globalGainRange"], "SWGRange", "SWGRange");
    
}

QString
SWGBladeRF2OutputReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGBladeRF2OutputReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if((frequency_range != nullptr) && (frequency_range->isSet())){
        toJsonValue(QString("frequencyRange"), frequency_range, obj, QString("SWGFrequencyRange"));
    }
    if((sample_rate_range != nullptr) && (sample_rate_range->isSet())){
        toJsonValue(QString("sampleRateRange"), sample_rate_range, obj, QString("SWGRange"));
    }
    if((bandwidth_range != nullptr) && (bandwidth_range->isSet())){
        toJsonValue(QString("bandwidthRange"), bandwidth_range, obj, QString("SWGRange"));
    }
    if((global_gain_range != nullptr) && (global_gain_range->isSet())){
        toJsonValue(QString("globalGainRange"), global_gain_range, obj, QString("SWGRange"));
    }

    return obj;
}

SWGFrequencyRange*
SWGBladeRF2OutputReport::getFrequencyRange() {
    return frequency_range;
}
void
SWGBladeRF2OutputReport::setFrequencyRange(SWGFrequencyRange* frequency_range) {
    this->frequency_range = frequency_range;
    this->m_frequency_range_isSet = true;
}

SWGRange*
SWGBladeRF2OutputReport::getSampleRateRange() {
    return sample_rate_range;
}
void
SWGBladeRF2OutputReport::setSampleRateRange(SWGRange* sample_rate_range) {
    this->sample_rate_range = sample_rate_range;
    this->m_sample_rate_range_isSet = true;
}

SWGRange*
SWGBladeRF2OutputReport::getBandwidthRange() {
    return bandwidth_range;
}
void
SWGBladeRF2OutputReport::setBandwidthRange(SWGRange* bandwidth_range) {
    this->bandwidth_range = bandwidth_range;
    this->m_bandwidth_range_isSet = true;
}

SWGRange*
SWGBladeRF2OutputReport::getGlobalGainRange() {
    return global_gain_range;
}
void
SWGBladeRF2OutputReport::setGlobalGainRange(SWGRange* global_gain_range) {
    this->global_gain_range = global_gain_range;
    this->m_global_gain_range_isSet = true;
}


bool
SWGBladeRF2OutputReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(frequency_range != nullptr && frequency_range->isSet()){ isObjectUpdated = true; break;}
        if(sample_rate_range != nullptr && sample_rate_range->isSet()){ isObjectUpdated = true; break;}
        if(bandwidth_range != nullptr && bandwidth_range->isSet()){ isObjectUpdated = true; break;}
        if(global_gain_range != nullptr && global_gain_range->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

