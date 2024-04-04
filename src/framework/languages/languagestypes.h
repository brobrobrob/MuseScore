/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MUSE_LANGUAGES_LANGUAGESTYPES_H
#define MUSE_LANGUAGES_LANGUAGESTYPES_H

#include <QHash>
#include <QMap>
#include <QString>

#include "io/path.h"

namespace muse::languages {
const QString SYSTEM_LANGUAGE_CODE = "system";
const QString PLACEHOLDER_LANGUAGE_CODE = "en@placeholder";

using LanguageFilesMap = QMap<QString /*resourceName*/, io::path_t>;

struct Language
{
    QString code;
    QString name;
    Qt::LayoutDirection direction = Qt::LeftToRight;

    LanguageFilesMap files;

    bool isLoaded() const
    {
        return !files.empty();
    }
};

using LanguagesHash = QHash<QString /*code*/, Language>;
}

#endif // MUSE_LANGUAGES_LANGUAGESTYPES_H
