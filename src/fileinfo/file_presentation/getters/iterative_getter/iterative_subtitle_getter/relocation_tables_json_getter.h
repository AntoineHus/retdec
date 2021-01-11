/**
 * @file src/fileinfo/file_presentation/getters/iterative_getter/iterative_subtitle_getter/relocation_tables_json_getter.h
 * @brief Definition of RelocationTablesJsonGetter class.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#ifndef FILEINFO_FILE_PRESENTATION_GETTERS_ITERATIVE_GETTER_ITERATIVE_SUBTITLE_GETTER_RELOCATION_TABLES_JSON_GETTER_H
#define FILEINFO_FILE_PRESENTATION_GETTERS_ITERATIVE_GETTER_ITERATIVE_SUBTITLE_GETTER_RELOCATION_TABLES_JSON_GETTER_H

#include "fileinfo/file_presentation/getters/iterative_getter/iterative_subtitle_getter/iterative_subtitle_getter.h"

namespace retdec {
namespace fileinfo {

/**
 * Getter for relocation tables
 */
class RelocationTablesJsonGetter : public IterativeSubtitleGetter
{
	public:
		RelocationTablesJsonGetter(FileInformation &fileInfo);

		virtual std::size_t getBasicInfo(std::size_t structIndex, std::vector<std::string> &desc, std::vector<std::string> &info) const override;
		virtual bool getRecord(std::size_t structIndex, std::size_t recIndex, std::vector<std::string> &record) const override;
		virtual bool getFlags(std::size_t structIndex, std::size_t recIndex, std::string &flagsValue, std::vector<std::string> &desc) const override;
};

} // namespace fileinfo
} // namespace retdec

#endif
