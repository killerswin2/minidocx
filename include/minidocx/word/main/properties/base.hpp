/**
 * Copyright (C) 2022-2025, Xie Zequn <totravel@foxmail.com>. All rights reserved.
 * Distributed under the MIT License (http://opensource.org/licenses/MIT)
 * Report bugs and download new versions at https://github.com/totravel/minidocx
 */

#pragma once

#include <optional>
#include <string>


namespace MINIDOCX_NAMESPACE
{
  enum class Alignment {
    Left,       // 左对齐
    Centered,   // 居中对齐
    Right,      // 右对齐
    Justified,  // 两端对齐
    Distributed // 分散对齐
  };

  enum class BorderStyle {
    Single,    // 单实线
    Double,    // 双实线
    Triple,    // 三实线
    Dotted,    // 点虚线
    Dashed,    // 短划线
    DotDash,   // 点划线
    Wave,      // 波浪线
    DoubleWave // 双波浪线
  };

  enum class NumberFormat
  {
    AIUEO,
    AIUEOFullWidth,
    ArabicAbjad,
    ArabicAlphabet,
    Baht,
    Bullet,
    CardinalText,
    Chicago,
    ChineseCounting,
    ChineseCountingThousand,
    ChineseLegalSimplified,
    Chosung,
    Custom,
    Decimal,
    DecimalEnclosedCircle,
    DecimalEnclosedCircleChinese,
    DecimalEnclosedFullstop,
    DecimalEnclosedParen,
    DecimalFullWidth,
    DecimalHalfWidth,
    DecimalZero,
    Dollar,
    Ganada,
    HebrewLetters,
    HebrewAlphabet,
    Hex,
    HindiConsonants,
    HindiCounting,
    HindiNumbers,
    HindiVowels,
    Ideograph,
    IdeographEnclosedCircle,
    IdeographLegalTraditional,
    IdeographTraditional,
    IdeographZodiac,
    IdeographZodiacTraditional,
    Iroha,
    IrohaFullWidth,
    JapaneseCounting,
    JapaneseDigitalTenThousand,
    JapaneseLegal,
    KoreanCounting,
    KoreanDigital,
    KoreanDigitalAlternate,
    KoreanLegal,
    LowerLetter,
    LowerRoman,
    None,
    NumberInDash,
    Ordinal,
    OrdinalText,
    RussianLower,
    RussianUpper,
    TaiwaneseCounting,
    TaiwaneseCountingThousand,
    TaiwaneseDigital,
    ThaiCounting,
    ThaiLetters,
    ThaiNumbers,
    UpperLetter,
    UpperRoman,
    VietnameseCounting,
  };

  enum class FieldCode
  {
    ADDRESSBLOCK,
    ADVANCE,
    ASK,
    AUTHOR,
    AUTOTEXT,
    AUTOTEXTLIST,
    BIBLIOGRAPHY,
    CITATION,
    COMMENTS,
    COMPARE,
    CREATEDATE,
    DATABASE,
    DATE,
    DOCPROPERTY,
    DOCVARIABLE,
    EDITTIME,
    FILENAME,
    FILESIZE,
    FILLIN,
    FORMCHECKBOX,
    FORMDROPDOWN,
    FORMTEXT,
    GOTOBUTTON,
    GREETINGLINE,
    HYPERLINK,
    IF,
    INCLUDEPICTURE,
    INCLUDETEXT,
    INDEX,
    KEYWORDS,
    LASTSAVEDBY,
    LINK,
    LISTNUM,
    MACROBUTTON,
    MERGEFIELD,
    MERGEREC,
    MERGESEQ,
    NEXT,
    NEXTIF,
    NOTEREF,
    NUMCHARS,
    NUMPAGES,
    NUMWORDS,
    PAGE,
    PAGEREF,
    PRINT,
    PRINTDATE,
    PRIVATE,
    QUOTE,
    RD,
    REF,
    REVNUM,
    SAVEDATE,
    SECTION,
    SECTIONPAGES,
    SEQ,
    SET,
    SKIPIF,
    STYLEREF,
    SUBJECT,
    SYMBOL,
    TA,
    TC,
    TEMPLATE,
    TIME,
    TITLE,
    TOA,
    TOC,
    USERADDRESS,
    USERINITIALS,
    USERNAME,
    XE
  };

  struct BorderProperties
  {
    BorderStyle style_ = BorderStyle::Single;
    size_t width_ = 4; // 8 = 1 pt
    std::string color_ = "auto"; // "auto" or "RRGGBB"
  };

  struct OutsideBorders
  {
    BorderProperties top_, bottom_, left_, right_;
  };

  struct InsideBorders
  {
    BorderProperties insideHorizontal_, insideVertical_;
  };

  struct TableBorders : OutsideBorders, InsideBorders {};
}
