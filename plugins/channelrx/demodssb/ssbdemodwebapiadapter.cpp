///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2019 Edouard Griffiths, F4EXB.                                  //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#include "SWGChannelSettings.h"
#include "ssbdemod.h"
#include "ssbdemodwebapiadapter.h"

SSBDemodWebAPIAdapter::SSBDemodWebAPIAdapter() :
    ChannelAPI(SSBDemod::m_channelIdURI, ChannelAPI::StreamSingleSink)
{}

SSBDemodWebAPIAdapter::~SSBDemodWebAPIAdapter()
{}

int SSBDemodWebAPIAdapter::webapiSettingsGet(
        SWGSDRangel::SWGChannelSettings& response,
        QString& errorMessage)
{
    (void) errorMessage;
    response.setSsbDemodSettings(new SWGSDRangel::SWGSSBDemodSettings());
    response.getSsbDemodSettings()->init();
    SSBDemod::webapiFormatChannelSettings(response, m_settings);

    return 200;
}

int SSBDemodWebAPIAdapter::webapiSettingsPutPatch(
        bool force,
        const QStringList& channelSettingsKeys,
        SWGSDRangel::SWGChannelSettings& response,
        QString& errorMessage)
{
    (void) errorMessage;
    SSBDemod::webapiUpdateChannelSettings(m_settings, channelSettingsKeys, response);

    return 200;
}