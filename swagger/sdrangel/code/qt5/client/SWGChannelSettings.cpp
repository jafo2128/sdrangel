/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGChannelSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGChannelSettings::SWGChannelSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGChannelSettings::SWGChannelSettings() {
    init();
}

SWGChannelSettings::~SWGChannelSettings() {
    this->cleanup();
}

void
SWGChannelSettings::init() {
    channel_type = new QString("");
    tx = 0;
    nfm_demod_settings = new SWGNFMDemodSettings();
    nfm_mod_settings = new SWGNFMModSettings();
}

void
SWGChannelSettings::cleanup() {
    
    if(channel_type != nullptr) {
        delete channel_type;
    }


    if(nfm_demod_settings != nullptr) {
        delete nfm_demod_settings;
    }

    if(nfm_mod_settings != nullptr) {
        delete nfm_mod_settings;
    }
}

SWGChannelSettings*
SWGChannelSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGChannelSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channel_type, pJson["channelType"], "QString", "QString");
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    ::SWGSDRangel::setValue(&nfm_demod_settings, pJson["NFMDemodSettings"], "SWGNFMDemodSettings", "SWGNFMDemodSettings");
    ::SWGSDRangel::setValue(&nfm_mod_settings, pJson["NFMModSettings"], "SWGNFMModSettings", "SWGNFMModSettings");
}

QString
SWGChannelSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGChannelSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("channelType"), channel_type, obj, QString("QString"));

    obj->insert("tx", QJsonValue(tx));

    toJsonValue(QString("NFMDemodSettings"), nfm_demod_settings, obj, QString("SWGNFMDemodSettings"));

    toJsonValue(QString("NFMModSettings"), nfm_mod_settings, obj, QString("SWGNFMModSettings"));

    return obj;
}

QString*
SWGChannelSettings::getChannelType() {
    return channel_type;
}
void
SWGChannelSettings::setChannelType(QString* channel_type) {
    this->channel_type = channel_type;
}

qint32
SWGChannelSettings::getTx() {
    return tx;
}
void
SWGChannelSettings::setTx(qint32 tx) {
    this->tx = tx;
}

SWGNFMDemodSettings*
SWGChannelSettings::getNfmDemodSettings() {
    return nfm_demod_settings;
}
void
SWGChannelSettings::setNfmDemodSettings(SWGNFMDemodSettings* nfm_demod_settings) {
    this->nfm_demod_settings = nfm_demod_settings;
}

SWGNFMModSettings*
SWGChannelSettings::getNfmModSettings() {
    return nfm_mod_settings;
}
void
SWGChannelSettings::setNfmModSettings(SWGNFMModSettings* nfm_mod_settings) {
    this->nfm_mod_settings = nfm_mod_settings;
}


}
