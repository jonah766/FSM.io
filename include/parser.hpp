#ifndef PARSER_H
#define PARSER_H

#include "FSM_elements.hpp"
#include "tree.hpp"

#include <string_view>
#include <optional>
#include <variant>
#include <ranges>
#include <filesystem>

#include <tl/expected.hpp>
#include <tinyxml2.h>

namespace parser
{
    enum class ParseError
    {
        EmptyPath,
        InvalidEncodedDrawioFile,
        ExtractingDrawioString,
        URLDecodeError,
        Base64DecodeError,
        InflationError,
        DrawioToToken,
        DecisionPathError,
        InvalidDecodedDrawioFile,
        MissingSourceArrow,
        MissingTargetArrow,
        IncorrectPredicateFormat,
        InvalidBooleanSpecifier
    };

    void HandleParseError(const ParseError err);

    [[nodiscard]] auto extract_encoded_drawio(const std::filesystem::path &path) -> tl::expected<std::string, ParseError>;

    [[nodiscard]] auto inflate(std::string_view str) -> tl::expected<std::string, ParseError>;

    [[nodiscard]] auto base64_decode(std::string_view encoded_str) -> tl::expected<std::string, ParseError>;

    [[nodiscard]] auto url_decode(std::string_view encoded_str) -> tl::expected<std::string, ParseError>;

    [[nodiscard]] auto drawio_to_tokens(std::string_view drawio_xml_str) -> tl::expected<::TokenTuple, ParseError>;
}

#endif